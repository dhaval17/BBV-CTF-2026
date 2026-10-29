/*
 * firmware.c - C reconstruction of firmware_backup.hex
 *
 * Target   : ATmega32 (21 vectors, RAMEND 0x085F), F_CPU = 8 MHz
 *            (TWBR = 32 gives 100 kHz I2C; the _delay_ms() loop counts match 8 MHz)
 * Toolchain: avr-gcc / avr-libc (the image uses __do_copy_data, __do_clear_bss,
 *            rand(), eeprom_read_byte(), eeprom_update_byte() and __divmodhi4)
 *
 * Hardware, as recovered from the binary:
 *   SSD1306 128x64 OLED over TWI, address 0x3C
 *   PC4  MENU button   (opens/closes the team menu)
 *   PC5  CTF button    (submit / select / enter flag screen)
 *   PC6  "0" / down    (PC6 + PC7 held together = wipe progress)
 *   PC7  "1" / up
 *   PD6  WS2812 strip A, 10 LEDs (chaser / rainbow ring)
 *   PD4  WS2812 strip B,  2 LEDs (glow, "blinks" every ~74 frames)
 *   PD3  WS2812 strip C,  2 LEDs (lit only once flag 5 is solved)
 *   PC3  WS2812 strip D,  2 LEDs (constant dim white)
 *   EEPROM[0]  solved bitmask, bit n = flag n
 *
 * The function names are mine; the original addresses are given for each one so
 * you can cross-check them against the Ghidra listing (byte addresses).
 * Comments marked "quirk" describe behaviour that looks unintended but is
 * reproduced as-is.
 */

#define F_CPU 8000000UL

#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/eeprom.h>
#include <util/delay.h>

#include "firmware_data.h"

/* ------------------------------------------------------------------------ */
/* Constants                                                                */
/* ------------------------------------------------------------------------ */

#define OLED_ADDR_W        0x78     /* 0x3C << 1 */
#define OLED_CTRL_CMD      0x00
#define OLED_CTRL_DATA     0x40

#define BTN_MENU           _BV(PC4)
#define BTN_CTF            _BV(PC5)
#define BTN_ZERO           _BV(PC6)
#define BTN_ONE            _BV(PC7)

#define NUM_FLAGS          5
#define FLAG_BITS          8
#define PROGRESS_ADDR      ((uint8_t *)0)

#define STRIP_A_LEN        10
#define RAIN_DROPS         8

/* The five accepted flags, in bit order of the EEPROM progress byte. */
static const uint8_t flag_values[NUM_FLAGS] = { 0xEB, 0xA7, 0x56, 0xC9, 0x2B };

/* WS2812 byte order is G, R, B. */
struct pixel {
    uint8_t g, r, b;
};

struct rain_drop {
    uint8_t x;      /* column in pixels        */
    uint8_t y;      /* head row in OLED pages  */
    uint8_t len;    /* trail length, 3..6      */
};

/* .bss at SRAM 0x0300 */
static struct rain_drop rain[RAIN_DROPS];

/* .data at SRAM 0x0064: menu entries */
static const char *const team_names[NUM_FLAGS] = {
    "1. RED TEAM",
    "2. BLUE TEAM",
    "3. PURPLE TEAM",
    "4. SLOW RGB",
    "5. PARTY TEAM",
};

/* Present at SRAM 0x01A7 but never referenced: an author tag. */
const char author_tag[] = "heemanshu";

/* ------------------------------------------------------------------------ */
/* Font                                                                     */
/* ------------------------------------------------------------------------ */

/* 0x0992: map an ASCII character to a font5x7 index; unknown chars -> blank */
static int font_index(char c)
{
    if ((uint8_t)(c - 'A') < 26)
        return c - '@';                 /*  1..26 */
    if ((uint8_t)(c - 'a') < 26)
        return c - '8';                 /* 41..66 */
    if ((uint8_t)(c - '0') < 10)
        return c - 0x15;                /* 27..36 */
    switch (c) {
    case '.': return 37;
    case ':': return 38;
    case '>': return 39;
    case '<': return 40;
    default:  return 0;
    }
}

/* ------------------------------------------------------------------------ */
/* TWI / SSD1306                                                            */
/* ------------------------------------------------------------------------ */

/* 0x09EC */
static void i2c_start(void)
{
    TWCR = _BV(TWINT) | _BV(TWSTA) | _BV(TWEN);
    while (!(TWCR & _BV(TWINT)))
        ;
}

/* 0x09F8 */
static void i2c_write(uint8_t b)
{
    TWDR = b;
    TWCR = _BV(TWINT) | _BV(TWEN);
    while (!(TWCR & _BV(TWINT)))
        ;
}

static inline void i2c_stop(void)
{
    TWCR = _BV(TWINT) | _BV(TWSTO) | _BV(TWEN);
}

static inline void oled_data_begin(void)
{
    i2c_start();
    i2c_write(OLED_ADDR_W);
    i2c_write(OLED_CTRL_DATA);
}

/* 0x0A06 */
static void oled_cmd(uint8_t c)
{
    i2c_start();
    i2c_write(OLED_ADDR_W);
    i2c_write(OLED_CTRL_CMD);
    i2c_write(c);
    i2c_stop();
}

/* 0x0A28 */
static void oled_init(void)
{
    _delay_ms(100);
    oled_cmd(0xAE);                     /* display off              */
    oled_cmd(0xA1);                     /* segment remap            */
    oled_cmd(0xC8);                     /* COM scan direction: rev  */
    oled_cmd(0xDA); oled_cmd(0x12);     /* COM pins config          */
    oled_cmd(0x20); oled_cmd(0x02);     /* page addressing mode     */
    oled_cmd(0x8D); oled_cmd(0x14);     /* charge pump on           */
    oled_cmd(0xAF);                     /* display on               */
}

/* 0x0A78 */
static void oled_clear(void)
{
    for (uint8_t page = 0xB0; page != 0xB8; page++) {
        oled_cmd(page);
        oled_cmd(0x00);
        oled_cmd(0x10);
        oled_data_begin();
        for (uint8_t x = 0; x != 128; x++)
            i2c_write(0x00);
        i2c_stop();
    }
}

/* 0x0AC2 */
static void oled_clear_line(uint8_t page)
{
    oled_cmd(0xB0 + page);
    oled_cmd(0x00);
    oled_cmd(0x10);
    oled_data_begin();
    for (uint8_t x = 0; x != 128; x++)
        i2c_write(0x00);
    i2c_stop();
}

/* 0x0AFC */
static void oled_set_cursor(uint8_t page, uint8_t col)
{
    oled_cmd(0xB0 + page);
    oled_cmd(col & 0x0F);
    oled_cmd(0x10 | (col >> 4));
}

/* 0x0B1E: 6 px per character (5 glyph columns + 1 blank) */
static void oled_print(const char *s)
{
    while (*s) {
        const uint8_t *glyph = font5x7[font_index(*s++)];
        oled_data_begin();
        for (uint8_t i = 0; i != 5; i++)
            i2c_write(glyph[i]);
        i2c_write(0x00);
        i2c_stop();
    }
}

/* 0x0B92 */
static void oled_print_centered(uint8_t page, const char *s)
{
    uint8_t len = 0;
    while (s[len])
        len++;

    uint16_t width = (uint16_t)len * 6;
    uint8_t col = (width < 128) ? (128 - width) / 2 : 0;

    oled_set_cursor(page, col);
    oled_print(s);
}

/* 0x0BE8: full-screen 128x64 image from flash, drawn inverted */
static void oled_draw_bitmap_inverted(const uint8_t *bmp)
{
    for (uint8_t page = 0; page != 8; page++) {
        oled_set_cursor(page, 0);
        oled_data_begin();
        for (uint8_t x = 0; x != 128; x++)
            i2c_write(~pgm_read_byte(bmp++));
        i2c_stop();
    }
}

/* 0x0C4A: 32x32 icon at column 48, pages 1..4 */
static void oled_draw_ninja(uint8_t frame)
{
    const uint8_t *p = frame ? ninja_icon[1] : ninja_icon[0];

    for (uint8_t page = 1; page != 5; page++) {
        oled_set_cursor(page, 48);
        oled_data_begin();
        for (uint8_t x = 0; x != 32; x++)
            i2c_write(pgm_read_byte(p++));
        i2c_stop();
    }
}

/* ------------------------------------------------------------------------ */
/* "Matrix rain" animation                                                  */
/* ------------------------------------------------------------------------ */

/* 0x0CB6 */
static void rain_init(void)
{
    oled_clear();

    struct rain_drop *d = rain;
    for (uint8_t col = 0; col != 128; col += 16, d++) {
        d->x   = rand() % 8 + col;
        d->y   = rand() % 8;
        d->len = rand() % 4 + 3;
    }
}

/* 0x0D2C */
static void rain_step(void)
{
    struct rain_drop *d = rain;

    for (uint8_t col = 0; col != 128; col += 16, d++) {
        /* erase the cell that just fell off the end of the trail */
        if (d->y >= d->len && (uint8_t)(d->y - d->len) < 8) {
            oled_set_cursor(d->y - d->len, d->x);
            oled_data_begin();
            for (uint8_t i = 6; i; i--)
                i2c_write(0x00);
            i2c_stop();
        }

        /* trail: random dimmed (checkerboard-masked) glyphs */
        for (uint8_t j = 1; j < d->len; j++) {
            if (d->y < j || (uint8_t)(d->y - j) >= 8)
                continue;
            oled_set_cursor(d->y - j, d->x);
            const uint8_t *glyph = font5x7[rand() % 36 + 1];   /* A-Z, 0-9 */
            oled_data_begin();
            for (uint8_t i = 5; i; i--)
                i2c_write(*glyph++ & 0x55);
            i2c_write(0x00);
            i2c_stop();
        }

        /* head: random full-brightness glyph */
        if (d->y < 8) {
            oled_set_cursor(d->y, d->x);
            const uint8_t *glyph = font5x7[rand() % 36 + 1];
            oled_data_begin();
            for (uint8_t i = 0; i != 5; i++)
                i2c_write(glyph[i]);
            i2c_write(0x00);
            i2c_stop();
        }

        d->y++;
        if ((int)d->y >= (int)d->len + 8) {
            d->y   = 0;
            d->x   = rand() % 8 + col;
            d->len = rand() % 4 + 3;
        }
    }
}

/* ------------------------------------------------------------------------ */
/* WS2812 bit-bang                                                          */
/* ------------------------------------------------------------------------ */

/*
 * 0x0EE4 (PD6), 0x0F2E (PD4), 0x0F78 (PD3), 0x0FC2 (PC3)
 * Four copies of the same routine, one per pin. At 8 MHz each bit is
 * high 2 cycles ("0") or 5 cycles ("1"), 10 cycles in total, followed by a
 * 50 us reset latch.
 */
#define DEFINE_WS2812_SEND(name, PORT, BIT)                                   \
static void name(const struct pixel *px, uint16_t count)                      \
{                                                                             \
    const uint8_t *p   = (const uint8_t *)px;                                 \
    const uint8_t *end = p + count * 3;                                       \
    uint8_t lo = PORT & ~_BV(BIT);                                            \
    uint8_t hi = PORT | _BV(BIT);                                             \
    uint8_t sreg = SREG;                                                      \
    cli();                                                                    \
    while (p != end) {                                                        \
        uint8_t b = *p++;                                                     \
        for (uint8_t i = 8; i; i--) {                                         \
            PORT = hi;                                                        \
            if (!(b & 0x80))                                                  \
                PORT = lo;                                                    \
            b <<= 1;                                                          \
            __asm__ __volatile__("nop\n\tnop");                               \
            PORT = lo;                                                        \
        }                                                                     \
    }                                                                         \
    SREG = sreg;                                                              \
    _delay_us(50);                                                            \
}

DEFINE_WS2812_SEND(ws2812_send_pd6, PORTD, PD6)
DEFINE_WS2812_SEND(ws2812_send_pd4, PORTD, PD4)
DEFINE_WS2812_SEND(ws2812_send_pd3, PORTD, PD3)
DEFINE_WS2812_SEND(ws2812_send_pc3, PORTC, PC3)

/* 0x121A: classic colour wheel at half brightness */
static struct pixel color_wheel(uint8_t pos)
{
    struct pixel c;

    if (pos < 85) {
        c.g = (pos * 3) >> 1;
        c.r = (255 - pos * 3) >> 1;
        c.b = 0;
    } else if (pos < 170) {
        pos -= 85;
        c.g = (255 - pos * 3) >> 1;
        c.r = 0;
        c.b = (pos * 3) >> 1;
    } else {
        pos -= 170;
        c.g = 0;
        c.r = (pos * 3) >> 1;
        c.b = (255 - pos * 3) >> 1;
    }
    return c;
}

/* ------------------------------------------------------------------------ */
/* Progress / screens                                                       */
/* ------------------------------------------------------------------------ */

/* 0x100C */
static uint8_t count_solved(uint8_t mask)
{
    uint8_t n = 0;
    for (int i = 0; i != NUM_FLAGS; i++)
        if ((mask >> i) & 1)
            n++;
    return n;
}

/* 0x1034 */
static void show_flag_entry(uint8_t solved)
{
    oled_clear();
    if (solved < NUM_FLAGS) {
        oled_print_centered(0, "ENTER ANY FLAG");
        oled_print_centered(2, "INPUT: --------");
        oled_print_centered(6, "PRESS CTF TO SUBMIT");
    } else {
        oled_print_centered(2, "ALL CHALLENGES");
        oled_print_centered(4, "    SOLVED   ");
    }
}

/* Which flag unlocks each menu entry. SLOW RGB is always available. */
static uint8_t team_unlocked(uint8_t idx, uint8_t mask)
{
    switch (idx) {
    case 0:  return mask & 0x01;
    case 1:  return mask & 0x02;
    case 2:  return mask & 0x04;
    case 3:  return 1;
    case 4:  return mask & 0x08;
    default: return 0;
    }
}

/* 0x1078 */
static void show_team_menu(uint8_t cursor, uint8_t mask)
{
    char buf[12];

    oled_clear();
    oled_print_centered(0, "CHOOSE YOUR TEAM");

    /* three visible rows (pages 2, 4, 6), scrolled so the cursor stays on screen */
    uint8_t first = (cursor > 2) ? cursor - 2 : 0;
    uint8_t page = 2;

    for (uint8_t i = first; i < NUM_FLAGS; i++, page += 2) {
        oled_set_cursor(page, 12);
        oled_print(i == cursor ? "< " : "  ");

        if (team_unlocked(i, mask)) {
            oled_print(team_names[i]);
        } else {
            memcpy(buf, "X. [LOCKED]", sizeof buf);
            buf[0] = '1' + i;
            oled_print(buf);
        }
        if (page == 6)
            break;
    }
}

/* 0x1186 */
static void show_splash_art(void)
{
    oled_clear();
    oled_draw_bitmap_inverted(splash_art);
}

/* 0x1194 */
static void show_splash_logo(void)
{
    oled_clear();
    oled_draw_bitmap_inverted(splash_logo);
}

/* 0x11A2 */
static void show_status(uint8_t solved, uint8_t ninja_frame)
{
    char buf[14];

    oled_clear();
    if (solved < NUM_FLAGS) {
        oled_print_centered(2, "CHALLENGE STATUS");
        memcpy(buf, "0 OF 5 SOLVED", sizeof buf);
        buf[0] = '0' + solved;
        oled_print_centered(4, buf);
    } else {
        oled_draw_ninja(ninja_frame);
        oled_print_centered(6, "CTF NINJA");
    }
}

/* ------------------------------------------------------------------------ */
/* main                                                                     */
/* ------------------------------------------------------------------------ */

enum screen {
    SCREEN_IDLE  = 0,   /* attract loop: rain / splash / status */
    SCREEN_FLAG  = 1,   /* flag entry                           */
    SCREEN_MENU  = 2,   /* team selection                       */
};

enum team {
    TEAM_NONE   = 0,    /* power-on default: cyan chaser */
    TEAM_RED    = 1,
    TEAM_BLUE   = 2,
    TEAM_PURPLE = 3,
    TEAM_RGB    = 4,    /* slow rainbow     */
    TEAM_PARTY  = 5,    /* random colours   */
};

#define FRAMES_PER_PHASE   28

/* 0x1296 */
int main(void)
{
    /* LED frame buffers (stack frame offsets 0x01..0x30 in the original) */
    struct pixel strip_a[STRIP_A_LEN] = { 0 };  /* quirk: never initialised in the original */
    struct pixel strip_b[2], strip_c[2], strip_d[2];

    uint8_t  mask, solved;
    uint8_t  screen = SCREEN_IDLE, team = TEAM_NONE, cursor = 0;
    uint8_t  idle_phase = 0, redraw = 1;
    uint16_t idle_ticks = 0;
    uint8_t  input = 0, input_len = 0;
    uint8_t  chase_pos = 0, hue = 0;
    uint16_t blink = 0;

    /* previous button levels, 1 = released (pull-ups) */
    uint8_t prev_menu = 1, prev_ctf = 1, prev_zero = 1, prev_one = 1;

    /* JTD must be written twice: frees PC2..PC5 from JTAG */
    MCUCSR |= _BV(JTD);
    MCUCSR |= _BV(JTD);

    TWBR = 32;                                  /* 100 kHz @ 8 MHz */
    oled_init();
    rain_init();

    DDRD  |= _BV(PD3) | _BV(PD4) | _BV(PD6);
    DDRC  |= _BV(PC3);
    DDRC  &= 0x0F;                              /* PC4..PC7 inputs */
    PORTC |= 0xF0;                              /* with pull-ups   */

    mask = eeprom_read_byte(PROGRESS_ADDR);
    if (mask >= 0x20) {                         /* blank EEPROM (0xFF) */
        eeprom_update_byte(PROGRESS_ADDR, 0);
        mask = 0;
    }
    solved = count_solved(mask);

    for (;;) {
        uint8_t pins = PINC;
        uint8_t menu = (pins & BTN_MENU) ? 1 : 0;
        uint8_t ctf  = (pins & BTN_CTF)  ? 1 : 0;
        uint8_t zero = (pins & BTN_ZERO) ? 1 : 0;
        uint8_t one  = (pins & BTN_ONE)  ? 1 : 0;

        /* falling edges = button pressed this frame */
        uint8_t menu_pressed = prev_menu && !menu;
        uint8_t ctf_pressed  = prev_ctf  && !ctf;
        uint8_t zero_pressed = prev_zero && !zero;
        uint8_t one_pressed  = prev_one  && !one;

        /* ---- PC6 + PC7 held: wipe progress ---------------------------- */
        if (!zero && !one) {
            eeprom_update_byte(PROGRESS_ADDR, 0);
            oled_clear();
            oled_print_centered(2, "EEPROM CLEARED!");
            oled_print_centered(4, "RESET PROGRESS");
            _delay_ms(2000);

            mask = 0;
            solved = 0;
            screen = SCREEN_IDLE;
            redraw = 1;
            idle_ticks = 0;
            idle_phase = 0;
        }

        /* ---- MENU toggles the team menu ------------------------------- */
        if (menu_pressed) {
            if (screen == SCREEN_MENU) {
                rain_init();
                redraw = 1;
                idle_ticks = 0;
                idle_phase = 0;
                screen = SCREEN_IDLE;
            } else {
                show_team_menu(cursor, mask);
                screen = SCREEN_MENU;
            }
            _delay_ms(50);
        }

        /* ---- per-screen input ----------------------------------------- */
        if (screen == SCREEN_MENU) {
            if (zero_pressed) {                         /* down */
                cursor = (cursor < 4) ? cursor + 1 : 0;
                show_team_menu(cursor, mask);
                _delay_ms(50);
            }
            if (one_pressed) {                          /* up */
                cursor = cursor ? cursor - 1 : 4;
                show_team_menu(cursor, mask);
                _delay_ms(50);
            }
            if (ctf_pressed) {                          /* select */
                if (team_unlocked(cursor, mask)) {
                    team = cursor + 1;
                    rain_init();
                    redraw = 1;
                    idle_ticks = 0;
                    idle_phase = 0;
                    screen = SCREEN_IDLE;
                } else {
                    oled_clear_line(6);
                    oled_print_centered(6, "FLAG REQUIRED!");
                    _delay_ms(800);
                    show_team_menu(cursor, mask);
                }
                _delay_ms(50);
            }

        } else if (screen == SCREEN_FLAG) {
            if (ctf_pressed) {                          /* submit */
                if (solved < NUM_FLAGS && input_len == FLAG_BITS) {
                    int8_t idx = -1;
                    for (uint8_t i = 0; i < NUM_FLAGS; i++) {
                        if (input == flag_values[i]) {
                            idx = i;
                            break;
                        }
                    }

                    if (idx < 0) {
                        oled_clear_line(4);
                        oled_print_centered(4, "FLAG WRONG! RETRY");
                        _delay_ms(1500);
                        oled_clear_line(4);
                        oled_clear_line(2);
                        oled_print_centered(2, "INPUT: --------");
                    } else if ((mask >> idx) & 1) {
                        oled_clear_line(4);
                        oled_print_centered(4, "ALREADY SOLVED!");
                        _delay_ms(1500);
                        show_flag_entry(solved);
                    } else {
                        mask |= 1 << idx;
                        solved = count_solved(mask);
                        eeprom_update_byte(PROGRESS_ADDR, mask);
                        oled_clear_line(4);
                        oled_print_centered(4, "FLAG SUCCESS!");
                        _delay_ms(1500);
                        show_flag_entry(solved);
                    }
                    input_len = 0;
                    input = 0;
                }
                _delay_ms(50);
            }

            if (solved < NUM_FLAGS && input_len < FLAG_BITS) {
                int8_t bit = -1;
                if (one_pressed)
                    bit = 1;
                else if (zero_pressed)
                    bit = 0;

                if (bit >= 0) {
                    char buf[16];
                    uint8_t n = input_len + 1;

                    input = (input << 1) | bit;
                    memcpy(buf, "INPUT: --------", sizeof buf);
                    for (uint8_t k = 0; k < n; k++)
                        buf[7 + k] = ((input >> (n - 1 - k)) & 1) ? '1' : '0';

                    oled_clear_line(2);
                    oled_print_centered(2, buf);
                    _delay_ms(50);
                    input_len = n;
                }
            }

        } else if (screen == SCREEN_IDLE) {
            if (ctf_pressed) {
                oled_clear();
                _delay_ms(10);
                show_flag_entry(solved);
                _delay_ms(50);
                input_len = 0;
                input = 0;
                screen = SCREEN_FLAG;
            } else {
                idle_ticks++;

                /*
                 * Attract loop:
                 *   0 rain -> 1 splash_art -> (3 splash_logo, only once flag 5
                 *   is solved) -> 4 rain -> 5 status -> back to 1
                 */
                switch (idle_phase) {
                case 0:
                    if (redraw)
                        rain_init();
                    rain_step();
                    if (idle_ticks >= FRAMES_PER_PHASE) {
                        redraw = 1; idle_ticks = 0; idle_phase = 1;
                    } else {
                        redraw = 0;
                    }
                    break;

                case 1:
                    if (redraw)
                        show_splash_art();
                    if (idle_ticks >= FRAMES_PER_PHASE) {
                        redraw = 1; idle_ticks = 0;
                        idle_phase = (mask & 0x10) ? 3 : 4;
                    } else {
                        redraw = 0;
                    }
                    break;

                case 2:                 /* never entered */
                    redraw = 1; idle_ticks = 0;
                    idle_phase = (mask & 0x10) ? 3 : 4;
                    break;

                case 3:
                    if (redraw)
                        show_splash_logo();
                    if (idle_ticks >= FRAMES_PER_PHASE) {
                        redraw = 1; idle_ticks = 0; idle_phase = 4;
                    } else {
                        redraw = 0;
                    }
                    break;

                case 4:
                    if (redraw)
                        rain_init();
                    rain_step();
                    if (idle_ticks >= FRAMES_PER_PHASE) {
                        redraw = 1; idle_ticks = 0; idle_phase = 5;
                    } else {
                        redraw = 0;
                    }
                    break;

                case 5:
                    if (solved < NUM_FLAGS) {
                        if (redraw) {
                            show_status(solved, 0);
                            redraw = 0;
                        }
                    } else {
                        /* all solved: animate the ninja every 4 frames */
                        show_status(solved, (idle_ticks >> 2) & 1);
                    }
                    if (idle_ticks >= 2 * FRAMES_PER_PHASE) {
                        redraw = 1; idle_ticks = 0; idle_phase = 1;
                    }
                    break;
                }
            }
        }

        /* ---- LEDs ------------------------------------------------------ */
        uint16_t blink_next = blink + 1;
        uint8_t  party_v = (mask & 0x10) ? 0x5A : 0;

        if (team < TEAM_RGB) {
            /* chaser on strip A with a fading tail, glow on strip B */
            static const struct pixel chase_color[4] = {
                { 0x80, 0x00, 0x80 },   /* none:   cyan   */
                { 0x00, 0x80, 0x00 },   /* red             */
                { 0x00, 0x00, 0x80 },   /* blue            */
                { 0x00, 0x5A, 0x6E },   /* purple          */
            };
            static const struct pixel glow_color[4] = {
                { 0x5A, 0x00, 0x5A },
                { 0x00, 0x5A, 0x00 },
                { 0x00, 0x00, 0x5A },
                { 0x00, 0x3C, 0x50 },
            };

            uint8_t *p = (uint8_t *)strip_a;
            for (uint8_t i = 0; i < sizeof strip_a; i++)
                p[i] = (p[i] * 0xA5) >> 8;              /* fade ~35% */

            strip_a[chase_pos] = chase_color[team];
            strip_b[0] = strip_b[1] = glow_color[team];
            memset(strip_d, 0x0F, sizeof strip_d);
            strip_c[0] = strip_c[1] = (mask & 0x10) ? glow_color[team]
                                                    : (struct pixel){ 0, 0, 0 };
            chase_pos = (chase_pos + 1) % STRIP_A_LEN;

        } else if (team == TEAM_RGB) {
            uint8_t h = hue + 2;
            for (uint8_t i = 0; i < STRIP_A_LEN; i++)
                strip_a[i] = color_wheel(h + 15 * i);
            strip_b[0] = strip_b[1] = color_wheel(h);
            memset(strip_d, 0x0F, sizeof strip_d);
            strip_c[0] = strip_c[1] = (struct pixel){ party_v, 0, party_v };
            hue = h;

        } else if (team == TEAM_PARTY) {
            for (uint8_t i = 0; i < STRIP_A_LEN; i++) {
                strip_a[i].r = rand() % 128;
                strip_a[i].g = rand() % 128;
                strip_a[i].b = rand() % 128;
            }
            strip_b[0].r = rand() % 128;
            strip_b[0].g = rand() % 128;
            strip_b[0].b = rand() % 128;
            strip_b[1] = strip_b[0];
            memset(strip_d, 0x0F, sizeof strip_d);
            strip_c[0] = strip_c[1] = (struct pixel){ party_v, 0, party_v };
        }

        /* strip B goes dark for 3 frames out of every 74 */
        if (blink >= 70 && blink < 73)
            memset(strip_b, 0, sizeof strip_b);
        else if (blink_next >= 74)
            blink_next = 0;
        blink = blink_next;

        ws2812_send_pd6(strip_a, STRIP_A_LEN);
        ws2812_send_pd4(strip_b, 2);
        ws2812_send_pd3(strip_c, 2);
        ws2812_send_pc3(strip_d, 2);

        if (team == TEAM_PARTY)
            _delay_ms(30);
        else
            _delay_ms(70);

        prev_menu = menu;
        prev_ctf  = ctf;
        prev_zero = zero;
        prev_one  = one;
    }
}
