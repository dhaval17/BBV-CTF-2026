# BBV-CTF-2026
Defcon 34 Bug Bounty Village CTF

##  Write-up: retrieving the flags from the firmware dump

Using a Linux terminal, and using `avrdude` I was able to retrieve the firmware from the ATmega32 microcontroller on the PCB leveraging the 6 pinouts. I used a standard USBasp programmer for interface.

## 1. What got post firmware dump

| File | Contents |
|---|---|
| `firmware_backup.hex` / `.bin` | 9,116 bytes of flash, dumped from the board |
| `eeprom_backup.hex` / `.bin` | 1,024 bytes of EEPROM (byte 0 = `0x00`, the rest `0xFF`) |

The goal is to recover the 5 challenge flags without solving each hardware challenge.

## 2. Identify the target

The first bytes of the hex file are `0C 94 AA 04 0C 94 C7 04 …`. `0x940C` is the AVR `JMP` opcode, so this is an **AVR interrupt vector table**. A few more details narrow down the chip:

- There are 21 vectors of 4 bytes each before the code starts.
- The reset code sets the stack pointer to `0x085F`, the top of 2 KB of SRAM.
- `.data` is copied to SRAM starting at `0x0060`, the first RAM address on the older megaAVRs.
- The I/O registers it uses (PINC = `0x33`, EEPROM registers at `0x3C`–`0x3F`) match the **ATmega32** family.

## 3. Strings: the menu, but no flags

```bash
strings -n 4 firmware_backup.bin
```

This shows the whole UI:

```
ENTER ANY FLAG / INPUT: -------- / PRESS CTF TO SUBMIT
1. RED TEAM  2. BLUE TEAM  3. PURPLE TEAM  4. SLOW RGB  5. PARTY TEAM
FLAG SUCCESS! / FLAG WRONG! RETRY / ALREADY SOLVED! / 0 OF 5 SOLVED
EEPROM CLEARED! / RESET PROGRESS / heemanshu
```

There is no `flag{…}` text anywhere. The `INPUT: --------` field (8 dashes) is the key hint: the flag is entered on the device, 8 symbols long.

## 4. Mapping strings to code references

The C startup code (word address `0x04B3`) copies flash from `0x20FC` to SRAM at `0x0060`. That gives the conversion:

```
SRAM address = flash offset − 0x20FC + 0x60
```

| String | Flash | SRAM |
|---|---|---|
| `ALREADY SOLVED!` | `0x21D1` | `0x0135` |
| `FLAG SUCCESS!` | `0x21E1` | `0x0145` |
| `FLAG WRONG! RETRY` | `0x21EF` | `0x0153` |

Strings are passed to the display routine in `R23:R22`. So the next step is to find `ldi R22,0x45 / ldi R23,0x01` (success) and `ldi R22,0x53 / ldi R23,0x01` (wrong).

## 5. Disassemble with Ghidra headless

No AVR binutils were installed, so I used Ghidra's headless analyzer. The settings are a raw binary, language `avr8:LE:16:default`, compiler spec `gcc`:

```bash
analyzeHeadless ./proj ctf -import firmware_backup.bin -loader BinaryLoader \
  -processor avr8:LE:16:default -cspec gcc -postScript ListAll.java
```

`ListAll.java` just prints every instruction.

## 6. The input routine

Four buttons sit on **PC4–PC7**. They're configured as inputs with pull-ups (`DDRC &= 0x0F; PORTC |= 0xF0`), so they read 0 when pressed. Each loop polls `PINC` and keeps the previous state to detect presses:

| Button | Function |
|---|---|
| **PC7** | enter bit **`1`** (`0x0BE9`–`0x0BF3`: previous PC7 = 1 and current PC7 = 0 → `R24 = 1`) |
| **PC6** | enter bit **`0`** |
| **PC5** | submit, the "CTF" button (`0x0B26`: press on PC5 → go to the check) |
| PC6 + PC7 together | write `0` to EEPROM address 0, which shows "EEPROM CLEARED! / RESET PROGRESS" |

Each bit is shifted into an accumulator byte (word `0x0BF5`):

```asm
ldd  R25, [input]      ; current value
add  R25, R25          ; value <<= 1
or   R25, R24          ; value |= bit
std  [input], R25
inc  [length]
```

The display then shows the bits as ASCII `'0'`/`'1'` in the `--------` field.

## 7. The flag check

The code that runs on submit (word `0x0B2B`):

```asm
0b2e  cpi  R25, 5        ; solved-count < 5 ?  (else "ALL CHALLENGES SOLVED")
0b34  cpi  R30, 8        ; exactly 8 bits entered ?
0b38  ldd  R31, [input]
0b3a  cpi  R31, 0xEB  →  index 0
0b3c  cpi  R31, 0xA7  →  0x0F5F: ldi R18,1
0b3f  cpi  R31, 0x56  →  0x0F61: ldi R18,2
0b42  cpi  R31, 0xC9  →  0x0F63: ldi R18,3
0b45  cpi  R31, 0x2B  →  0x0F65: ldi R18,4
      else            →  "FLAG WRONG! RETRY"
```

When a value matches, the code at `0x0B49` tests bit `R18` of the EEPROM progress byte:

- If the bit is already set, it shows `ALREADY SOLVED!`.
- Otherwise it ORs in `1 << R18`, writes it back with `eeprom_update_byte(0, …)`, and shows `FLAG SUCCESS!`.

Also, at boot, if EEPROM byte 0 is greater than `0x1F` (for example `0xFF` on a blank chip), it is reset to 0. The solved count is the popcount of the low 5 bits (function `0x0806`).

There's no hashing or obfuscation: the flags are stored as plain immediate operands of `CPI` instructions.

## 8. Flags

In the flags.md file

## 9. One-shot solver (no Ghidra needed)

Once you know the pattern, you can get the flags straight from the `.hex` file. Find the `CPI Rx,8` length check and read the 5 `CPI` immediates that follow on the same register. `CPI` is encoded as `0011 KKKK dddd KKKK`.

```python
import sys

def load_ihex(path):
    mem = {}
    for line in open(path):
        line = line.strip()
        if not line.startswith(':'): continue
        b = bytes.fromhex(line[1:])
        n, addr, typ = b[0], (b[1] << 8) | b[2], b[3]
        if typ == 0:
            for i in range(n): mem[addr + i] = b[4 + i]
    return bytes(mem.get(i, 0xFF) for i in range(max(mem) + 1))

def cpi(word):
    # AVR CPI Rd,K : 0011 KKKK dddd KKKK  (d = 16..31)
    if word & 0xF000 != 0x3000: return None
    return 16 + ((word >> 4) & 0xF), ((word >> 4) & 0xF0) | (word & 0xF)

fw = load_ihex(sys.argv[1])
words = [fw[i] | fw[i+1] << 8 for i in range(0, len(fw) - 1, 2)]
for i, w in enumerate(words):
    c = cpi(w)
    if c and c[1] == 8:                      # length check
        consts, reg = [], None
        for w2 in words[i+1:i+20]:
            c2 = cpi(w2)
            if c2 and (reg is None or c2[0] == reg):
                reg = c2[0]; consts.append(c2[1])
        if len(consts) == 5:
            names = ["RED TEAM", "BLUE TEAM", "PURPLE TEAM", "SLOW RGB", "PARTY TEAM"]
            for n, k in zip(names, consts):
                print(f"{n:12s} 0x{k:02X}  {k:08b}")
```

Running it against `firmware_backup.hex` prints the same 5 values.

## 10. Other routes and takeaways

- **EEPROM shortcut:** with programmer access, writing `0x1F` to EEPROM address 0 marks all 5 challenges solved without entering any flag.
- **Intended route:** each team challenge most likely shows its byte through the WS2812 LEDs, driven by the bit-bang routines at `0x0772`–`0x07E1` on PD3/PD4/PD6/PC3. The LED patterns were not reversed here, because the firmware gives the answers directly.
- **The underlying weakness:** secrets are compared as plaintext constants in flash, and nothing protects them from readout (lock bits weren't set, or the dump wouldn't have worked). Setting the lock bits, or at least comparing a salted hash of the input, would have prevented this attack.