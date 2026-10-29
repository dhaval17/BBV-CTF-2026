#include "firmware_backup.hex.ghidra.h"


undefined DAT_mem_085d;
undefined TIMER0_COMPA+0xc;
undefined UNK_code_000180;
undefined1 UNK_mem_0000;
undefined1 UNK_mem_0001;
char UNK_mem_0011;
char UNK_mem_0012;
undefined UNK_mem_001a;
undefined1 UNK_mem_001c;
undefined1 UNK_mem_001d;
uint UNK_mem_001e;
undefined1 UNK_mem_005f;
byte UNK_mem_0011;
byte UNK_mem_001f;
undefined2 UNK_mem_0018;
undefined2 UNK_mem_0016;
undefined2 UNK_mem_0014;
undefined2 UNK_mem_0012;
char UNK_mem_0013;
undefined UNK_mem_0018;
byte UNK_mem_0000;
undefined1 UNK_mem_0018;
undefined DAT_mem_0056;
undefined PINB;
byte UNK_mem_0018;
char UNK_mem_0019;
undefined1 UNK_mem_0011;
char UNK_mem_001c;
char UNK_mem_001d;
char UNK_mem_0018;
byte UNK_mem_0016;
undefined UNK_mem_000e;
undefined1 UNK_mem_0010;
undefined1 *UNK_mem_001c;
char *UNK_mem_001e;
byte UNK_mem_0012;
undefined UNK_mem_0016;
byte UNK_mem_0013;
undefined2 UNK_mem_001c;
undefined1 UNK_mem_000e;
byte UNK_mem_000f;
undefined UNK_mem_0010;
undefined1 UNK_mem_0016;
undefined UNK_mem_001c;
undefined UNK_mem_001e;
char UNK_mem_000f;
char *UNK_mem_001c;
byte UNK_mem_0001;
undefined UNK_mem_0012;
byte *UNK_mem_0010;
undefined2 UNK_mem_000c;
undefined UNK_mem_000a;
undefined UNK_mem_0008;
byte UNK_mem_0015;
undefined PING;
byte *UNK_mem_001e;
byte UNK_mem_005f;
char UNK_mem_0014;
undefined TIFR0;
byte UNK_mem_0014;
undefined1 UNK_mem_0015;
undefined1 UNK_mem_0017;
undefined TIMER0_COMPA+0x1a;
undefined TIMER0_COMPA+0x29;
undefined UNK_code_000046.1;
undefined UNK_code_000050.1;
undefined EXT_code_000058;
undefined UNK_code_00005d.1;
undefined UNK_code_00005f;
undefined UNK_code_000069;
char UNK_mem_000b;
byte UNK_mem_000c;
byte UNK_mem_000d;
byte UNK_mem_000e;
char UNK_mem_0010;
char *UNK_mem_0018;
undefined1 *UNK_mem_001a;
undefined2 *UNK_mem_001e;
uint UNK_mem_0018;
undefined UNK_code_00007c.1;
undefined1 *UNK_mem_001e;
undefined PORTF;
undefined MCUSR;
undefined DDRG;
undefined PORTG;
undefined UNK_mem_0000;
undefined UNK_mem_0002;
char UNK_mem_0004;
char UNK_mem_0005;
byte UNK_mem_0006;
byte UNK_mem_0007;
undefined PINA;
uint UNK_mem_001c;
char UNK_mem_0015;
undefined2 UNK_mem_0008;
undefined2 UNK_mem_000a;
undefined UNK_mem_000c;
undefined1 *UNK_mem_0014;
undefined1 *UNK_mem_0018;
undefined EIMSK;
undefined GPIOR0;
undefined EECR;
undefined EIFR;
undefined UNK_mem_0014;
byte UNK_mem_001a;
char UNK_mem_001b;
char UNK_mem_0001;
byte UNK_mem_001b;
byte UNK_mem_001e;

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void RESET(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0x5f;
  Yhi = 8;
  R17 = '\x03';
  X = &WDTCSR;
  Z = 0x20fc;
  while (puVar1 = X, (byte)X != '\0' || X._1_1_ != R17) {
    R0 = *(undefined1 *)(uint3)Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R18 = '\x03';
  X = &DAT_mem_0300;
  while (puVar1 = X, (byte)X != 0x18 || X._1_1_ != (char)(R18 + ((byte)X < 0x18))) {
    X = X + 1;
    *puVar1 = R1;
  }
  _DAT_mem_085d = 0x4c5;
  FUN_code_00094b();
  FUN_code_00107c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void INT0(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0x5f;
  Yhi = 8;
  R17 = '\x03';
  X = &WDTCSR;
  Z = 0x20fc;
  while (puVar1 = X, (byte)X != '\0' || X._1_1_ != R17) {
    R0 = *(undefined1 *)(uint3)Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R18 = '\x03';
  X = &DAT_mem_0300;
  while (puVar1 = X, (byte)X != 0x18 || X._1_1_ != (char)(R18 + ((byte)X < 0x18))) {
    X = X + 1;
    *puVar1 = R1;
  }
  _DAT_mem_085d = 0x4c5;
  FUN_code_00094b();
  FUN_code_00107c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void INT1(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0x5f;
  Yhi = 8;
  R17 = '\x03';
  X = &WDTCSR;
  Z = 0x20fc;
  while (puVar1 = X, (byte)X != '\0' || X._1_1_ != R17) {
    R0 = *(undefined1 *)(uint3)Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R18 = '\x03';
  X = &DAT_mem_0300;
  while (puVar1 = X, (byte)X != 0x18 || X._1_1_ != (char)(R18 + ((byte)X < 0x18))) {
    X = X + 1;
    *puVar1 = R1;
  }
  _DAT_mem_085d = 0x4c5;
  FUN_code_00094b();
  FUN_code_00107c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void INT2(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0x5f;
  Yhi = 8;
  R17 = '\x03';
  X = &WDTCSR;
  Z = 0x20fc;
  while (puVar1 = X, (byte)X != '\0' || X._1_1_ != R17) {
    R0 = *(undefined1 *)(uint3)Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R18 = '\x03';
  X = &DAT_mem_0300;
  while (puVar1 = X, (byte)X != 0x18 || X._1_1_ != (char)(R18 + ((byte)X < 0x18))) {
    X = X + 1;
    *puVar1 = R1;
  }
  _DAT_mem_085d = 0x4c5;
  FUN_code_00094b();
  FUN_code_00107c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void INT3(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0x5f;
  Yhi = 8;
  R17 = '\x03';
  X = &WDTCSR;
  Z = 0x20fc;
  while (puVar1 = X, (byte)X != '\0' || X._1_1_ != R17) {
    R0 = *(undefined1 *)(uint3)Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R18 = '\x03';
  X = &DAT_mem_0300;
  while (puVar1 = X, (byte)X != 0x18 || X._1_1_ != (char)(R18 + ((byte)X < 0x18))) {
    X = X + 1;
    *puVar1 = R1;
  }
  _DAT_mem_085d = 0x4c5;
  FUN_code_00094b();
  FUN_code_00107c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void INT4(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0x5f;
  Yhi = 8;
  R17 = '\x03';
  X = &WDTCSR;
  Z = 0x20fc;
  while (puVar1 = X, (byte)X != '\0' || X._1_1_ != R17) {
    R0 = *(undefined1 *)(uint3)Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R18 = '\x03';
  X = &DAT_mem_0300;
  while (puVar1 = X, (byte)X != 0x18 || X._1_1_ != (char)(R18 + ((byte)X < 0x18))) {
    X = X + 1;
    *puVar1 = R1;
  }
  _DAT_mem_085d = 0x4c5;
  FUN_code_00094b();
  FUN_code_00107c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void INT5(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0x5f;
  Yhi = 8;
  R17 = '\x03';
  X = &WDTCSR;
  Z = 0x20fc;
  while (puVar1 = X, (byte)X != '\0' || X._1_1_ != R17) {
    R0 = *(undefined1 *)(uint3)Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R18 = '\x03';
  X = &DAT_mem_0300;
  while (puVar1 = X, (byte)X != 0x18 || X._1_1_ != (char)(R18 + ((byte)X < 0x18))) {
    X = X + 1;
    *puVar1 = R1;
  }
  _DAT_mem_085d = 0x4c5;
  FUN_code_00094b();
  FUN_code_00107c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void INT6(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0x5f;
  Yhi = 8;
  R17 = '\x03';
  X = &WDTCSR;
  Z = 0x20fc;
  while (puVar1 = X, (byte)X != '\0' || X._1_1_ != R17) {
    R0 = *(undefined1 *)(uint3)Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R18 = '\x03';
  X = &DAT_mem_0300;
  while (puVar1 = X, (byte)X != 0x18 || X._1_1_ != (char)(R18 + ((byte)X < 0x18))) {
    X = X + 1;
    *puVar1 = R1;
  }
  _DAT_mem_085d = 0x4c5;
  FUN_code_00094b();
  FUN_code_00107c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void INT7(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0x5f;
  Yhi = 8;
  R17 = '\x03';
  X = &WDTCSR;
  Z = 0x20fc;
  while (puVar1 = X, (byte)X != '\0' || X._1_1_ != R17) {
    R0 = *(undefined1 *)(uint3)Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R18 = '\x03';
  X = &DAT_mem_0300;
  while (puVar1 = X, (byte)X != 0x18 || X._1_1_ != (char)(R18 + ((byte)X < 0x18))) {
    X = X + 1;
    *puVar1 = R1;
  }
  _DAT_mem_085d = 0x4c5;
  FUN_code_00094b();
  FUN_code_00107c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void PCINT0(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0x5f;
  Yhi = 8;
  R17 = '\x03';
  X = &WDTCSR;
  Z = 0x20fc;
  while (puVar1 = X, (byte)X != '\0' || X._1_1_ != R17) {
    R0 = *(undefined1 *)(uint3)Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R18 = '\x03';
  X = &DAT_mem_0300;
  while (puVar1 = X, (byte)X != 0x18 || X._1_1_ != (char)(R18 + ((byte)X < 0x18))) {
    X = X + 1;
    *puVar1 = R1;
  }
  _DAT_mem_085d = 0x4c5;
  FUN_code_00094b();
  FUN_code_00107c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void PCINT1(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0x5f;
  Yhi = 8;
  R17 = '\x03';
  X = &WDTCSR;
  Z = 0x20fc;
  while (puVar1 = X, (byte)X != '\0' || X._1_1_ != R17) {
    R0 = *(undefined1 *)(uint3)Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R18 = '\x03';
  X = &DAT_mem_0300;
  while (puVar1 = X, (byte)X != 0x18 || X._1_1_ != (char)(R18 + ((byte)X < 0x18))) {
    X = X + 1;
    *puVar1 = R1;
  }
  _DAT_mem_085d = 0x4c5;
  FUN_code_00094b();
  FUN_code_00107c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void PCINT2(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0x5f;
  Yhi = 8;
  R17 = '\x03';
  X = &WDTCSR;
  Z = 0x20fc;
  while (puVar1 = X, (byte)X != '\0' || X._1_1_ != R17) {
    R0 = *(undefined1 *)(uint3)Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R18 = '\x03';
  X = &DAT_mem_0300;
  while (puVar1 = X, (byte)X != 0x18 || X._1_1_ != (char)(R18 + ((byte)X < 0x18))) {
    X = X + 1;
    *puVar1 = R1;
  }
  _DAT_mem_085d = 0x4c5;
  FUN_code_00094b();
  FUN_code_00107c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void WDT(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0x5f;
  Yhi = 8;
  R17 = '\x03';
  X = &WDTCSR;
  Z = 0x20fc;
  while (puVar1 = X, (byte)X != '\0' || X._1_1_ != R17) {
    R0 = *(undefined1 *)(uint3)Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R18 = '\x03';
  X = &DAT_mem_0300;
  while (puVar1 = X, (byte)X != 0x18 || X._1_1_ != (char)(R18 + ((byte)X < 0x18))) {
    X = X + 1;
    *puVar1 = R1;
  }
  _DAT_mem_085d = 0x4c5;
  FUN_code_00094b();
  FUN_code_00107c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void TIMER2_COMPA(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0x5f;
  Yhi = 8;
  R17 = '\x03';
  X = &WDTCSR;
  Z = 0x20fc;
  while (puVar1 = X, (byte)X != '\0' || X._1_1_ != R17) {
    R0 = *(undefined1 *)(uint3)Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R18 = '\x03';
  X = &DAT_mem_0300;
  while (puVar1 = X, (byte)X != 0x18 || X._1_1_ != (char)(R18 + ((byte)X < 0x18))) {
    X = X + 1;
    *puVar1 = R1;
  }
  _DAT_mem_085d = 0x4c5;
  FUN_code_00094b();
  FUN_code_00107c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void TIMER2_COMPB(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0x5f;
  Yhi = 8;
  R17 = '\x03';
  X = &WDTCSR;
  Z = 0x20fc;
  while (puVar1 = X, (byte)X != '\0' || X._1_1_ != R17) {
    R0 = *(undefined1 *)(uint3)Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R18 = '\x03';
  X = &DAT_mem_0300;
  while (puVar1 = X, (byte)X != 0x18 || X._1_1_ != (char)(R18 + ((byte)X < 0x18))) {
    X = X + 1;
    *puVar1 = R1;
  }
  _DAT_mem_085d = 0x4c5;
  FUN_code_00094b();
  FUN_code_00107c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void TIMER2_OVF(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0x5f;
  Yhi = 8;
  R17 = '\x03';
  X = &WDTCSR;
  Z = 0x20fc;
  while (puVar1 = X, (byte)X != '\0' || X._1_1_ != R17) {
    R0 = *(undefined1 *)(uint3)Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R18 = '\x03';
  X = &DAT_mem_0300;
  while (puVar1 = X, (byte)X != 0x18 || X._1_1_ != (char)(R18 + ((byte)X < 0x18))) {
    X = X + 1;
    *puVar1 = R1;
  }
  _DAT_mem_085d = 0x4c5;
  FUN_code_00094b();
  FUN_code_00107c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void TIMER1_CAPT(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0x5f;
  Yhi = 8;
  R17 = '\x03';
  X = &WDTCSR;
  Z = 0x20fc;
  while (puVar1 = X, (byte)X != '\0' || X._1_1_ != R17) {
    R0 = *(undefined1 *)(uint3)Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R18 = '\x03';
  X = &DAT_mem_0300;
  while (puVar1 = X, (byte)X != 0x18 || X._1_1_ != (char)(R18 + ((byte)X < 0x18))) {
    X = X + 1;
    *puVar1 = R1;
  }
  _DAT_mem_085d = 0x4c5;
  FUN_code_00094b();
  FUN_code_00107c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void TIMER1_COMPA(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0x5f;
  Yhi = 8;
  R17 = '\x03';
  X = &WDTCSR;
  Z = 0x20fc;
  while (puVar1 = X, (byte)X != '\0' || X._1_1_ != R17) {
    R0 = *(undefined1 *)(uint3)Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R18 = '\x03';
  X = &DAT_mem_0300;
  while (puVar1 = X, (byte)X != 0x18 || X._1_1_ != (char)(R18 + ((byte)X < 0x18))) {
    X = X + 1;
    *puVar1 = R1;
  }
  _DAT_mem_085d = 0x4c5;
  FUN_code_00094b();
  FUN_code_00107c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void TIMER1_COMPB(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0x5f;
  Yhi = 8;
  R17 = '\x03';
  X = &WDTCSR;
  Z = 0x20fc;
  while (puVar1 = X, (byte)X != '\0' || X._1_1_ != R17) {
    R0 = *(undefined1 *)(uint3)Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R18 = '\x03';
  X = &DAT_mem_0300;
  while (puVar1 = X, (byte)X != 0x18 || X._1_1_ != (char)(R18 + ((byte)X < 0x18))) {
    X = X + 1;
    *puVar1 = R1;
  }
  _DAT_mem_085d = 0x4c5;
  FUN_code_00094b();
  FUN_code_00107c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void TIMER1_COMPC(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0x5f;
  Yhi = 8;
  R17 = '\x03';
  X = &WDTCSR;
  Z = 0x20fc;
  while (puVar1 = X, (byte)X != '\0' || X._1_1_ != R17) {
    R0 = *(undefined1 *)(uint3)Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R18 = '\x03';
  X = &DAT_mem_0300;
  while (puVar1 = X, (byte)X != 0x18 || X._1_1_ != (char)(R18 + ((byte)X < 0x18))) {
    X = X + 1;
    *puVar1 = R1;
  }
  _DAT_mem_085d = 0x4c5;
  FUN_code_00094b();
  FUN_code_00107c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void TIMER1_OVF(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0x5f;
  Yhi = 8;
  R17 = '\x03';
  X = &WDTCSR;
  Z = 0x20fc;
  while (puVar1 = X, (byte)X != '\0' || X._1_1_ != R17) {
    R0 = *(undefined1 *)(uint3)Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R18 = '\x03';
  X = &DAT_mem_0300;
  while (puVar1 = X, (byte)X != 0x18 || X._1_1_ != (char)(R18 + ((byte)X < 0x18))) {
    X = X + 1;
    *puVar1 = R1;
  }
  _DAT_mem_085d = 0x4c5;
  FUN_code_00094b();
  FUN_code_00107c();
  return;
}



// WARNING: Control flow encountered bad instruction data

void TIMER3_COMPB(void)

{
  byte in_Cflg;
  
  R1 = 0;
  R17 = R17 + Zhi * '\x02' + in_Cflg + (CARRY1(R17,Zhi) || CARRY1(R17 + Zhi,in_Cflg));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void TIMER3_COMPC(void)

{
  R1 = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void USART1_RX(undefined2 param_1,undefined2 R23R22,undefined2 param_3,undefined2 R19R18)

{
  R1 = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void USART1_TX(void)

{
  R1 = 0;
  R17 = R17 + Zhi * '\x02' + (R19 != -1) + (CARRY1(R17,Zhi) || CARRY1(R17 + Zhi,R19 != -1));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void TWI(void)

{
  byte in_Cflg;
  
  R1 = 0;
  R17 = R17 + Zhi * '\x02' + in_Cflg + (CARRY1(R17,Zhi) || CARRY1(R17 + Zhi,in_Cflg));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_code_0004aa(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0x5f;
  Yhi = 8;
  R17 = '\x03';
  X = &WDTCSR;
  Z = 0x20fc;
  while (puVar1 = X, (byte)X != '\0' || X._1_1_ != R17) {
    R0 = *(undefined1 *)(uint3)Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R18 = '\x03';
  X = &DAT_mem_0300;
  while (puVar1 = X, (byte)X != 0x18 || X._1_1_ != (char)(R18 + ((byte)X < 0x18))) {
    X = X + 1;
    *puVar1 = R1;
  }
  _DAT_mem_085d = 0x4c5;
  FUN_code_00094b();
  FUN_code_00107c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void RESET(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0x5f;
  Yhi = 8;
  R17 = '\x03';
  X = &WDTCSR;
  Z = 0x20fc;
  while (puVar1 = X, (byte)X != '\0' || X._1_1_ != R17) {
    R0 = *(undefined1 *)(uint3)Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R18 = '\x03';
  X = &DAT_mem_0300;
  while (puVar1 = X, (byte)X != 0x18 || X._1_1_ != (char)(R18 + ((byte)X < 0x18))) {
    X = X + 1;
    *puVar1 = R1;
  }
  _DAT_mem_085d = 0x4c5;
  FUN_code_00094b();
  FUN_code_00107c();
  return;
}



uint FUN_code_0004c9(uint R25R24)

{
  R1 = 0;
  if ((byte)((byte)R25R24 + 0xbf) < 0x1a) {
    R25R24 = CONCAT11(-((byte)R25R24 < 0x40),(byte)R25R24 - 0x40);
    return R25R24;
  }
  if ((byte)((byte)R25R24 + 0x9f) < 0x1a) {
    R25R24 = (uint)(byte)R25R24;
    R25R24 = R25R24 - 0x38;
    return R25R24;
  }
  if ((byte)((byte)R25R24 - 0x30) < 10) {
    R25R24 = (uint)(byte)R25R24;
    R25R24 = R25R24 - 0x15;
    return R25R24;
  }
  if ((byte)R25R24 == 0x2e) {
    R25R24 = 0x25;
    return R25R24;
  }
  if ((byte)R25R24 == 0x3a) {
    R25R24 = 0x26;
    return R25R24;
  }
  if ((byte)R25R24 == 0x3e) {
    R25R24 = 0x27;
    return R25R24;
  }
  if ((byte)R25R24 == 0x3c) {
    R25R24 = 0x28;
    return R25R24;
  }
  R25R24 = 0;
  return 0;
}



undefined1 FUN_code_0004f6(void)

{
  R1 = 0;
  R24 = 0xa4;
  DAT_mem_0056 = 0xa4;
  do {
    R0 = DAT_mem_0056;
  } while ((R0 & 0x80) == 0);
  return R24;
}



undefined1 FUN_code_0004fc(undefined1 R24)

{
  R1 = 0;
  PINB = R24;
  R24 = 0x84;
  DAT_mem_0056 = 0x84;
  do {
    R0 = DAT_mem_0056;
  } while ((R0 & 0x80) == 0);
  return R24;
}



undefined1 FUN_code_000503(undefined1 R24)

{
  R1 = 0;
  FUN_code_0004f6();
  FUN_code_0004fc(0x78);
  FUN_code_0004fc(0);
  FUN_code_0004fc(R24);
  R24 = 0x94;
  DAT_mem_0056 = 0x94;
  return R24;
}



byte FUN_code_000514(void)

{
  char cVar1;
  byte bVar2;
  
  R1 = 0;
  R18 = -1;
  R24 = 0x70;
  R25 = '\x02';
  do {
    cVar1 = R18 + -1;
    bVar2 = R24 - (R18 == '\0');
    R25 = R25 - (R24 < (R18 == '\0'));
    R18 = cVar1;
    R24 = bVar2;
  } while ((cVar1 != '\0' || bVar2 != 0) || R25 != '\0');
  FUN_code_000503(0xae);
  FUN_code_000503(0xa1);
  FUN_code_000503(200);
  FUN_code_000503(0xda);
  FUN_code_000503(0x12);
  FUN_code_000503(0x20);
  FUN_code_000503(2);
  FUN_code_000503(0x8d);
  FUN_code_000503(0x14);
  R24 = FUN_code_000503(0xaf);
  return R24;
}



undefined1 FUN_code_00053c(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  bool bVar3;
  
  uVar2 = Yhi;
  uVar1 = Ylo;
  R1 = 0;
  Yhi = -0x50;
  do {
    FUN_code_000503(Yhi);
    FUN_code_000503(0);
    FUN_code_000503(0x10);
    FUN_code_0004f6();
    FUN_code_0004fc(0x78);
    FUN_code_0004fc(0x40);
    Ylo = '\0';
    do {
      R24 = FUN_code_0004fc(0);
      bVar3 = Ylo != '\x7f';
      Ylo = Ylo + '\x01';
    } while (bVar3);
    DAT_mem_0056 = 0x94;
    bVar3 = Yhi != -0x49;
    Yhi = Yhi + '\x01';
  } while (bVar3);
  Yhi = uVar2;
  Ylo = uVar1;
  return R24;
}



char FUN_code_000561(char R24)

{
  undefined1 uVar1;
  bool bVar2;
  
  uVar1 = Ylo;
  R1 = 0;
  FUN_code_000503(R24 + -0x50);
  FUN_code_000503(0);
  FUN_code_000503(0x10);
  FUN_code_0004f6();
  FUN_code_0004fc(0x78);
  FUN_code_0004fc(0x40);
  Ylo = '\0';
  do {
    FUN_code_0004fc(0);
    bVar2 = Ylo != '\x7f';
    Ylo = Ylo + '\x01';
  } while (bVar2);
  R24 = -0x6c;
  DAT_mem_0056 = 0x94;
  Ylo = uVar1;
  return R24;
}



byte FUN_code_00057e(byte R24,byte R22)

{
  R1 = 0;
  FUN_code_000503(R24 + 0xb0);
  R24 = R22 & 0xf;
  FUN_code_000503(R24);
  R24 = R22 >> 4 | 0x10;
  R24 = FUN_code_000503(R24);
  return R24;
}



char * FUN_code_00058f(char *R25R24)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  byte bVar6;
  char *pcVar7;
  char cVar8;
  undefined2 uVar9;
  undefined1 *puVar10;
  bool bVar11;
  
  uVar9 = Y;
  pcVar7 = R25R24;
  uVar5 = R17;
  uVar4 = R15R14;
  R1 = 0;
  Z = R25R24;
  cVar1 = R25R24._1_1_;
  R25R24._0_1_ = *R25R24;
  if ((byte)R25R24 != '\0') {
    R25R24 = (char *)CONCAT11(0xff,(byte)R25R24);
    R15R14._0_1_ = (char)pcVar7;
    R15R14 = (char *)CONCAT11(cVar1 - (((char)R15R14 != -1) + -1),(char)R15R14 + '\x01');
    do {
      R25R24 = (char *)FUN_code_0004c9(R25R24);
      pcVar7 = R25R24;
      FUN_code_0004f6();
      R25R24 = (char *)CONCAT11(R25R24._1_1_,0x78);
      FUN_code_0004fc(0x78);
      R25R24 = (char *)CONCAT11(R25R24._1_1_,0x40);
      FUN_code_0004fc(0x40);
      R25R24._0_1_ = (byte)pcVar7;
      bVar6 = (byte)R25R24;
      R25R24._1_1_ = SUB21(pcVar7,1);
      cVar8 = R25R24._1_1_;
      bVar2 = (byte)R25R24 * '\x04';
      cVar1 = (R25R24._1_1_ * '\x02' + CARRY1((byte)R25R24,(byte)R25R24)) * '\x02' +
              CARRY1((byte)R25R24 * '\x02',(byte)R25R24 * '\x02');
      R25R24 = (char *)CONCAT11(cVar1,bVar2);
      bVar3 = bVar6 * '\x05';
      Y = (undefined1 *)
          CONCAT11((cVar8 + cVar1 + CARRY1(bVar6,bVar2)) - ((bVar3 < 0x4f) + -2),bVar3 + 0xb1);
      R17 = '\0';
      do {
        puVar10 = Y;
        Y = Y + 1;
        R25R24._0_1_ = *puVar10;
        FUN_code_0004fc((byte)R25R24);
        bVar2 = R25R24._1_1_;
        R25R24 = (char *)((uint)bVar2 << 8);
        bVar11 = R17 != '\x04';
        R17 = R17 + '\x01';
      } while (bVar11);
      R25R24 = (char *)((uint)bVar2 << 8);
      FUN_code_0004fc(0);
      DAT_mem_0056 = 0x94;
      Z = R15R14 + 1;
      R25R24._0_1_ = *R15R14;
      R25R24 = (char *)CONCAT11(R25R24._1_1_,(byte)R25R24);
      R15R14 = Z;
    } while ((byte)R25R24 != '\0');
  }
  Y = (undefined1 *)uVar9;
  R17 = uVar5;
  R15R14 = (char *)uVar4;
  return R25R24;
}



char * FUN_code_0005c9(char *R25R24_00,char *R23R22,undefined2 R21R20)

{
  byte bVar1;
  char cVar2;
  char *R25R24;
  char *pcVar3;
  
  R25R24 = R23R22;
  R1 = 0;
  Z = R23R22 + 1;
  R25R24_00._1_1_ = *R23R22;
  if (R25R24_00._1_1_ == '\0') {
    R18 = 0;
    R19 = 0;
  }
  else {
    bVar1 = 0;
    do {
      pcVar3 = Z;
      bVar1 = bVar1 + 1;
      Z = Z + 1;
      R25R24_00._1_1_ = *pcVar3;
    } while (R25R24_00._1_1_ != '\0');
    R21R20 = CONCAT11(CARRY1(bVar1,bVar1),bVar1 * '\x02');
    R18 = bVar1 * '\x06';
    R19 = (CARRY1(bVar1,bVar1) + CARRY1(bVar1,bVar1 * '\x02')) * '\x02' +
          CARRY1(bVar1 * '\x03',bVar1 * '\x03');
    if ((R18 < 0x80) <= R19) {
      R23R22 = (char *)((uint)R23R22 & 0xff00);
      goto LAB_code_0005ec;
    }
  }
  cVar2 = R19 + (0x80 < R18);
  R23R22._1_1_ = (byte)-cVar2 >> 1;
  R23R22._0_1_ = cVar2 * -0x80 | (byte)(0x80 - R18) >> 1;
LAB_code_0005ec:
  FUN_code_00057e((byte)R25R24_00,(byte)R23R22);
  R25R24_00 = FUN_code_00058f(R25R24);
  return R25R24_00;
}



uint FUN_code_0005f4(uint R25R24)

{
  undefined1 uVar1;
  uint uVar2;
  undefined2 uVar3;
  
  uVar3 = Y;
  uVar2 = R17R16;
  uVar1 = R15;
  R1 = 0;
  Y = R25R24;
  R15 = 0;
  do {
    R25R24 = CONCAT11(R25R24._1_1_,R15);
    R25R24._0_1_ = FUN_code_00057e(R15,0);
    R25R24 = CONCAT11(R25R24._1_1_,(byte)R25R24);
    FUN_code_0004f6();
    R25R24 = CONCAT11(R25R24._1_1_,0x78);
    FUN_code_0004fc(0x78);
    R25R24 = CONCAT11(R25R24._1_1_,0x40);
    FUN_code_0004fc(0x40);
    R25R24 = (uint)R25R24._1_1_ << 8;
    R17R16._0_1_ = (byte)Y;
    R17R16._1_1_ = (char)(Y >> 8);
    R17R16 = CONCAT11(R17R16._1_1_ - (((byte)R17R16 < 0x80) + -1),(byte)R17R16 + 0x80);
    do {
      Z = Y;
      R25R24._0_1_ = *(byte *)(uint3)Y;
      R25R24._0_1_ = ~(byte)R25R24;
      R25R24._0_1_ = FUN_code_0004fc((byte)R25R24);
      R25R24 = CONCAT11(R25R24._1_1_,(byte)R25R24);
      Y = Y + 1;
    } while (Y != CONCAT11(R17R16._1_1_ + ((byte)Y < (byte)R17R16),(byte)R17R16));
    DAT_mem_0056 = 0x94;
    R15 = R15 + 1;
    Y = R17R16;
    Z = CONCAT11(8,(undefined1)Z);
  } while (R15 != 8);
  Y = uVar3;
  R17R16 = uVar2;
  R15 = uVar1;
  return R25R24;
}



char FUN_code_000625(char R24)

{
  undefined1 uVar1;
  uint uVar2;
  undefined2 uVar3;
  
  uVar3 = Y;
  uVar2 = R17R16;
  uVar1 = R15;
  R1 = 0;
  if (R24 == '\0') {
    Y = 0x8d4;
  }
  else {
    Y = 0x854;
  }
  R15 = 0;
  do {
    R15 = R15 + 1;
    FUN_code_00057e(R15,0x30);
    FUN_code_0004f6();
    FUN_code_0004fc(0x78);
    FUN_code_0004fc(0x40);
    R17R16._0_1_ = (byte)Y;
    R17R16._1_1_ = (char)(Y >> 8);
    R17R16 = CONCAT11(R17R16._1_1_ - (((byte)R17R16 < 0xe0) + -1),(byte)R17R16 + 0x20);
    do {
      Z = Y;
      R24 = *(char *)(uint3)Y;
      R24 = FUN_code_0004fc(R24);
      Y = Y + 1;
    } while (Y != CONCAT11(R17R16._1_1_ + ((byte)Y < (byte)R17R16),(byte)R17R16));
    DAT_mem_0056 = 0x94;
    Y = R17R16;
    Z = CONCAT11(4,(undefined1)Z);
  } while (R15 != 4);
  Y = uVar3;
  R17R16 = uVar2;
  R15 = uVar1;
  return R24;
}



undefined1 * FUN_code_00065b(undefined1 *R25R24)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = Y;
  uVar2 = R17R16;
  uVar1 = R15;
  R1 = 0;
  FUN_code_00053c();
  R17R16 = &DAT_mem_0300;
  R15 = '\0';
  do {
    R25R24 = FUN_code_000ff0();
    Y = R17R16;
    R25R24 = (undefined1 *)((uint)R25R24 & 0x8007);
    if ((int)R25R24 < 0) {
      R25R24._0_1_ = (char)R25R24 - 1;
      R25R24._0_1_ = (byte)R25R24 | 0xf8;
      R25R24 = (undefined1 *)(uint)(byte)R25R24;
      R25R24 = R25R24 + 1;
    }
    *R17R16 = (byte)R25R24 + R15;
    R25R24 = FUN_code_000ff0();
    R25R24 = (undefined1 *)((uint)R25R24 & 0x8007);
    if ((int)R25R24 < 0) {
      R25R24._0_1_ = (char)R25R24 - 1;
      R25R24._0_1_ = (byte)R25R24 | 0xf8;
      R25R24 = (undefined1 *)(uint)(byte)R25R24;
      R25R24 = R25R24 + 1;
    }
    Y[1] = (byte)R25R24;
    R25R24 = FUN_code_000ff0();
    R25R24 = (undefined1 *)((uint)R25R24 & 0x8003);
    if ((int)R25R24 < 0) {
      R25R24._0_1_ = (char)R25R24 - 1;
      R25R24._0_1_ = (byte)R25R24 | 0xfc;
      R25R24 = (undefined1 *)CONCAT11(0xff,(byte)R25R24);
      R25R24 = R25R24 + 1;
    }
    Y[2] = (byte)R25R24 + '\x03';
    R15 = R15 + '\x10';
    R17R16 = (char *)CONCAT11(R17R16._1_1_ - (((byte)R17R16 < 0xfd) + -1),(byte)R17R16 + 3);
    R25R24 = (undefined1 *)CONCAT11(R25R24._1_1_,0x80);
  } while (R15 != -0x80);
  Y = (char *)uVar3;
  R17R16 = (char *)uVar2;
  R15 = uVar1;
  return R25R24;
}



undefined1 *
FUN_code_000696(undefined1 *R25R24,undefined2 R23R22,undefined2 param_3,undefined1 *R19R18,
               byte *R17R16,byte *R15R14,undefined2 R13R12,undefined1 *R11R10,undefined2 R9R8)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  undefined1 *puVar5;
  undefined2 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte bVar9;
  undefined2 uVar10;
  undefined1 *puVar11;
  
  uVar10 = Y;
  pbVar8 = R17R16;
  pbVar7 = R15R14;
  uVar6 = R13R12;
  puVar5 = R11R10;
  uVar4 = R9R8;
  R1 = 0;
  R15R14 = &DAT_mem_0300;
  R9R8 = 0x94;
  R0 = (undefined1)((uint)Z >> 8);
  R13R12 = 0x24;
  do {
    R17R16 = R15R14;
    Z = R15R14;
    R25R24._0_1_ = R15R14[1];
    R25R24._1_1_ = R15R14[2];
    if ((R25R24._1_1_ <= (byte)R25R24) &&
       (R25R24._0_1_ = (byte)R25R24 - R25R24._1_1_, (byte)R25R24 < 8)) {
      R23R22._0_1_ = *R15R14;
      R25R24._0_1_ = FUN_code_00057e((byte)R25R24,(byte)R23R22);
      R25R24 = (undefined1 *)CONCAT11(R25R24._1_1_,(byte)R25R24);
      FUN_code_0004f6();
      R25R24 = (undefined1 *)CONCAT11(R25R24._1_1_,0x78);
      FUN_code_0004fc(0x78);
      R25R24 = (undefined1 *)CONCAT11(R25R24._1_1_,0x40);
      FUN_code_0004fc(0x40);
      cVar1 = '\x06';
      do {
        R25R24 = (undefined1 *)((uint)R25R24._1_1_ << 8);
        FUN_code_0004fc(0);
        cVar1 = cVar1 + -1;
      } while (cVar1 != '\0');
      DAT_mem_0056 = (undefined1)R9R8;
    }
    R25R24._0_1_ = R17R16[2];
    if (1 < (byte)R25R24) {
      Y._0_1_ = 1;
      do {
        Z = R17R16;
        R25R24._0_1_ = R17R16[1];
        if (((byte)Y <= (byte)R25R24) && (R25R24._0_1_ = (byte)R25R24 - (byte)Y, (byte)R25R24 < 8))
        {
          R23R22._0_1_ = *R17R16;
          FUN_code_00057e((byte)R25R24,(byte)R23R22);
          R25R24 = FUN_code_000ff0();
          R11R10 = R25R24;
          FUN_code_0004f6();
          R25R24 = (undefined1 *)CONCAT11(R25R24._1_1_,0x78);
          FUN_code_0004fc(0x78);
          R25R24 = (undefined1 *)CONCAT11(R25R24._1_1_,0x40);
          FUN_code_0004fc(0x40);
          R23R22 = R13R12;
          R25R24 = (undefined1 *)FUN_code_000f7c();
          R25R24 = (undefined1 *)((int)R25R24 + 1);
          R11R10._0_1_ = (byte)R25R24;
          R11R10._1_1_ = (char)((uint)R25R24 >> 8);
          R25R24._1_1_ = R11R10._1_1_ * '\x05' + CARRY1((byte)R11R10,(byte)R11R10) * '\x02' +
                         CARRY1((byte)R11R10 * '\x02',(byte)R11R10 * '\x02') +
                         CARRY1((byte)R11R10,(byte)R11R10 * '\x04');
          R19R18 = (undefined1 *)
                   CONCAT11(R25R24._1_1_ - (((byte)((byte)R11R10 * '\x05') < 0x4f) + -2),
                            (byte)R11R10 * '\x05' + 0xb1);
          R11R10 = R19R18;
          Y._1_1_ = '\x05';
          do {
            Z = R11R10 + 1;
            R25R24._0_1_ = *R11R10;
            R11R10 = Z;
            R25R24 = (undefined1 *)(CONCAT11(R25R24._1_1_,(byte)R25R24) & 0xff55);
            FUN_code_0004fc((byte)R25R24);
            Y._1_1_ = Y._1_1_ + -1;
          } while (Y._1_1_ != '\0');
          R25R24 = (undefined1 *)((uint)R25R24._1_1_ << 8);
          FUN_code_0004fc(0);
          DAT_mem_0056 = (undefined1)R9R8;
        }
        Y._0_1_ = (byte)Y + 1;
        R25R24._0_1_ = R17R16[2];
      } while ((byte)Y < (byte)R25R24);
    }
    Z = R17R16;
    R25R24._0_1_ = R17R16[1];
    if ((byte)R25R24 < 8) {
      R23R22._0_1_ = *R17R16;
      FUN_code_00057e((byte)R25R24,(byte)R23R22);
      R25R24 = FUN_code_000ff0();
      FUN_code_0004f6();
      R25R24 = (undefined1 *)CONCAT11(R25R24._1_1_,0x78);
      FUN_code_0004fc(0x78);
      R25R24 = (undefined1 *)CONCAT11(R25R24._1_1_,0x40);
      FUN_code_0004fc(0x40);
      R23R22 = R13R12;
      R25R24 = (undefined1 *)FUN_code_000f7c();
      R25R24 = (undefined1 *)((int)R25R24 + 1);
      Y._0_1_ = (byte)R25R24;
      Y._1_1_ = (char)((uint)R25R24 >> 8);
      R25R24._1_1_ = Y._1_1_ * '\x05' + CARRY1((byte)Y,(byte)Y) * '\x02' +
                     CARRY1((byte)Y * '\x02',(byte)Y * '\x02') + CARRY1((byte)Y,(byte)Y * '\x04');
      Y = (undefined1 *)
          CONCAT11(R25R24._1_1_ - (((byte)((byte)Y * '\x05') < 0x4f) + -2),(byte)Y * '\x05' + 0xb1);
      R11R10 = (undefined1 *)CONCAT11(R1,(byte)R11R10);
      do {
        puVar11 = Y;
        Y = Y + 1;
        R25R24._0_1_ = *puVar11;
        FUN_code_0004fc((byte)R25R24);
        R11R10._1_1_ = R11R10._1_1_ + '\x01';
        Z = (byte *)CONCAT11(5,Z._0_1_);
      } while (R11R10._1_1_ != '\x05');
      R25R24 = (undefined1 *)((uint)R25R24._1_1_ << 8);
      FUN_code_0004fc(0);
      DAT_mem_0056 = (undefined1)R9R8;
    }
    Z = R17R16;
    R25R24._0_1_ = R17R16[1];
    R25R24._0_1_ = (byte)R25R24 + 1;
    R17R16[1] = (byte)R25R24;
    bVar9 = (byte)R25R24;
    R25R24 = (undefined1 *)(uint)(byte)R25R24;
    R19R18._0_1_ = Z[2];
    bVar2 = (byte)R19R18 + 8;
    cVar1 = ((byte)R19R18 < 0xf8) + -1;
    cVar3 = -cVar1;
    R19R18 = (undefined1 *)CONCAT11(cVar3,bVar2);
    if ((char)-(cVar3 + (bVar9 < bVar2)) < '\0' ==
        (SBORROW1('\0',cVar3) != SBORROW1(cVar1,bVar9 < bVar2))) {
      Z[1] = R1;
      R25R24 = FUN_code_000ff0();
      R25R24 = (undefined1 *)((uint)R25R24 & 0x8007);
      if ((int)R25R24 < 0) {
        R25R24._0_1_ = (char)R25R24 - 1;
        R25R24._0_1_ = (byte)R25R24 | 0xf8;
        R25R24 = (undefined1 *)(uint)(byte)R25R24;
        R25R24 = (undefined1 *)((int)R25R24 + 1);
      }
      Z = R17R16;
      *R17R16 = (byte)R25R24 + R9R8._1_1_;
      R25R24 = FUN_code_000ff0();
      R25R24 = (undefined1 *)((uint)R25R24 & 0x8003);
      if ((int)R25R24 < 0) {
        R25R24._0_1_ = (char)R25R24 - 1;
        R25R24._0_1_ = (byte)R25R24 | 0xfc;
        R25R24 = (undefined1 *)CONCAT11(0xff,(byte)R25R24);
        R25R24 = (undefined1 *)((int)R25R24 + 1);
      }
      bVar2 = (byte)R25R24 + 3;
      R25R24 = (undefined1 *)CONCAT11(R25R24._1_1_,bVar2);
      Z = R17R16;
      R17R16[2] = bVar2;
    }
    Z = (byte *)CONCAT11(3,Z._0_1_);
    R15R14 = (byte *)CONCAT11(R15R14._1_1_ + R1 + (0xfc < (byte)R15R14),(byte)R15R14 + 3);
    cVar1 = R9R8._1_1_ + '\x10';
    R9R8 = CONCAT11(cVar1,(undefined1)R9R8);
    R19R18 = (undefined1 *)0x8010;
  } while (cVar1 != -0x80);
  Y = (undefined1 *)uVar10;
  R17R16 = pbVar8;
  R15R14 = pbVar7;
  R13R12 = uVar6;
  R11R10 = puVar5;
  R9R8 = uVar4;
  return R25R24;
}



ulonglong FUN_code_000772(byte *R25R24,undefined2 R23R22,char R20)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  bool bVar7;
  char in_Hflg;
  char in_Tflg;
  char in_Iflg;
  
  R1 = 0;
  bVar1 = R23R22._1_1_ * '\x02' + CARRY1((byte)R23R22,(byte)R23R22);
  bVar5 = (byte)R23R22 * '\x03';
  bVar7 = CARRY1((byte)R23R22,(byte)R23R22 * '\x02');
  cVar2 = R23R22._1_1_ + bVar1 + bVar7;
  bVar3 = PING;
  R18 = bVar3 & 0xbf;
  bVar4 = PING;
  R19 = bVar4 | 0x40;
  R21 = (CARRY1(R23R22._1_1_,bVar1) || CARRY1(R23R22._1_1_ + bVar1,bVar7)) | (R19 == 0) << 1 |
        ((char)R19 < '\0') << 2 | ((char)R19 < '\0') << 4 | (in_Hflg == '\x01') << 5 |
        (in_Tflg == '\x01') << 6 | (in_Iflg == '\x01') << 7;
  R23R22._0_1_ = bVar5;
  R23R22._1_1_ = cVar2;
  if (bVar5 != 0 || cVar2 != '\0') {
    Z = R25R24;
    R23R22._0_1_ = bVar5 + (byte)R25R24;
    R23R22._1_1_ = cVar2 + R25R24._1_1_ + CARRY1(bVar5,(byte)R25R24);
    do {
      pbVar6 = Z;
      Z = Z + 1;
      R25R24._1_1_ = *pbVar6;
      R20 = '\b';
      do {
        PING = R19;
        if ((R25R24._1_1_ & 0x80) == 0) {
          PING = R18;
        }
        R25R24._1_1_ = R25R24._1_1_ * '\x02';
        PING = R18;
        R20 = R20 + -1;
      } while (R20 != '\0');
    } while (Z != (byte *)CONCAT11(R23R22._1_1_ + ((byte)Z < (byte)R23R22),(byte)R23R22));
  }
  SREG = R21;
  R25R24._0_1_ = -0x7b;
  do {
    R25R24._0_1_ = (byte)R25R24 + -1;
  } while ((byte)R25R24 != '\0');
  return CONCAT17(R25R24._1_1_,
                  (uint7)CONCAT15(R23R22._1_1_,
                                  CONCAT14((byte)R23R22,
                                           CONCAT13(R21,CONCAT12(R20,CONCAT11(bVar4,bVar3)))))) &
         0xffffffffffffffbf | 0x4000;
}



ulonglong FUN_code_000797(byte *R25R24,undefined2 R23R22,char R20)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  bool bVar7;
  char in_Hflg;
  char in_Tflg;
  char in_Iflg;
  
  R1 = 0;
  bVar1 = R23R22._1_1_ * '\x02' + CARRY1((byte)R23R22,(byte)R23R22);
  bVar5 = (byte)R23R22 * '\x03';
  bVar7 = CARRY1((byte)R23R22,(byte)R23R22 * '\x02');
  cVar2 = R23R22._1_1_ + bVar1 + bVar7;
  bVar3 = PING;
  R18 = bVar3 & 0xef;
  bVar4 = PING;
  R19 = bVar4 | 0x10;
  R21 = (CARRY1(R23R22._1_1_,bVar1) || CARRY1(R23R22._1_1_ + bVar1,bVar7)) | (R19 == 0) << 1 |
        ((char)R19 < '\0') << 2 | ((char)R19 < '\0') << 4 | (in_Hflg == '\x01') << 5 |
        (in_Tflg == '\x01') << 6 | (in_Iflg == '\x01') << 7;
  R23R22._0_1_ = bVar5;
  R23R22._1_1_ = cVar2;
  if (bVar5 != 0 || cVar2 != '\0') {
    Z = R25R24;
    R23R22._0_1_ = bVar5 + (byte)R25R24;
    R23R22._1_1_ = cVar2 + R25R24._1_1_ + CARRY1(bVar5,(byte)R25R24);
    do {
      pbVar6 = Z;
      Z = Z + 1;
      R25R24._1_1_ = *pbVar6;
      R20 = '\b';
      do {
        PING = R19;
        if ((R25R24._1_1_ & 0x80) == 0) {
          PING = R18;
        }
        R25R24._1_1_ = R25R24._1_1_ * '\x02';
        PING = R18;
        R20 = R20 + -1;
      } while (R20 != '\0');
    } while (Z != (byte *)CONCAT11(R23R22._1_1_ + ((byte)Z < (byte)R23R22),(byte)R23R22));
  }
  SREG = R21;
  R25R24._0_1_ = -0x7b;
  do {
    R25R24._0_1_ = (byte)R25R24 + -1;
  } while ((byte)R25R24 != '\0');
  return CONCAT17(R25R24._1_1_,
                  (uint7)CONCAT15(R23R22._1_1_,
                                  CONCAT14((byte)R23R22,
                                           CONCAT13(R21,CONCAT12(R20,CONCAT11(bVar4,bVar3)))))) &
         0xffffffffffffffef | 0x1000;
}



ulonglong FUN_code_0007bc(byte *R25R24,undefined2 R23R22,char R20)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  bool bVar7;
  char in_Hflg;
  char in_Tflg;
  char in_Iflg;
  
  R1 = 0;
  bVar1 = R23R22._1_1_ * '\x02' + CARRY1((byte)R23R22,(byte)R23R22);
  bVar5 = (byte)R23R22 * '\x03';
  bVar7 = CARRY1((byte)R23R22,(byte)R23R22 * '\x02');
  cVar2 = R23R22._1_1_ + bVar1 + bVar7;
  bVar3 = PING;
  R18 = bVar3 & 0xf7;
  bVar4 = PING;
  R19 = bVar4 | 8;
  R21 = (CARRY1(R23R22._1_1_,bVar1) || CARRY1(R23R22._1_1_ + bVar1,bVar7)) | (R19 == 0) << 1 |
        ((char)R19 < '\0') << 2 | ((char)R19 < '\0') << 4 | (in_Hflg == '\x01') << 5 |
        (in_Tflg == '\x01') << 6 | (in_Iflg == '\x01') << 7;
  R23R22._0_1_ = bVar5;
  R23R22._1_1_ = cVar2;
  if (bVar5 != 0 || cVar2 != '\0') {
    Z = R25R24;
    R23R22._0_1_ = bVar5 + (byte)R25R24;
    R23R22._1_1_ = cVar2 + R25R24._1_1_ + CARRY1(bVar5,(byte)R25R24);
    do {
      pbVar6 = Z;
      Z = Z + 1;
      R25R24._1_1_ = *pbVar6;
      R20 = '\b';
      do {
        PING = R19;
        if ((R25R24._1_1_ & 0x80) == 0) {
          PING = R18;
        }
        R25R24._1_1_ = R25R24._1_1_ * '\x02';
        PING = R18;
        R20 = R20 + -1;
      } while (R20 != '\0');
    } while (Z != (byte *)CONCAT11(R23R22._1_1_ + ((byte)Z < (byte)R23R22),(byte)R23R22));
  }
  SREG = R21;
  R25R24._0_1_ = -0x7b;
  do {
    R25R24._0_1_ = (byte)R25R24 + -1;
  } while ((byte)R25R24 != '\0');
  return CONCAT17(R25R24._1_1_,
                  (uint7)CONCAT15(R23R22._1_1_,
                                  CONCAT14((byte)R23R22,
                                           CONCAT13(R21,CONCAT12(R20,CONCAT11(bVar4,bVar3)))))) &
         0xfffffffffffffff7 | 0x800;
}



ulonglong FUN_code_0007e1(byte *R25R24,undefined2 R23R22,char R20)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  bool bVar7;
  char in_Hflg;
  char in_Tflg;
  char in_Iflg;
  
  R1 = 0;
  bVar1 = R23R22._1_1_ * '\x02' + CARRY1((byte)R23R22,(byte)R23R22);
  bVar5 = (byte)R23R22 * '\x03';
  bVar7 = CARRY1((byte)R23R22,(byte)R23R22 * '\x02');
  cVar2 = R23R22._1_1_ + bVar1 + bVar7;
  bVar3 = TIFR0;
  R18 = bVar3 & 0xf7;
  bVar4 = TIFR0;
  R19 = bVar4 | 8;
  R21 = (CARRY1(R23R22._1_1_,bVar1) || CARRY1(R23R22._1_1_ + bVar1,bVar7)) | (R19 == 0) << 1 |
        ((char)R19 < '\0') << 2 | ((char)R19 < '\0') << 4 | (in_Hflg == '\x01') << 5 |
        (in_Tflg == '\x01') << 6 | (in_Iflg == '\x01') << 7;
  R23R22._0_1_ = bVar5;
  R23R22._1_1_ = cVar2;
  if (bVar5 != 0 || cVar2 != '\0') {
    Z = R25R24;
    R23R22._0_1_ = bVar5 + (byte)R25R24;
    R23R22._1_1_ = cVar2 + R25R24._1_1_ + CARRY1(bVar5,(byte)R25R24);
    do {
      pbVar6 = Z;
      Z = Z + 1;
      R25R24._1_1_ = *pbVar6;
      R20 = '\b';
      do {
        TIFR0 = R19;
        if ((R25R24._1_1_ & 0x80) == 0) {
          TIFR0 = R18;
        }
        R25R24._1_1_ = R25R24._1_1_ * '\x02';
        TIFR0 = R18;
        R20 = R20 + -1;
      } while (R20 != '\0');
    } while (Z != (byte *)CONCAT11(R23R22._1_1_ + ((byte)Z < (byte)R23R22),(byte)R23R22));
  }
  SREG = R21;
  R25R24._0_1_ = -0x7b;
  do {
    R25R24._0_1_ = (byte)R25R24 + -1;
  } while ((byte)R25R24 != '\0');
  return CONCAT17(R25R24._1_1_,
                  (uint7)CONCAT15(R23R22._1_1_,
                                  CONCAT14((byte)R23R22,
                                           CONCAT13(R21,CONCAT12(R20,CONCAT11(bVar4,bVar3)))))) &
         0xfffffffffffffff7 | 0x800;
}



undefined7 FUN_code_000806(byte R24)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  
  bVar3 = R24;
  R1 = 0;
  R22 = R24;
  R18 = 0;
  R19 = '\0';
  R24 = 0;
  R23 = 0;
  do {
    bVar2 = R18;
    R20 = bVar3;
    R0 = R18;
    while (R0 = R0 - 1, -1 < (char)R0) {
      R20 = R20 >> 1;
    }
    if ((R20 & 1) != 0) {
      R24 = R24 + 1;
    }
    bVar1 = R18 + 1;
    bVar4 = R18 != 0xff;
    R18 = bVar1;
    R19 = R19 - (bVar4 + -1);
  } while (bVar2 != 4 || (bool)R19 != bVar1 < 5);
  R21 = 0;
  return CONCAT16(R24,(uint6)CONCAT14(bVar3,(ulong)CONCAT12(R20,CONCAT11(R19,bVar1))));
}



char * FUN_code_00081a(char *R25R24,undefined2 R23R22,undefined2 R21R20)

{
  byte bVar1;
  
  R1 = 0;
  bVar1 = (byte)R25R24;
  FUN_code_00053c();
  if (bVar1 < 5) {
    R23R22 = 0x6e;
    R25R24 = (char *)((uint)R25R24._1_1_ << 8);
    R25R24 = FUN_code_0005c9(R25R24,&TIMSK0,R21R20);
    R23R22 = 0x7d;
    R25R24 = (char *)CONCAT11(R25R24._1_1_,2);
    R25R24 = FUN_code_0005c9(R25R24,&DIDR2,R21R20);
    R23R22 = 0x8d;
    R25R24 = (char *)CONCAT11(R25R24._1_1_,6);
    R25R24 = FUN_code_0005c9(R25R24,&OCR1CH,R21R20);
  }
  else {
    R23R22 = 0xa1;
    R25R24 = (char *)CONCAT11(R25R24._1_1_,2);
    R25R24 = FUN_code_0005c9(R25R24,&TCCR4B,R21R20);
    R23R22 = 0xb0;
    R25R24 = (char *)CONCAT11(R25R24._1_1_,4);
    R25R24 = FUN_code_0005c9(R25R24,&TCCR2A,R21R20);
  }
  return R25R24;
}



char * FUN_code_00083c(char *R25R24,char *R23R22,undefined2 R21R20)

{
  uint uVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  char in_Hflg;
  char cVar5;
  char in_Tflg;
  char cVar6;
  char in_Iflg;
  char cVar7;
  undefined1 uStack_9;
  undefined1 uStack_8;
  undefined1 uStack_7;
  
  R1 = 0;
  uStack_7 = (undefined1)Y;
  uStack_8 = Y._1_1_;
  uVar1 = CONCAT11((char)((uint)&uStack_9 >> 8),(char)&uStack_9);
  Y = uVar1 - 0xc;
  cVar5 = in_Hflg == '\x01';
  cVar6 = in_Tflg == '\x01';
  cVar7 = in_Iflg == '\x01';
  R0 = uVar1 < 0xc | (Y == 0) << 1 | ((int)Y < 0) << 2 | SBORROW2(uVar1,0xc) << 3 |
       ((int)uVar1 < 0xc) << 4 | cVar5 << 5 | cVar6 << 6 | cVar7 << 7;
  SREG = R0;
  R14 = (byte)R25R24;
  R15 = (byte)R23R22;
  *(undefined3 *)(uVar1 - 0xe) = 0x851;
  FUN_code_00053c();
  R23R22 = &IRQ_MASK1;
  R25R24 = (char *)((uint)R25R24._1_1_ << 8);
  *(undefined3 *)(uVar1 - 0xe) = 0x856;
  R25R24 = FUN_code_0005c9(R25R24,R23R22,R21R20);
  R25R24 = (char *)CONCAT11(R25R24._1_1_,2);
  if (R14 < 3) {
    R17 = 0;
  }
  else {
    R17 = R14 - 2;
    if (4 < R17) goto LAB_code_0008b3;
  }
  R16 = '\x02';
  R25R24 = (char *)(CONCAT11(R25R24._1_1_,R15) & 0xff08);
  R11 = (byte)R25R24;
  R25R24 = (char *)(CONCAT11(R25R24._1_1_,R15) & 0xff04);
  R12 = (byte)R25R24;
  R25R24 = (char *)(CONCAT11(R25R24._1_1_,R15) & 0xff02);
  R13 = (byte)R25R24;
  R25R24 = (char *)(CONCAT11(R25R24._1_1_,R15) & 0xff01);
  R15 = (byte)R25R24;
  do {
    R23R22 = (char *)CONCAT11(R23R22._1_1_,0xc);
    R25R24 = (char *)CONCAT11(R25R24._1_1_,R16);
    *(undefined3 *)(uVar1 - 0xe) = 0x875;
    FUN_code_00057e((byte)R25R24,(byte)R23R22);
    if (R14 == R17) {
      R25R24 = (char *)0xcf;
      *(undefined3 *)(uVar1 - 0xe) = 0x87b;
      FUN_code_00058f(R25R24);
    }
    else {
      R25R24 = &TWDR;
      *(undefined3 *)(uVar1 - 0xe) = 0x880;
      FUN_code_00058f(R25R24);
    }
    bVar2 = R15;
    if (((R17 == R1) || (bVar2 = R13, R17 == 1)) || (bVar2 = R12, R17 == 2)) {
      if (bVar2 == R1) goto LAB_code_0008a0;
LAB_code_000895:
      Z = (undefined2 *)
          CONCAT11(CARRY1(R17,R17) - (((byte)(R17 * '\x02') < 0x9c) + -1),R17 * '\x02' + 100);
      R25R24 = (char *)*Z;
      *(undefined3 *)(uVar1 - 0xe) = 0x89f;
      R25R24 = FUN_code_00058f(R25R24);
    }
    else {
      if ((R17 == 3) || ((R17 == 4 && (R11 != '\0')))) goto LAB_code_000895;
LAB_code_0008a0:
      R25R24 = (char *)0xc;
      Z = (undefined2 *)&UCSR2C;
      X = (undefined1 *)(Y + 1);
      do {
        puVar4 = Z;
        puVar3 = X;
        Z = (undefined2 *)((int)Z + 1);
        R0 = *(byte *)puVar4;
        X = X + 1;
        *puVar3 = R0;
        R25R24._0_1_ = (byte)R25R24 - 1;
        bVar2 = (byte)R25R24;
        R25R24 = (char *)(uint)(byte)R25R24;
      } while (bVar2 != 0);
      *(byte *)(Y + 1) = R17 + 0x31;
      R25R24 = (char *)(Y + 1);
      *(undefined3 *)(uVar1 - 0xe) = 0x8b0;
      R25R24 = FUN_code_00058f(R25R24);
    }
    if (R16 == '\x06') break;
    R17 = R17 + 1;
    R16 = R16 + '\x02';
  } while (R17 < 5);
LAB_code_0008b3:
  uVar1 = Y;
  Y = Y + 0xc;
  R0 = 0xfff3 < uVar1 | (uVar1 == 0xfff4) << 1 | ((int)Y < 0) << 2 | SCARRY2(Y,0xc) << 3 |
       ((int)Y < 0 != SCARRY2(Y,0xc)) << 4 | (cVar5 == '\x01') << 5 | (cVar6 == '\x01') << 6 |
       (cVar7 == '\x01') << 7;
  SREG = R0;
  Y._1_1_ = *(undefined1 *)(uVar1 + 0xd);
  Y._0_1_ = *(undefined1 *)(uVar1 + 0xe);
  R17 = *(undefined1 *)(uVar1 + 0xf);
  R16 = *(undefined1 *)(uVar1 + 0x10);
  R15 = *(undefined1 *)(uVar1 + 0x11);
  R14 = *(undefined1 *)(uVar1 + 0x12);
  R13 = *(undefined1 *)(uVar1 + 0x13);
  R12 = *(undefined1 *)(uVar1 + 0x14);
  R11 = *(undefined1 *)(uVar1 + 0x15);
  return R25R24;
}



uint FUN_code_0008c3(uint R25R24)

{
  R1 = 0;
  FUN_code_00053c();
  R25R24 = FUN_code_0005f4(0x454);
  return R25R24;
}



uint FUN_code_0008ca(uint R25R24)

{
  R1 = 0;
  FUN_code_00053c();
  R25R24 = FUN_code_0005f4(0x54);
  return R25R24;
}



char * FUN_code_0008d1(char *R25R24,char *R23R22,undefined2 R21R20)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char in_Hflg;
  char cVar4;
  char in_Tflg;
  char cVar5;
  char in_Iflg;
  char cVar6;
  undefined1 uStack_4;
  undefined1 uStack_3;
  undefined1 uStack_2;
  
  R1 = 0;
  uStack_2 = (undefined1)Y;
  uStack_3 = Y._1_1_;
  uVar1 = CONCAT11((char)((uint)&uStack_4 >> 8),(char)&uStack_4);
  Y = uVar1 - 0xe;
  cVar4 = in_Hflg == '\x01';
  cVar5 = in_Tflg == '\x01';
  cVar6 = in_Iflg == '\x01';
  R0 = uVar1 < 0xe | (Y == 0) << 1 | ((int)Y < 0) << 2 | SBORROW2(uVar1,0xe) << 3 |
       ((int)uVar1 < 0xe) << 4 | cVar4 << 5 | cVar5 << 6 | cVar6 << 7;
  SREG = R0;
  R17 = (byte)R25R24;
  R16 = (char)R23R22;
  *(undefined3 *)(uVar1 - 0x10) = 0x8e1;
  FUN_code_00053c();
  if (R17 < 5) {
    R23R22 = (char *)0xde;
    R25R24 = (char *)CONCAT11(R25R24._1_1_,2);
    *(undefined3 *)(uVar1 - 0x10) = 0x8e8;
    R25R24 = FUN_code_0005c9(R25R24,R23R22,R21R20);
    R25R24 = (char *)CONCAT11(R25R24._1_1_,0xe);
    Z = &DAT_mem_00f9;
    X = (undefined1 *)(Y + 1);
    do {
      puVar3 = Z;
      puVar2 = X;
      Z = Z + 1;
      R0 = *puVar3;
      X = X + 1;
      *puVar2 = R0;
      R25R24._0_1_ = (byte)R25R24 + -1;
    } while ((byte)R25R24 != '\0');
    *(byte *)(Y + 1) = R17 + 0x30;
    R23R22._0_1_ = (char)Y;
    R23R22._1_1_ = (char)(Y >> 8);
    R23R22 = (char *)CONCAT11(R23R22._1_1_ - (((char)R23R22 != -1) + -1),(char)R23R22 + '\x01');
    R25R24 = (char *)CONCAT11(R25R24._1_1_,4);
    *(undefined3 *)(uVar1 - 0x10) = 0x8f9;
    R25R24 = FUN_code_0005c9(R25R24,R23R22,R21R20);
  }
  else {
    R25R24 = (char *)CONCAT11(R25R24._1_1_,R16);
    *(undefined3 *)(uVar1 - 0x10) = 0x8fd;
    FUN_code_000625((byte)R25R24);
    R23R22 = (char *)0xef;
    R25R24 = (char *)CONCAT11(R25R24._1_1_,6);
    *(undefined3 *)(uVar1 - 0x10) = 0x902;
    R25R24 = FUN_code_0005c9(R25R24,R23R22,R21R20);
  }
  uVar1 = Y;
  Y = Y + 0xe;
  R0 = 0xfff1 < uVar1 | (uVar1 == 0xfff2) << 1 | ((int)Y < 0) << 2 | SCARRY2(Y,0xe) << 3 |
       ((int)Y < 0 != SCARRY2(Y,0xe)) << 4 | (cVar4 == '\x01') << 5 | (cVar5 == '\x01') << 6 |
       (cVar6 == '\x01') << 7;
  SREG = R0;
  Y._1_1_ = *(undefined1 *)(uVar1 + 0xf);
  Y._0_1_ = *(undefined1 *)(uVar1 + 0x10);
  R17 = *(undefined1 *)(uVar1 + 0x11);
  R16 = *(undefined1 *)(uVar1 + 0x12);
  return R25R24;
}



undefined4 FUN_code_00090d(undefined2 R25R24,undefined2 R23R22,undefined2 param_3,uint R19R18)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  
  R1 = 0;
  if ((byte)R25R24 < 0x55) {
    bVar1 = (byte)R25R24 * '\x03';
    bVar3 = CARRY1((byte)R25R24,(byte)R25R24) != CARRY1((byte)R25R24 * '\x02',(byte)R25R24);
    R25R24._0_1_ = ((bVar3 != (bVar1 != 0)) != ((byte)((byte)R25R24 * -3) != '\0')) << 7 |
                   (byte)((byte)R25R24 * -3 - 1) >> 1;
    R19R18 = CONCAT11(R19R18._1_1_,(byte)R25R24);
    R23R22._0_1_ = bVar3 << 7 | bVar1 >> 1;
    R25R24 = 0;
  }
  else if ((byte)R25R24 < 0xaa) {
    bVar1 = (byte)R25R24 + 0xab;
    cVar2 = CARRY1(bVar1,bVar1) + CARRY1(bVar1,bVar1 * '\x02');
    R23R22._0_1_ = (-(((byte)(bVar1 * -3) == '\0') + -1) - (cVar2 + ((byte)(bVar1 * '\x03') != 0)))
                   * -0x80 | (byte)(bVar1 * -3 - 1) >> 1;
    R25R24._1_1_ = cVar2 >> 1;
    R25R24._0_1_ = cVar2 * -0x80 | (byte)(bVar1 * '\x03') >> 1;
    R19R18 = (uint)R19R18._1_1_ << 8;
  }
  else {
    bVar1 = (byte)R25R24 + 0x56;
    bVar3 = CARRY1(bVar1,bVar1) != CARRY1(bVar1,bVar1 * '\x02');
    R19R18._0_1_ = bVar3 << 7 | (byte)(bVar1 * '\x03') >> 1;
    R19R18 = (uint)(byte)R19R18;
    R25R24._0_1_ = bVar1 * -3;
    cVar2 = (-((byte)R25R24 != '\0') - bVar3) - (((byte)R25R24 == '\0') + -1);
    R25R24._1_1_ = cVar2 >> 1;
    R25R24._0_1_ = cVar2 * -0x80 | (byte)((byte)R25R24 - 1) >> 1;
    R23R22._0_1_ = 0;
  }
  R23R22 = CONCAT11((byte)R19R18,(byte)R23R22);
  return CONCAT22(R25R24,R23R22);
}



void FUN_code_00094b(void)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  undefined1 uVar7;
  int iVar8;
  uint5 uVar9;
  uint7 uVar10;
  undefined2 uVar11;
  undefined3 uVar12;
  undefined6 uVar13;
  uint6 uVar14;
  undefined7 uVar15;
  undefined8 uVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  byte bVar23;
  int iVar22;
  bool bVar24;
  char in_Hflg;
  char in_Tflg;
  char in_Iflg;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  uStack_1 = Y._1_1_;
  bVar23 = (byte)((uint)&uStack_2 >> 8);
  cVar1 = (byte)&uStack_2 + 0xac;
  bVar24 = (byte)&uStack_2 < 0x54;
  cVar2 = bVar23 - bVar24;
  Y = CONCAT11(cVar2,cVar1);
  R1R0._0_1_ = bVar23 < bVar24 | (cVar1 == '\0' && cVar2 == '\0') << 1 | (cVar2 < '\0') << 2 |
               SBORROW1(bVar23,bVar24) << 3 | ((char)bVar23 < bVar24) << 4 |
               (in_Hflg == '\x01') << 5 | (in_Tflg == '\x01') << 6 | (in_Iflg == '\x01') << 7;
  SREG = (byte)R1R0;
  R1R0 = (uint)(byte)R1R0;
  iVar22 = CONCAT11(cVar2,cVar1);
  bVar23 = MCUSR;
  R25R24R23R22R21R20R19R18._6_1_ = bVar23 | 0x80;
  MCUSR = R25R24R23R22R21R20R19R18._6_1_;
  R25R24R23R22R21R20R19R18._6_1_ = MCUSR;
  R25R24R23R22R21R20R19R18._6_1_ = R25R24R23R22R21R20R19R18._6_1_ | 0x80;
  MCUSR = R25R24R23R22R21R20R19R18._6_1_;
  R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(0x20,(uint6)R25R24R23R22R21R20R19R18);
  PINA = 0x20;
  *(undefined3 *)(iVar22 + -2) = 0x960;
  R25R24R23R22R21R20R19R18._6_1_ = FUN_code_000514();
  R25R24R23R22R21R20R19R18._0_7_ =
       CONCAT16(R25R24R23R22R21R20R19R18._6_1_,(uint6)R25R24R23R22R21R20R19R18);
  R25R24R23R22R21R20R19R18 =
       CONCAT17(R25R24R23R22R21R20R19R18._7_1_,(uint7)R25R24R23R22R21R20R19R18);
  *(undefined3 *)(iVar22 + -2) = 0x962;
  FUN_code_00065b(R25R24R23R22R21R20R19R18._6_2_);
  R25R24R23R22R21R20R19R18._6_1_ = PORTF;
  R25R24R23R22R21R20R19R18._6_1_ = R25R24R23R22R21R20R19R18._6_1_ | 0x58;
  PORTF = R25R24R23R22R21R20R19R18._6_1_;
  bVar23 = PORTG;
  PORTG = bVar23 | 8;
  R25R24R23R22R21R20R19R18._6_1_ = PORTG;
  R25R24R23R22R21R20R19R18._6_1_ = R25R24R23R22R21R20R19R18._6_1_ & 0xf;
  PORTG = R25R24R23R22R21R20R19R18._6_1_;
  R25R24R23R22R21R20R19R18._6_1_ = TIFR0;
  R25R24R23R22R21R20R19R18._6_1_ = R25R24R23R22R21R20R19R18._6_1_ | 0xf0;
  TIFR0 = R25R24R23R22R21R20R19R18._6_1_;
  *(undefined3 *)(iVar22 + -2) = 0x970;
  iVar8 = Y;
  R25R24R23R22R21R20R19R18._6_2_ = (byte *)FUN_code_001000();
  uVar19 = R25R24R23R22R21R20R19R18;
  Y = Y + 8;
  *(byte *)(iVar8 + 0x47) = R25R24R23R22R21R20R19R18._6_1_;
  R25R24R23R22R21R20R19R18 = uVar19;
  Y = Y + -8;
  if (0x1f < R25R24R23R22R21R20R19R18._6_1_) {
    R25R24R23R22R21R20R19R18._0_5_ = (uint5)(ulong)R25R24R23R22R21R20R19R18;
    R25R24R23R22R21R20R19R18._0_7_ = (uint7)R25R24R23R22R21R20R19R18 & 0xffffffffffff;
    R25R24R23R22R21R20R19R18 = (ulonglong)(uint7)R25R24R23R22R21R20R19R18;
    *(undefined3 *)(iVar22 + -2) = 0x97a;
    iVar8 = Y;
    R25R24R23R22R21R20R19R18._6_2_ =
         (byte *)FUN_code_001008((int)R25R24R23R22R21R20R19R18._6_2_,R25R24R23R22R21R20R19R18._4_1_)
    ;
    R25R24R23R22R21R20R19R18 =
         CONCAT26(R25R24R23R22R21R20R19R18._6_2_,(uint6)R25R24R23R22R21R20R19R18);
    Y = Y + 8;
    *(byte *)(iVar8 + 0x47) = R1R0._1_1_;
    Y = Y + -8;
  }
  R25R24R23R22R21R20R19R18._6_1_ = *(undefined1 *)(Y + 0x47);
  *(undefined3 *)(iVar22 + -2) = 0x982;
  iVar8 = Y;
  R25R24R23R22R21R20R19R18._0_7_ = FUN_code_000806(R25R24R23R22R21R20R19R18._6_1_);
  uVar10 = (uint7)R25R24R23R22R21R20R19R18;
  R25R24R23R22R21R20R19R18 = (ulonglong)(uint7)R25R24R23R22R21R20R19R18;
  uVar20 = R25R24R23R22R21R20R19R18;
  Y = Y + 0x12;
  R25R24R23R22R21R20R19R18._6_1_ = SUB71(uVar10,6);
  *(byte *)(iVar8 + 0x51) = R25R24R23R22R21R20R19R18._6_1_;
  R25R24R23R22R21R20R19R18 = uVar20;
  iVar8 = Y;
  R4 = '\x01';
  R5 = 1;
  R13R12._0_1_ = 1;
  R13R12._1_1_ = 1;
  R25R24R23R22R21R20R19R18 = CONCAT71(R25R24R23R22R21R20R19R18._1_7_,1);
  Y = Y + -1;
  *(undefined1 *)(iVar8 + 0x3e) = 1;
  iVar8 = Y;
  R9R8 = CONCAT11(R1R0._1_1_,R1R0._1_1_);
  Y = Y + -7;
  *(byte *)(iVar8 + 0x38) = R1R0._1_1_;
  *(byte *)(Y + 0x3e) = R1R0._1_1_;
  iVar8 = Y;
  Y = Y + 4;
  *(byte *)(iVar8 + 0x43) = R1R0._1_1_;
  iVar8 = Y;
  Y = Y + 1;
  *(byte *)(iVar8 + 0x40) = R1R0._1_1_;
  iVar8 = Y;
  Y = Y + 5;
  *(byte *)(iVar8 + 0x44) = R1R0._1_1_;
  iVar8 = Y;
  Y = Y + 1;
  *(byte *)(iVar8 + 0x40) = R1R0._1_1_;
  iVar8 = Y;
  Y = Y + -0x13;
  *(byte *)(iVar8 + 0x2c) = R1R0._1_1_;
  iVar8 = Y;
  Y = Y + 0x11;
  *(byte *)(iVar8 + 0x50) = R1R0._1_1_;
  iVar8 = Y;
  Y = Y + -0xd;
  *(byte *)(iVar8 + 0x32) = R1R0._1_1_;
  iVar8 = Y;
  Y = Y + 5;
  *(byte *)(iVar8 + 0x44) = R1R0._1_1_;
  iVar8 = Y;
  Y = Y + -0xb;
  R6 = R1R0._1_1_;
  R25R24R23R22R21R20R19R18 = CONCAT62(R25R24R23R22R21R20R19R18._2_6_,0x1f00);
  R11R10._0_1_ = (byte)Y;
  R11R10._1_1_ = (char)(Y >> 8);
  R11R10 = (undefined1 *)
           CONCAT11(R11R10._1_1_ + R1R0._1_1_ + (0xe0 < (byte)R11R10),(byte)R11R10 + 0x1f);
  R25R24R23R22R21R20R19R18._6_2_ = (byte *)(iVar8 + -10);
  uVar19 = R25R24R23R22R21R20R19R18;
  R3R2 = (int)R25R24R23R22R21R20R19R18._6_2_;
  Y = iVar8 + 1;
  *(byte *)(iVar8 + 0x40) = R25R24R23R22R21R20R19R18._6_1_;
  R25R24R23R22R21R20R19R18 = uVar19;
  iVar8 = Y;
  Y = Y + 1;
  *(char *)(iVar8 + 0x40) = R3R2._1_1_;
  iVar8 = Y;
  R1R0._0_1_ = Z._1_1_;
  R7 = 0xa5;
  R15R14 = (byte *)CONCAT11(R13R12._1_1_,(byte)R13R12);
  Y = Y + -6;
  *(char *)(iVar8 + 0x39) = R5;
  iVar8 = Y;
  do {
    uVar7 = DDRG;
    R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(uVar7,(uint6)R25R24R23R22R21R20R19R18);
    Z._0_1_ = 1;
    Y = iVar8 + -4;
    *(undefined1 *)(iVar8 + 0x3b) = 1;
    Z = (byte *)(CONCAT11(R25R24R23R22R21R20R19R18._6_1_,(byte)Z) & 0x10ff);
    R13R12._1_1_ = R25R24R23R22R21R20R19R18._6_1_ & 0x10;
    iVar8 = Y;
    if ((R25R24R23R22R21R20R19R18 & 0x10000000000000) == 0) {
      *(byte *)(Y + 0x3f) = R6;
      iVar8 = Y;
    }
    uVar7 = DDRG;
    R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(uVar7,(uint6)R25R24R23R22R21R20R19R18);
    R25R24R23R22R21R20R19R18 = CONCAT71(R25R24R23R22R21R20R19R18._1_7_,1);
    Y = iVar8 + 1;
    *(undefined1 *)(iVar8 + 0x40) = 1;
    uVar20 = R25R24R23R22R21R20R19R18;
    uVar7 = R25R24R23R22R21R20R19R18._6_1_;
    R25R24R23R22R21R20R19R18._0_2_ = (undefined1 *)CONCAT11(uVar7,(byte)R25R24R23R22R21R20R19R18);
    R25R24R23R22R21R20R19R18 =
         CONCAT62(R25R24R23R22R21R20R19R18._2_6_,(undefined1 *)R25R24R23R22R21R20R19R18) &
         0xffffffffffff20ff;
    R13R12 = CONCAT11(R13R12._1_1_,R25R24R23R22R21R20R19R18._1_1_);
    iVar8 = Y;
    if ((uVar20 & 0x20000000000000) == 0) {
      *(byte *)(Y + 0x3f) = R6;
      iVar8 = Y;
    }
    uVar20 = R25R24R23R22R21R20R19R18;
    uVar7 = DDRG;
    R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(uVar7,(uint6)R25R24R23R22R21R20R19R18);
    R25R24R23R22R21R20R19R18._0_3_ = (undefined3)uVar20;
    R25R24R23R22R21R20R19R18._0_4_ = CONCAT13(1,(undefined3)R25R24R23R22R21R20R19R18);
    Y = iVar8 + 1;
    *(undefined1 *)(iVar8 + 0x40) = 1;
    R17R16._0_1_ = R25R24R23R22R21R20R19R18._6_1_ & 0x40;
    uVar6 = Y;
    if ((R25R24R23R22R21R20R19R18 & 0x40000000000000) == 0) {
      *(byte *)(Y + 0x3f) = R6;
      uVar6 = Y;
    }
    uVar20 = R25R24R23R22R21R20R19R18;
    Y = uVar6 - 5;
    bVar23 = DDRG;
    R5 = CARRY1(bVar23,bVar23) || CARRY1(bVar23 * '\x02',uVar6 < 5);
    if (((byte)R17R16 == R1R0._1_1_) &&
       (R17R16 = (byte *)CONCAT11(bVar23,(byte)R17R16), -1 < (char)bVar23)) {
      R25R24R23R22R21R20R19R18._0_5_ = CONCAT14(R6,(ulong)R25R24R23R22R21R20R19R18);
      R25R24R23R22R21R20R19R18._0_7_ = (uint7)R25R24R23R22R21R20R19R18 & 0xffffffffffff;
      R25R24R23R22R21R20R19R18 = (ulonglong)(uint7)R25R24R23R22R21R20R19R18;
      *(undefined3 *)(iVar22 + -2) = 0xa09;
      R25R24R23R22R21R20R19R18._6_2_ =
           (byte *)FUN_code_001008((int)R25R24R23R22R21R20R19R18._6_2_,
                                   R25R24R23R22R21R20R19R18._4_1_);
      R25R24R23R22R21R20R19R18 =
           CONCAT26(R25R24R23R22R21R20R19R18._6_2_,(uint6)R25R24R23R22R21R20R19R18);
      *(undefined3 *)(iVar22 + -2) = 0xa0b;
      FUN_code_00053c();
      R25R24R23R22R21R20R19R18._0_5_ = CONCAT14(7,(ulong)R25R24R23R22R21R20R19R18);
      R25R24R23R22R21R20R19R18._0_6_ = CONCAT15(1,(uint5)R25R24R23R22R21R20R19R18);
      R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(2,(uint6)R25R24R23R22R21R20R19R18);
      R25R24R23R22R21R20R19R18 =
           CONCAT17(R25R24R23R22R21R20R19R18._7_1_,(uint7)R25R24R23R22R21R20R19R18);
      *(undefined3 *)(iVar22 + -2) = 0xa10;
      R25R24R23R22R21R20R19R18._6_2_ =
           (byte *)FUN_code_0005c9(R25R24R23R22R21R20R19R18._6_2_,R25R24R23R22R21R20R19R18._4_2_,
                                   R25R24R23R22R21R20R19R18._2_2_);
      R25R24R23R22R21R20R19R18._0_5_ = CONCAT14(0x17,(ulong)R25R24R23R22R21R20R19R18);
      R25R24R23R22R21R20R19R18._0_6_ = CONCAT15(1,(uint5)R25R24R23R22R21R20R19R18);
      R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(4,(uint6)R25R24R23R22R21R20R19R18);
      *(undefined3 *)(iVar22 + -2) = 0xa15;
      iVar8 = Y;
      FUN_code_0005c9(R25R24R23R22R21R20R19R18._6_2_,R25R24R23R22R21R20R19R18._4_2_,
                      R25R24R23R22R21R20R19R18._2_2_);
      R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(0xff,(uint6)R25R24R23R22R21R20R19R18);
      R25R24R23R22R21R20R19R18 = CONCAT17(0xd3,(uint7)R25R24R23R22R21R20R19R18);
      cVar1 = '0';
      do {
        uVar19 = R25R24R23R22R21R20R19R18;
        cVar2 = R25R24R23R22R21R20R19R18._6_1_ + -1;
        bVar24 = R25R24R23R22R21R20R19R18._6_1_ == '\0';
        R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(cVar2,(uint6)R25R24R23R22R21R20R19R18);
        cVar4 = R25R24R23R22R21R20R19R18._7_1_ - bVar24;
        bVar24 = R25R24R23R22R21R20R19R18._7_1_ < bVar24;
        R25R24R23R22R21R20R19R18 = CONCAT17(cVar4,(uint7)R25R24R23R22R21R20R19R18);
        cVar1 = cVar1 - bVar24;
      } while ((cVar2 != '\0' || cVar4 != '\0') || cVar1 != '\0');
      Z = (byte *)CONCAT11(1,cVar1);
      if (R15R14._1_1_ == '\x01') {
        if (R13R12._1_1_ == '\0') {
          R25R24R23R22R21R20R19R18._0_3_ = (undefined3)uVar19;
          R25R24R23R22R21R20R19R18._0_4_ = CONCAT13(1,(undefined3)R25R24R23R22R21R20R19R18);
          Y = Y + 0x11;
          *(undefined1 *)(iVar8 + 0x50) = 1;
          iVar8 = Y;
          Y = Y + -7;
          *(byte *)(iVar8 + 0x38) = R1R0._1_1_;
          *(byte *)(Y + 0x3e) = R1R0._1_1_;
          iVar8 = Y;
          Y = Y + 4;
          *(byte *)(iVar8 + 0x43) = R6;
          iVar8 = Y;
          Y = Y + 4;
          *(byte *)(iVar8 + 0x43) = R6;
          iVar8 = Y;
          Y = Y + -10;
          *(byte *)(iVar8 + 0x35) = R1R0._1_1_;
          Y = Y + -8;
LAB_code_000a3e:
          uVar19 = R25R24R23R22R21R20R19R18;
          R25R24R23R22R21R20R19R18._4_1_ = *(undefined1 *)(Y + 0x47);
          uVar16 = R25R24R23R22R21R20R19R18;
          R25R24R23R22R21R20R19R18._7_1_ = SUB81(uVar19,7);
          R25R24R23R22R21R20R19R18._0_6_ = (uint6)uVar16;
          R25R24R23R22R21R20R19R18._6_1_ = *(undefined1 *)(Y + 0x52);
          *(undefined3 *)(iVar22 + -2) = 0xa46;
          iVar8 = Y;
          R25R24R23R22R21R20R19R18._6_2_ =
               (byte *)FUN_code_00083c((char *)R25R24R23R22R21R20R19R18._6_2_,
                                       R25R24R23R22R21R20R19R18._4_2_,R25R24R23R22R21R20R19R18._2_2_
                                      );
          R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(2,(uint6)R25R24R23R22R21R20R19R18);
          Y = Y + 6;
          *(undefined1 *)(iVar8 + 0x45) = 2;
          goto LAB_code_000a5b;
        }
        Y = Y + 0x12;
        *(byte *)(iVar8 + 0x51) = R6;
        iVar8 = Y;
        Y = Y + -10;
        *(byte *)(iVar8 + 0x35) = R1R0._1_1_;
        iVar8 = Y;
        R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(1,(uint6)R25R24R23R22R21R20R19R18);
        Y = Y + 9;
        *(undefined1 *)(iVar8 + 0x48) = 1;
        iVar8 = Y;
        Y = Y + -7;
        *(byte *)(iVar8 + 0x38) = R1R0._1_1_;
        *(byte *)(Y + 0x3e) = R1R0._1_1_;
        iVar8 = Y;
        Y = Y + 4;
        *(byte *)(iVar8 + 0x43) = R6;
        iVar8 = Y;
        Y = Y + -8;
        *(byte *)(iVar8 + 0x37) = R6;
        Y = Y + -6;
        goto LAB_code_000a64;
      }
      R25R24R23R22R21R20R19R18 = CONCAT17(1,(uint7)R25R24R23R22R21R20R19R18);
      if ((char)R15R14 == '\x01') {
        R25R24R23R22R21R20R19R18 = CONCAT71(R25R24R23R22R21R20R19R18._1_7_,1);
        Y = Y + 0x11;
        *(undefined1 *)(iVar8 + 0x50) = 1;
        iVar8 = Y;
        Y = Y + -7;
        *(byte *)(iVar8 + 0x38) = R1R0._1_1_;
        *(byte *)(Y + 0x3e) = R1R0._1_1_;
        iVar8 = Y;
        Y = Y + 4;
        *(byte *)(iVar8 + 0x43) = R6;
        iVar8 = Y;
        Y = Y + 4;
        *(byte *)(iVar8 + 0x43) = R6;
        iVar8 = Y;
        Y = Y + -10;
        *(byte *)(iVar8 + 0x35) = R1R0._1_1_;
        Y = Y + -8;
LAB_code_000c5f:
        if ((byte)R13R12 == R1R0._1_1_) {
          *(undefined3 *)(iVar22 + -2) = 0xc63;
          FUN_code_00053c();
          R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(0x1f,(uint6)R25R24R23R22R21R20R19R18);
          R25R24R23R22R21R20R19R18 = CONCAT17(0x4e,(uint7)R25R24R23R22R21R20R19R18);
          do {
            R25R24R23R22R21R20R19R18._6_2_ = (byte *)((int)R25R24R23R22R21R20R19R18._6_2_ + -1);
          } while (R25R24R23R22R21R20R19R18._6_2_ != (byte *)0x0);
          R25R24R23R22R21R20R19R18._6_1_ = *(undefined1 *)(Y + 0x51);
          R25R24R23R22R21R20R19R18 = (ulonglong)(uint7)R25R24R23R22R21R20R19R18;
          *(undefined3 *)(iVar22 + -2) = 0xc6e;
          iVar8 = Y;
          FUN_code_00081a((char *)R25R24R23R22R21R20R19R18._6_2_,R25R24R23R22R21R20R19R18._4_2_,
                          R25R24R23R22R21R20R19R18._2_2_);
          R25R24R23R22R21R20R19R18._0_7_ = (uint7)(uint6)R25R24R23R22R21R20R19R18;
          R25R24R23R22R21R20R19R18 = CONCAT17(0x7f,(uint7)R25R24R23R22R21R20R19R18);
          Z = (byte *)0x138;
          do {
            cVar1 = R25R24R23R22R21R20R19R18._7_1_ + -1;
            bVar24 = R25R24R23R22R21R20R19R18._7_1_ == '\0';
            R25R24R23R22R21R20R19R18 = CONCAT17(cVar1,(uint7)R25R24R23R22R21R20R19R18);
            cVar2 = (byte)Z - bVar24;
            cVar4 = Z._1_1_ - ((byte)Z < bVar24);
            Z = (byte *)CONCAT11(cVar4,cVar2);
          } while ((cVar1 != '\0' || cVar2 != '\0') || cVar4 != '\0');
          Y = Y + 0x14;
          *(byte *)(iVar8 + 0x53) = R6;
          iVar8 = Y;
          Y = Y + 1;
          *(byte *)(iVar8 + 0x40) = R6;
          iVar8 = Y;
          R25R24R23R22R21R20R19R18 = CONCAT71(R25R24R23R22R21R20R19R18._1_7_,1);
          Y = Y + -0xf;
          *(undefined1 *)(iVar8 + 0x30) = 1;
          Y = Y + -6;
        }
        else {
LAB_code_000c82:
          iVar8 = Y;
          R25R24R23R22R21R20R19R18._6_1_ = *(undefined1 *)(Y + 0x48);
          R25R24R23R22R21R20R19R18._7_1_ = *(undefined1 *)(Y + 0x49);
          R25R24R23R22R21R20R19R18._6_2_ = (byte *)((int)R25R24R23R22R21R20R19R18._6_2_ + 1);
          uVar19 = R25R24R23R22R21R20R19R18;
          Y = Y + 10;
          *(byte *)(iVar8 + 0x49) = R25R24R23R22R21R20R19R18._7_1_;
          R25R24R23R22R21R20R19R18 = uVar19;
          *(byte *)(Y + 0x3e) = R25R24R23R22R21R20R19R18._6_1_;
          iVar8 = Y;
          uVar19 = R25R24R23R22R21R20R19R18;
          R25R24R23R22R21R20R19R18._7_1_ = *(byte *)(Y + 0x43);
          bVar23 = R25R24R23R22R21R20R19R18._7_1_;
          if (R25R24R23R22R21R20R19R18._7_1_ == R1R0._1_1_) {
            Z._0_1_ = *(byte *)(Y + 0x46);
            bVar24 = (byte)Z == R1R0._1_1_;
            goto LAB_code_000c94;
          }
          R25R24R23R22R21R20R19R18._0_6_ = (uint6)uVar19;
          R25R24R23R22R21R20R19R18._6_1_ = *(char *)(Y + 0x43);
          uVar16 = R25R24R23R22R21R20R19R18;
          if (R25R24R23R22R21R20R19R18._6_1_ == '\x01') {
            R25R24R23R22R21R20R19R18._7_1_ = *(byte *)(Y + 0x46);
            Y = Y + -10;
            if (R25R24R23R22R21R20R19R18._7_1_ != R1R0._1_1_) {
              *(undefined3 *)(iVar22 + -2) = 0xcbb;
              FUN_code_0008c3((uint)R25R24R23R22R21R20R19R18._6_2_);
              R25R24R23R22R21R20R19R18 = (ulonglong)(uint6)R25R24R23R22R21R20R19R18;
            }
            iVar8 = Y;
            Z = (byte *)(*(uint *)(Y + 0x48) - 0x1c);
            if (*(uint *)(Y + 0x48) < 0x1c) {
              Y = Y + 0x11;
              *(byte *)(iVar8 + 0x50) = R6;
              iVar8 = Y;
              Y = Y + -0xb;
              *(byte *)(iVar8 + 0x34) = R6;
              Y = Y + -6;
            }
            else {
              Z._1_1_ = *(byte *)(Y + 0x47);
              if ((Z._1_1_ & 0x10) == 0) {
                R25R24R23R22R21R20R19R18 = CONCAT71(R25R24R23R22R21R20R19R18._1_7_,1);
                Y = Y + 0x11;
                *(undefined1 *)(iVar8 + 0x50) = 1;
                iVar8 = Y;
                Y = Y + -7;
                *(byte *)(iVar8 + 0x38) = R1R0._1_1_;
                *(byte *)(Y + 0x3e) = R1R0._1_1_;
                iVar8 = Y;
                R25R24R23R22R21R20R19R18 = CONCAT62(R25R24R23R22R21R20R19R18._2_6_,0x400);
                Y = Y + 4;
                *(undefined1 *)(iVar8 + 0x43) = 4;
                iVar8 = Y;
                Y = Y + -8;
                *(byte *)(iVar8 + 0x37) = R6;
                Y = Y + -6;
              }
              else {
                Z = (byte *)CONCAT11(1,(byte)Z);
                Y = Y + 0x11;
                *(undefined1 *)(iVar8 + 0x50) = 1;
                iVar8 = Y;
                Y = Y + -7;
                *(byte *)(iVar8 + 0x38) = R1R0._1_1_;
                *(byte *)(Y + 0x3e) = R1R0._1_1_;
                iVar8 = Y;
                R25R24R23R22R21R20R19R18 = CONCAT71(R25R24R23R22R21R20R19R18._1_7_,3);
                Y = Y + 4;
                *(undefined1 *)(iVar8 + 0x43) = 3;
                iVar8 = Y;
                Y = Y + -8;
                *(byte *)(iVar8 + 0x37) = R6;
                Y = Y + -6;
              }
            }
          }
          else {
            R25R24R23R22R21R20R19R18._0_3_ = (undefined3)uVar19;
            R25R24R23R22R21R20R19R18._3_1_ = *(char *)(Y + 0x43);
            uVar20 = R25R24R23R22R21R20R19R18;
            if (R25R24R23R22R21R20R19R18._3_1_ == '\x02') {
              R25R24R23R22R21R20R19R18._6_1_ = *(byte *)(Y + 0x3d);
              if ((R25R24R23R22R21R20R19R18._6_1_ & 0x10) == 0) {
                R25R24R23R22R21R20R19R18 = CONCAT17(1,(uint7)R25R24R23R22R21R20R19R18);
                Y = Y + 7;
                *(undefined1 *)(iVar8 + 0x46) = 1;
                iVar8 = Y;
                Y = Y + -7;
                *(byte *)(iVar8 + 0x38) = R1R0._1_1_;
                *(byte *)(Y + 0x3e) = R1R0._1_1_;
                iVar8 = Y;
                Z = (byte *)CONCAT11(Z._1_1_,4);
                Y = Y + 4;
                *(undefined1 *)(iVar8 + 0x43) = 4;
                iVar8 = Y;
                Y = Y + -8;
                *(byte *)(iVar8 + 0x37) = R6;
                Y = Y + -6;
              }
              else {
                R25R24R23R22R21R20R19R18._2_6_ =
                     (uint6)(uint5)((uint7)R25R24R23R22R21R20R19R18 >> 0x10);
                R25R24R23R22R21R20R19R18 = CONCAT62(R25R24R23R22R21R20R19R18._2_6_,0x100);
                Y = Y + 7;
                *(undefined1 *)(iVar8 + 0x46) = 1;
                iVar8 = Y;
                Y = Y + -7;
                *(byte *)(iVar8 + 0x38) = R1R0._1_1_;
                *(byte *)(Y + 0x3e) = R1R0._1_1_;
                iVar8 = Y;
                R25R24R23R22R21R20R19R18._0_4_ = CONCAT13(3,(undefined3)R25R24R23R22R21R20R19R18);
                Y = Y + 4;
                *(undefined1 *)(iVar8 + 0x43) = 3;
                iVar8 = Y;
                Y = Y + -8;
                *(byte *)(iVar8 + 0x37) = R6;
                Y = Y + -6;
              }
            }
            else {
              Z._1_1_ = *(char *)(Y + 0x43);
              if (Z._1_1_ == '\x03') {
                R25R24R23R22R21R20R19R18._0_1_ = *(byte *)(Y + 0x46);
                Y = Y + -10;
                if ((byte)R25R24R23R22R21R20R19R18 != R1R0._1_1_) {
                  *(undefined3 *)(iVar22 + -2) = 0xcfc;
                  FUN_code_0008ca((uint)R25R24R23R22R21R20R19R18._6_2_);
                  R25R24R23R22R21R20R19R18 = (ulonglong)(uint6)R25R24R23R22R21R20R19R18;
                }
                iVar8 = Y;
                uVar20 = R25R24R23R22R21R20R19R18;
                uVar14 = (uint6)R25R24R23R22R21R20R19R18;
                R25R24R23R22R21R20R19R18._6_1_ = *(undefined1 *)(Y + 0x48);
                R25R24R23R22R21R20R19R18._7_1_ = *(undefined1 *)(Y + 0x49);
                uVar6 = (uint)R25R24R23R22R21R20R19R18._6_2_;
                R25R24R23R22R21R20R19R18 = uVar20 & 0xffffffffffff;
                if (uVar6 < 0x1c) {
                  Y = Y + 0x11;
                  *(byte *)(iVar8 + 0x50) = R6;
                  iVar8 = Y;
                  Y = Y + -0xb;
                  *(byte *)(iVar8 + 0x34) = R6;
                  Y = Y + -6;
                }
                else {
                  R25R24R23R22R21R20R19R18 = CONCAT17(1,(uint7)uVar14);
                  Y = Y + 0x11;
                  *(undefined1 *)(iVar8 + 0x50) = 1;
                  iVar8 = Y;
                  Y = Y + -7;
                  *(byte *)(iVar8 + 0x38) = R1R0._1_1_;
                  *(byte *)(Y + 0x3e) = R1R0._1_1_;
                  iVar8 = Y;
                  Z = (byte *)CONCAT11(Z._1_1_,4);
                  Y = Y + 4;
                  *(undefined1 *)(iVar8 + 0x43) = 4;
                  iVar8 = Y;
                  Y = Y + -8;
                  *(byte *)(iVar8 + 0x37) = R6;
                  Y = Y + -6;
                }
              }
              else {
                Z._1_1_ = *(char *)(Y + 0x43);
                if (Z._1_1_ == '\x04') {
                  R25R24R23R22R21R20R19R18._0_1_ = *(byte *)(Y + 0x46);
                  Y = Y + -10;
                  if ((byte)R25R24R23R22R21R20R19R18 != R1R0._1_1_) {
                    *(undefined3 *)(iVar22 + -2) = 0xd1e;
                    R25R24R23R22R21R20R19R18._6_2_ = FUN_code_00065b(R25R24R23R22R21R20R19R18._6_2_)
                    ;
                    R25R24R23R22R21R20R19R18 =
                         CONCAT26(R25R24R23R22R21R20R19R18._6_2_,(uint6)R25R24R23R22R21R20R19R18);
                  }
                  *(undefined3 *)(iVar22 + -2) = 0xd20;
                  iVar8 = Y;
                  FUN_code_000696(R25R24R23R22R21R20R19R18._6_2_,R25R24R23R22R21R20R19R18._4_2_,
                                  R25R24R23R22R21R20R19R18._2_2_,
                                  (undefined1 *)R25R24R23R22R21R20R19R18,R17R16,R15R14,R13R12,R11R10
                                  ,R9R8);
                  uVar14 = (uint6)R25R24R23R22R21R20R19R18;
                  R25R24R23R22R21R20R19R18._6_1_ = *(undefined1 *)(Y + 0x48);
                  R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(R25R24R23R22R21R20R19R18._6_1_,uVar14);
                  R25R24R23R22R21R20R19R18._7_1_ = *(undefined1 *)(Y + 0x49);
                  uVar6 = (uint)R25R24R23R22R21R20R19R18._6_2_;
                  R25R24R23R22R21R20R19R18 = (ulonglong)uVar14;
                  if (uVar6 < 0x1c) {
                    Y = Y + 0x11;
                    *(byte *)(iVar8 + 0x50) = R6;
                    iVar8 = Y;
                    Y = Y + -0xb;
                    *(byte *)(iVar8 + 0x34) = R6;
                    Y = Y + -6;
                  }
                  else {
                    R25R24R23R22R21R20R19R18 = CONCAT17(1,(uint7)uVar14);
                    Y = Y + 0x11;
                    *(undefined1 *)(iVar8 + 0x50) = 1;
                    iVar8 = Y;
                    Y = Y + -7;
                    *(byte *)(iVar8 + 0x38) = R1R0._1_1_;
                    *(byte *)(Y + 0x3e) = R1R0._1_1_;
                    iVar8 = Y;
                    Z = (byte *)CONCAT11(Z._1_1_,5);
                    Y = Y + 4;
                    *(undefined1 *)(iVar8 + 0x43) = 5;
                    iVar8 = Y;
                    Y = Y + -8;
                    *(byte *)(iVar8 + 0x37) = R6;
                    Y = Y + -6;
                  }
                }
                else {
                  Z._1_1_ = *(char *)(Y + 0x43);
                  if (Z._1_1_ == '\x05') {
                    R25R24R23R22R21R20R19R18._0_1_ = *(byte *)(Y + 0x47);
                    bVar3 = (byte)R25R24R23R22R21R20R19R18;
                    uVar19 = R25R24R23R22R21R20R19R18;
                    if ((byte)R25R24R23R22R21R20R19R18 < 5) {
                      R25R24R23R22R21R20R19R18._2_6_ = SUB86(uVar20,2);
                      R25R24R23R22R21R20R19R18._1_1_ = *(char *)(Y + 0x46);
                      Y = Y + -10;
                      uVar20 = R25R24R23R22R21R20R19R18;
                      if (R25R24R23R22R21R20R19R18._1_1_ != '\0') {
                        R25R24R23R22R21R20R19R18._5_3_ = SUB83(uVar16,5);
                        R25R24R23R22R21R20R19R18._0_4_ = (ulong)uVar20;
                        R25R24R23R22R21R20R19R18._0_5_ =
                             CONCAT14(R6,(ulong)R25R24R23R22R21R20R19R18);
                        R25R24R23R22R21R20R19R18._0_7_ =
                             CONCAT16(bVar3,(uint6)R25R24R23R22R21R20R19R18);
                        R25R24R23R22R21R20R19R18 = CONCAT17(bVar23,(uint7)R25R24R23R22R21R20R19R18);
                        *(undefined3 *)(iVar22 + -2) = 0xd4b;
                        iVar8 = Y;
                        FUN_code_0008d1((char *)R25R24R23R22R21R20R19R18._6_2_,
                                        R25R24R23R22R21R20R19R18._4_2_,
                                        R25R24R23R22R21R20R19R18._2_2_);
                        R25R24R23R22R21R20R19R18 = (ulonglong)(uint6)R25R24R23R22R21R20R19R18;
                        Y = Y + 0x11;
                        *(byte *)(iVar8 + 0x50) = R6;
                        Y = Y + -0x11;
                      }
                    }
                    else {
                      R25R24R23R22R21R20R19R18._6_1_ = *(byte *)(Y + 0x3e);
                      R25R24R23R22R21R20R19R18._7_1_ = *(byte *)(Y + 0x3f);
                      R25R24R23R22R21R20R19R18._7_1_ = R25R24R23R22R21R20R19R18._7_1_ >> 2;
                      bVar23 = R25R24R23R22R21R20R19R18._6_1_ >> 2;
                      R25R24R23R22R21R20R19R18._0_7_ =
                           CONCAT16(bVar23,(uint6)R25R24R23R22R21R20R19R18);
                      R25R24R23R22R21R20R19R18._0_4_ = (ulong)uVar19;
                      R25R24R23R22R21R20R19R18._0_5_ =
                           CONCAT14(bVar23,(ulong)R25R24R23R22R21R20R19R18);
                      R25R24R23R22R21R20R19R18 =
                           CONCAT35(R25R24R23R22R21R20R19R18._5_3_,(uint5)R25R24R23R22R21R20R19R18)
                           & 0xffffff01ffffffff;
                      R25R24R23R22R21R20R19R18._6_1_ = *(undefined1 *)(Y + 0x47);
                      Y = Y + -10;
                      *(undefined3 *)(iVar22 + -2) = 0xd5e;
                      FUN_code_0008d1((char *)R25R24R23R22R21R20R19R18._6_2_,
                                      R25R24R23R22R21R20R19R18._4_2_,R25R24R23R22R21R20R19R18._2_2_)
                      ;
                      R25R24R23R22R21R20R19R18 = (ulonglong)(uint6)R25R24R23R22R21R20R19R18;
                    }
                    iVar8 = Y;
                    uVar20 = R25R24R23R22R21R20R19R18;
                    uVar14 = (uint6)R25R24R23R22R21R20R19R18;
                    R25R24R23R22R21R20R19R18._6_1_ = *(undefined1 *)(Y + 0x48);
                    R25R24R23R22R21R20R19R18._7_1_ = *(undefined1 *)(Y + 0x49);
                    uVar6 = (uint)R25R24R23R22R21R20R19R18._6_2_;
                    R25R24R23R22R21R20R19R18 = uVar20 & 0xffffffffffff;
                    if (uVar6 < 0x38) {
                      Y = Y + 6;
                      *(byte *)(iVar8 + 0x45) = R6;
                      Y = Y + -6;
                    }
                    else {
                      R25R24R23R22R21R20R19R18 = CONCAT17(1,(uint7)uVar14);
                      Y = Y + 0x11;
                      *(undefined1 *)(iVar8 + 0x50) = 1;
                      iVar8 = Y;
                      Y = Y + -7;
                      *(byte *)(iVar8 + 0x38) = R1R0._1_1_;
                      *(byte *)(Y + 0x3e) = R1R0._1_1_;
                      iVar8 = Y;
                      Z = (byte *)CONCAT11(Z._1_1_,1);
                      Y = Y + 4;
                      *(undefined1 *)(iVar8 + 0x43) = 1;
                      iVar8 = Y;
                      Y = Y + -8;
                      *(byte *)(iVar8 + 0x37) = R6;
                      Y = Y + -6;
                    }
                  }
                  else {
                    Y = Y + -4;
                    *(byte *)(iVar8 + 0x3b) = R6;
                    Y = Y + -6;
                  }
                }
              }
            }
          }
        }
      }
      else {
        Y = Y + 0x12;
        *(byte *)(iVar8 + 0x51) = R6;
        iVar8 = Y;
        Y = Y + -10;
        *(byte *)(iVar8 + 0x35) = R1R0._1_1_;
        iVar8 = Y;
        Z = (byte *)0x1;
        Y = Y + 2;
        *(undefined1 *)(iVar8 + 0x41) = 0;
        *(byte *)(Y + 0x3e) = (byte)Z;
        bVar24 = false;
LAB_code_000c94:
        Y = Y + -10;
        if (!bVar24) {
          *(undefined3 *)(iVar22 + -2) = 0xc96;
          R25R24R23R22R21R20R19R18._6_2_ = FUN_code_00065b(R25R24R23R22R21R20R19R18._6_2_);
          R25R24R23R22R21R20R19R18 =
               CONCAT26(R25R24R23R22R21R20R19R18._6_2_,(uint6)R25R24R23R22R21R20R19R18);
        }
        *(undefined3 *)(iVar22 + -2) = 0xc98;
        iVar8 = Y;
        FUN_code_000696(R25R24R23R22R21R20R19R18._6_2_,R25R24R23R22R21R20R19R18._4_2_,
                        R25R24R23R22R21R20R19R18._2_2_,(undefined1 *)R25R24R23R22R21R20R19R18,R17R16
                        ,R15R14,R13R12,R11R10,R9R8);
        uVar9 = (uint5)((uint6)R25R24R23R22R21R20R19R18 >> 0x10);
        uVar11 = *(undefined2 *)(Y + 0x48);
        R25R24R23R22R21R20R19R18._0_1_ = (byte)uVar11;
        R25R24R23R22R21R20R19R18._1_1_ = (byte)((uint)uVar11 >> 8);
        if (R25R24R23R22R21R20R19R18._1_1_ < R1R0._1_1_ ||
            (byte)(R25R24R23R22R21R20R19R18._1_1_ - R1R0._1_1_) <
            ((byte)R25R24R23R22R21R20R19R18 < 0x1c)) {
          Y = Y + 0x11;
          R25R24R23R22R21R20R19R18 = (ulonglong)CONCAT52(uVar9,uVar11);
          *(byte *)(iVar8 + 0x50) = R6;
          iVar8 = Y;
          Y = Y + -3;
          *(byte *)(iVar8 + 0x3c) = R6;
          iVar8 = Y;
          Y = Y + -8;
          *(byte *)(iVar8 + 0x37) = R6;
          Y = Y + -6;
        }
        else {
          R25R24R23R22R21R20R19R18._2_6_ = (uint6)uVar9;
          R25R24R23R22R21R20R19R18 = CONCAT62(R25R24R23R22R21R20R19R18._2_6_,0x100);
          Y = Y + 0x11;
          *(undefined1 *)(iVar8 + 0x50) = 1;
          iVar8 = Y;
          Y = Y + -7;
          *(byte *)(iVar8 + 0x38) = R1R0._1_1_;
          *(byte *)(Y + 0x3e) = R1R0._1_1_;
          iVar8 = Y;
          R25R24R23R22R21R20R19R18._0_4_ = CONCAT13(1,(undefined3)R25R24R23R22R21R20R19R18);
          Y = Y + 4;
          *(undefined1 *)(iVar8 + 0x43) = 1;
          iVar8 = Y;
          Y = Y + -8;
          *(byte *)(iVar8 + 0x37) = R6;
          Y = Y + -6;
        }
      }
    }
    else {
      R17R16 = (byte *)CONCAT11(bVar23,(byte)R17R16);
      R25R24R23R22R21R20R19R18 = CONCAT71(R25R24R23R22R21R20R19R18._1_7_,1);
      if ((R15R14._1_1_ == '\x01') && (R13R12._1_1_ == R1R0._1_1_)) {
        R25R24R23R22R21R20R19R18._2_6_ = SUB86(uVar20,2);
        R25R24R23R22R21R20R19R18._1_1_ = *(char *)(uVar6 + 0x40);
        R25R24R23R22R21R20R19R18._0_2_ = (undefined1 *)CONCAT11(R25R24R23R22R21R20R19R18._1_1_,1);
        Y = uVar6 - 5;
        if (R25R24R23R22R21R20R19R18._1_1_ != '\x02') goto LAB_code_000a3e;
        *(undefined3 *)(iVar22 + -2) = 0xa4d;
        iVar8 = Y;
        R25R24R23R22R21R20R19R18._6_2_ = FUN_code_00065b(R25R24R23R22R21R20R19R18._6_2_);
        R25R24R23R22R21R20R19R18 =
             CONCAT26(R25R24R23R22R21R20R19R18._6_2_,(uint6)R25R24R23R22R21R20R19R18);
        R25R24R23R22R21R20R19R18 = CONCAT17(1,(uint7)R25R24R23R22R21R20R19R18);
        Y = Y + 0x11;
        *(undefined1 *)(iVar8 + 0x50) = 1;
        iVar8 = Y;
        Y = Y + -7;
        *(byte *)(iVar8 + 0x38) = R1R0._1_1_;
        *(byte *)(Y + 0x3e) = R1R0._1_1_;
        iVar8 = Y;
        Y = Y + 4;
        *(byte *)(iVar8 + 0x43) = R6;
        iVar8 = Y;
        Y = Y + -8;
        *(byte *)(iVar8 + 0x37) = R6;
LAB_code_000a5b:
        Y = Y + -6;
        Z = (byte *)0x387f;
        R25R24R23R22R21R20R19R18 = CONCAT71(R25R24R23R22R21R20R19R18._1_7_,1);
        do {
          cVar1 = (byte)Z + -1;
          cVar2 = Z._1_1_ - ((byte)Z == '\0');
          bVar24 = Z._1_1_ < ((byte)Z == '\0');
          Z = (byte *)CONCAT11(cVar2,cVar1);
          cVar4 = (byte)R25R24R23R22R21R20R19R18 - bVar24;
          R25R24R23R22R21R20R19R18 = CONCAT71(R25R24R23R22R21R20R19R18._1_7_,cVar4);
        } while ((cVar1 != '\0' || cVar2 != '\0') || cVar4 != '\0');
      }
LAB_code_000a64:
      iVar8 = Y;
      uVar19 = R25R24R23R22R21R20R19R18;
      R25R24R23R22R21R20R19R18._1_1_ = *(char *)(Y + 0x45);
      bVar24 = R25R24R23R22R21R20R19R18._1_1_ == '\x02';
      R25R24R23R22R21R20R19R18._4_4_ = SUB84(uVar19,4);
      if (bVar24) {
        R25R24R23R22R21R20R19R18._3_1_ = *(char *)(Y + 0x46);
        uVar16 = R25R24R23R22R21R20R19R18;
        if ((R25R24R23R22R21R20R19R18._3_1_ == '\x01') && ((byte)R17R16 == R1R0._1_1_)) {
          R25R24R23R22R21R20R19R18._7_1_ = SUB81(uVar19,7);
          R25R24R23R22R21R20R19R18._0_6_ = (uint6)uVar16;
          R25R24R23R22R21R20R19R18._6_1_ = *(byte *)(Y + 0x52);
          if (R25R24R23R22R21R20R19R18._6_1_ < 4) {
            cVar1 = R25R24R23R22R21R20R19R18._6_1_ + 1;
            R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(cVar1,(uint6)R25R24R23R22R21R20R19R18);
            Y = Y + 0x13;
            *(char *)(iVar8 + 0x52) = cVar1;
            iVar8 = Y;
          }
          else {
            Y = Y + 0x13;
            *(byte *)(iVar8 + 0x52) = R1R0._1_1_;
            iVar8 = Y;
          }
          uVar19 = R25R24R23R22R21R20R19R18;
          Y = iVar8 + -0x13;
          R25R24R23R22R21R20R19R18._4_1_ = *(undefined1 *)(iVar8 + 0x34);
          uVar16 = R25R24R23R22R21R20R19R18;
          R25R24R23R22R21R20R19R18._7_1_ = SUB81(uVar19,7);
          R25R24R23R22R21R20R19R18._0_6_ = (uint6)uVar16;
          R25R24R23R22R21R20R19R18._6_1_ = *(undefined1 *)(iVar8 + 0x3f);
          *(undefined3 *)(iVar22 + -2) = 0xa86;
          R25R24R23R22R21R20R19R18._6_2_ =
               (byte *)FUN_code_00083c((char *)R25R24R23R22R21R20R19R18._6_2_,
                                       R25R24R23R22R21R20R19R18._4_2_,R25R24R23R22R21R20R19R18._2_2_
                                      );
          R25R24R23R22R21R20R19R18 =
               CONCAT26(R25R24R23R22R21R20R19R18._6_2_,(uint6)R25R24R23R22R21R20R19R18);
          R25R24R23R22R21R20R19R18 = CONCAT17(0x7f,(uint7)R25R24R23R22R21R20R19R18);
          Z = (byte *)0x138;
          do {
            cVar1 = R25R24R23R22R21R20R19R18._7_1_ + -1;
            bVar24 = R25R24R23R22R21R20R19R18._7_1_ == '\0';
            R25R24R23R22R21R20R19R18 = CONCAT17(cVar1,(uint7)R25R24R23R22R21R20R19R18);
            cVar2 = (byte)Z - bVar24;
            cVar4 = Z._1_1_ - ((byte)Z < bVar24);
            Z = (byte *)CONCAT11(cVar4,cVar2);
          } while ((cVar1 != '\0' || cVar2 != '\0') || cVar4 != '\0');
        }
        iVar8 = Y;
        uVar19 = R25R24R23R22R21R20R19R18;
        R25R24R23R22R21R20R19R18 = CONCAT71(R25R24R23R22R21R20R19R18._1_7_,1);
        if ((R4 == '\x01') && (-1 < (int)R17R16)) {
          R25R24R23R22R21R20R19R18._2_6_ = SUB86(uVar19,2);
          R25R24R23R22R21R20R19R18._1_1_ = *(char *)(Y + 0x52);
          R25R24R23R22R21R20R19R18._0_2_ = (undefined1 *)CONCAT11(R25R24R23R22R21R20R19R18._1_1_,1);
          uVar16 = R25R24R23R22R21R20R19R18;
          if (R25R24R23R22R21R20R19R18._1_1_ == '\0') {
            R25R24R23R22R21R20R19R18._4_4_ = SUB84(uVar19,4);
            R25R24R23R22R21R20R19R18._0_3_ = (undefined3)uVar16;
            R25R24R23R22R21R20R19R18._0_4_ = CONCAT13(4,(undefined3)R25R24R23R22R21R20R19R18);
            Y = Y + 0x13;
            *(undefined1 *)(iVar8 + 0x52) = 4;
            iVar8 = Y;
          }
          else {
            cVar1 = R25R24R23R22R21R20R19R18._1_1_ + -1;
            R25R24R23R22R21R20R19R18._0_2_ = (undefined1 *)CONCAT11(cVar1,1);
            Y = Y + 0x13;
            *(char *)(iVar8 + 0x52) = cVar1;
            iVar8 = Y;
          }
          uVar19 = R25R24R23R22R21R20R19R18;
          Y = iVar8 + -0x13;
          R25R24R23R22R21R20R19R18._4_1_ = *(undefined1 *)(iVar8 + 0x34);
          uVar16 = R25R24R23R22R21R20R19R18;
          R25R24R23R22R21R20R19R18._7_1_ = SUB81(uVar19,7);
          R25R24R23R22R21R20R19R18._0_6_ = (uint6)uVar16;
          R25R24R23R22R21R20R19R18._6_1_ = *(undefined1 *)(iVar8 + 0x3f);
          *(undefined3 *)(iVar22 + -2) = 0xaaa;
          FUN_code_00083c((char *)R25R24R23R22R21R20R19R18._6_2_,R25R24R23R22R21R20R19R18._4_2_,
                          R25R24R23R22R21R20R19R18._2_2_);
          R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(0x7f,(uint6)R25R24R23R22R21R20R19R18);
          R25R24R23R22R21R20R19R18 = CONCAT17(0x38,(uint7)R25R24R23R22R21R20R19R18);
          Z = (byte *)0x1;
          do {
            cVar1 = R25R24R23R22R21R20R19R18._6_1_ + -1;
            bVar24 = R25R24R23R22R21R20R19R18._6_1_ == '\0';
            R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(cVar1,(uint6)R25R24R23R22R21R20R19R18);
            cVar2 = R25R24R23R22R21R20R19R18._7_1_ - bVar24;
            bVar24 = R25R24R23R22R21R20R19R18._7_1_ < bVar24;
            R25R24R23R22R21R20R19R18 = CONCAT17(cVar2,(uint7)R25R24R23R22R21R20R19R18);
            bVar23 = (byte)Z - bVar24;
            Z = (byte *)(uint)bVar23;
          } while ((cVar1 != '\0' || cVar2 != '\0') || bVar23 != 0);
        }
        iVar8 = Y;
        uVar20 = R25R24R23R22R21R20R19R18;
        Z = (byte *)CONCAT11(1,(byte)Z);
        if (((char)R15R14 == '\x01') && ((byte)R13R12 == R1R0._1_1_)) {
          R25R24R23R22R21R20R19R18._0_1_ = *(byte *)(Y + 0x52);
          uVar19 = R25R24R23R22R21R20R19R18;
          if ((byte)R25R24R23R22R21R20R19R18 == R1R0._1_1_) {
            R25R24R23R22R21R20R19R18._2_6_ = SUB86(uVar20,2);
            R25R24R23R22R21R20R19R18._1_1_ = *(byte *)(Y + 0x47);
            bVar23 = R25R24R23R22R21R20R19R18._1_1_ & 1;
joined_c0x000ac1:
            if (bVar23 == 0) goto LAB_code_000afd;
LAB_code_000ae5:
            R25R24R23R22R21R20R19R18._1_1_ = *(char *)(Y + 0x52);
            cVar1 = R25R24R23R22R21R20R19R18._1_1_ + '\x01';
            R25R24R23R22R21R20R19R18._0_2_ =
                 (undefined1 *)CONCAT11(cVar1,(byte)R25R24R23R22R21R20R19R18);
            Y = Y + 2;
            *(char *)(iVar8 + 0x41) = cVar1;
            Y = Y + -2;
            *(undefined3 *)(iVar22 + -2) = 0xaee;
            iVar8 = Y;
            FUN_code_00065b(R25R24R23R22R21R20R19R18._6_2_);
            uVar13 = (uint6)R25R24R23R22R21R20R19R18;
            R25R24R23R22R21R20R19R18._0_3_ = (undefined3)uVar13;
            R25R24R23R22R21R20R19R18._0_4_ = CONCAT13(1,(undefined3)R25R24R23R22R21R20R19R18);
            R25R24R23R22R21R20R19R18 =
                 (ulonglong)CONCAT24((int)((uint6)uVar13 >> 0x20),(ulong)R25R24R23R22R21R20R19R18);
            Y = Y + 0x11;
            *(undefined1 *)(iVar8 + 0x50) = 1;
            iVar8 = Y;
            Y = Y + -7;
            *(byte *)(iVar8 + 0x38) = R1R0._1_1_;
            *(byte *)(Y + 0x3e) = R1R0._1_1_;
            iVar8 = Y;
            Y = Y + 4;
            *(byte *)(iVar8 + 0x43) = R6;
            iVar8 = Y;
            Y = Y + -8;
            *(byte *)(iVar8 + 0x37) = R6;
            Y = Y + -6;
          }
          else {
            R25R24R23R22R21R20R19R18._4_4_ = SUB84(uVar20,4);
            R25R24R23R22R21R20R19R18._0_3_ = (undefined3)uVar19;
            R25R24R23R22R21R20R19R18._3_1_ = *(char *)(Y + 0x52);
            uVar19 = R25R24R23R22R21R20R19R18;
            if (R25R24R23R22R21R20R19R18._3_1_ == '\x01') {
              R25R24R23R22R21R20R19R18._7_1_ = SUB81(uVar20,7);
              R25R24R23R22R21R20R19R18._0_6_ = (uint6)uVar19;
              R25R24R23R22R21R20R19R18._6_1_ = *(byte *)(Y + 0x47);
              bVar23 = R25R24R23R22R21R20R19R18._6_1_ & 2;
              goto joined_c0x000ac1;
            }
            R25R24R23R22R21R20R19R18._7_1_ = *(char *)(Y + 0x52);
            if (R25R24R23R22R21R20R19R18._7_1_ == '\x02') {
              Z._0_1_ = *(byte *)(Y + 0x47);
              Z = (byte *)CONCAT11(1,(byte)Z);
              bVar23 = (byte)Z & 4;
              goto joined_c0x000ac1;
            }
            Z._1_1_ = *(char *)(Y + 0x52);
            if (Z._1_1_ == '\x03') goto LAB_code_000ae5;
            if (Z._1_1_ == '\x04') {
              R25R24R23R22R21R20R19R18._0_1_ = *(byte *)(Y + 0x47);
              if (((byte)R25R24R23R22R21R20R19R18 & 8) != 0) goto LAB_code_000ae5;
            }
LAB_code_000afd:
            R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(6,(uint6)R25R24R23R22R21R20R19R18);
            *(undefined3 *)(iVar22 + -2) = 0xb00;
            FUN_code_000561(R25R24R23R22R21R20R19R18._6_1_);
            R25R24R23R22R21R20R19R18._0_5_ = CONCAT14(0x26,(ulong)R25R24R23R22R21R20R19R18);
            R25R24R23R22R21R20R19R18._0_6_ = CONCAT15(1,(uint5)R25R24R23R22R21R20R19R18);
            R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(6,(uint6)R25R24R23R22R21R20R19R18);
            R25R24R23R22R21R20R19R18 =
                 CONCAT17(R25R24R23R22R21R20R19R18._7_1_,(uint7)R25R24R23R22R21R20R19R18);
            *(undefined3 *)(iVar22 + -2) = 0xb05;
            FUN_code_0005c9(R25R24R23R22R21R20R19R18._6_2_,R25R24R23R22R21R20R19R18._4_2_,
                            R25R24R23R22R21R20R19R18._2_2_);
            R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(0xff,(uint6)R25R24R23R22R21R20R19R18);
            R25R24R23R22R21R20R19R18 = CONCAT17(0x87,(uint7)R25R24R23R22R21R20R19R18);
            Z = (byte *)CONCAT11(Z._1_1_,0x13);
            do {
              uVar19 = R25R24R23R22R21R20R19R18;
              cVar1 = R25R24R23R22R21R20R19R18._6_1_ + -1;
              bVar24 = R25R24R23R22R21R20R19R18._6_1_ == '\0';
              R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(cVar1,(uint6)R25R24R23R22R21R20R19R18);
              cVar2 = R25R24R23R22R21R20R19R18._7_1_ - bVar24;
              bVar24 = R25R24R23R22R21R20R19R18._7_1_ < bVar24;
              R25R24R23R22R21R20R19R18 = CONCAT17(cVar2,(uint7)R25R24R23R22R21R20R19R18);
              cVar4 = (byte)Z - bVar24;
              Z = (byte *)CONCAT11(Z._1_1_,cVar4);
            } while ((cVar1 != '\0' || cVar2 != '\0') || cVar4 != '\0');
            R25R24R23R22R21R20R19R18._0_4_ = (ulong)uVar19;
            R25R24R23R22R21R20R19R18._4_1_ = *(undefined1 *)(Y + 0x47);
            R25R24R23R22R21R20R19R18._6_1_ = *(undefined1 *)(Y + 0x52);
            R25R24R23R22R21R20R19R18 = CONCAT17(cVar2,(uint7)R25R24R23R22R21R20R19R18);
            *(undefined3 *)(iVar22 + -2) = 0xb16;
            FUN_code_00083c((char *)R25R24R23R22R21R20R19R18._6_2_,R25R24R23R22R21R20R19R18._4_2_,
                            R25R24R23R22R21R20R19R18._2_2_);
            R25R24R23R22R21R20R19R18 = (ulonglong)(uint6)R25R24R23R22R21R20R19R18;
          }
          Z = (byte *)CONCAT11(0x7f,(byte)Z);
          R25R24R23R22R21R20R19R18 = CONCAT62(R25R24R23R22R21R20R19R18._2_6_,0x138);
          do {
            cVar1 = Z._1_1_ + -1;
            bVar24 = Z._1_1_ == '\0';
            Z = (byte *)CONCAT11(cVar1,(byte)Z);
            cVar2 = (byte)R25R24R23R22R21R20R19R18 - bVar24;
            cVar4 = R25R24R23R22R21R20R19R18._1_1_ - ((byte)R25R24R23R22R21R20R19R18 < bVar24);
            R25R24R23R22R21R20R19R18._0_2_ = (undefined1 *)CONCAT11(cVar4,cVar2);
          } while ((cVar1 != '\0' || cVar2 != '\0') || cVar4 != '\0');
        }
      }
      else {
        R25R24R23R22R21R20R19R18._3_1_ = *(char *)(Y + 0x45);
        if (R25R24R23R22R21R20R19R18._3_1_ == '\x01') {
          uVar13 = (uint6)R25R24R23R22R21R20R19R18;
          R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(1,(uint6)R25R24R23R22R21R20R19R18);
          uVar10 = (uint7)R25R24R23R22R21R20R19R18;
          R25R24R23R22R21R20R19R18 = (ulonglong)(uint7)R25R24R23R22R21R20R19R18;
          if (((char)R15R14 == '\x01') && ((byte)R13R12 == R1R0._1_1_)) {
            R25R24R23R22R21R20R19R18._7_1_ = *(byte *)(Y + 0x51);
            bVar23 = R25R24R23R22R21R20R19R18._7_1_;
            R25R24R23R22R21R20R19R18 = CONCAT17(R25R24R23R22R21R20R19R18._7_1_,uVar10);
            if ((R25R24R23R22R21R20R19R18._7_1_ < 5) &&
               (Z._0_1_ = *(char *)(Y + 0x53), (byte)Z == '\b')) {
              Z._1_1_ = *(char *)(Y + 0x54);
              Z = (byte *)CONCAT11(Z._1_1_,8);
              if (Z._1_1_ == -0x15) {
                R25R24R23R22R21R20R19R18 = CONCAT71(R25R24R23R22R21R20R19R18._1_7_,R6);
              }
              else if (Z._1_1_ == -0x59) {
                R25R24R23R22R21R20R19R18 = CONCAT71(R25R24R23R22R21R20R19R18._1_7_,1);
              }
              else if (Z._1_1_ == 'V') {
                R25R24R23R22R21R20R19R18 = CONCAT71(R25R24R23R22R21R20R19R18._1_7_,2);
              }
              else if (Z._1_1_ == -0x37) {
                R25R24R23R22R21R20R19R18 = CONCAT71(R25R24R23R22R21R20R19R18._1_7_,3);
              }
              else {
                if (Z._1_1_ != '+') {
                  R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(4,uVar13);
                  R25R24R23R22R21R20R19R18 = CONCAT17(bVar23,(uint7)R25R24R23R22R21R20R19R18);
                  *(undefined3 *)(iVar22 + -2) = 0xbaf;
                  FUN_code_000561(R25R24R23R22R21R20R19R18._6_1_);
                  R25R24R23R22R21R20R19R18._0_5_ = CONCAT14(0x53,(ulong)R25R24R23R22R21R20R19R18);
                  R25R24R23R22R21R20R19R18._0_6_ = CONCAT15(1,(uint5)R25R24R23R22R21R20R19R18);
                  R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(4,(uint6)R25R24R23R22R21R20R19R18);
                  R25R24R23R22R21R20R19R18 =
                       CONCAT17(R25R24R23R22R21R20R19R18._7_1_,(uint7)R25R24R23R22R21R20R19R18);
                  *(undefined3 *)(iVar22 + -2) = 0xbb4;
                  FUN_code_0005c9(R25R24R23R22R21R20R19R18._6_2_,R25R24R23R22R21R20R19R18._4_2_,
                                  R25R24R23R22R21R20R19R18._2_2_);
                  uVar13 = (uint6)R25R24R23R22R21R20R19R18;
                  R25R24R23R22R21R20R19R18._0_3_ = (undefined3)uVar13;
                  R25R24R23R22R21R20R19R18._0_4_ =
                       CONCAT13(0xff,(undefined3)R25R24R23R22R21R20R19R18);
                  R25R24R23R22R21R20R19R18._0_7_ =
                       CONCAT16(0x9e,CONCAT24((int)((uint6)uVar13 >> 0x20),
                                              (ulong)R25R24R23R22R21R20R19R18));
                  R25R24R23R22R21R20R19R18 = CONCAT17(0x24,(uint7)R25R24R23R22R21R20R19R18);
                  do {
                    uVar16 = R25R24R23R22R21R20R19R18;
                    cVar1 = R25R24R23R22R21R20R19R18._3_1_ + -1;
                    bVar24 = R25R24R23R22R21R20R19R18._3_1_ == '\0';
                    R25R24R23R22R21R20R19R18._0_4_ =
                         CONCAT13(cVar1,(undefined3)R25R24R23R22R21R20R19R18);
                    uVar19 = R25R24R23R22R21R20R19R18;
                    R25R24R23R22R21R20R19R18._6_1_ = SUB81(uVar16,6);
                    cVar2 = R25R24R23R22R21R20R19R18._6_1_ - bVar24;
                    bVar24 = R25R24R23R22R21R20R19R18._6_1_ < bVar24;
                    R25R24R23R22R21R20R19R18._7_1_ = SUB81(uVar16,7);
                    R25R24R23R22R21R20R19R18._0_6_ = (uint6)uVar19;
                    R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(cVar2,(uint6)R25R24R23R22R21R20R19R18)
                    ;
                    cVar4 = R25R24R23R22R21R20R19R18._7_1_ - bVar24;
                    R25R24R23R22R21R20R19R18 = CONCAT17(cVar4,(uint7)R25R24R23R22R21R20R19R18);
                  } while ((cVar1 != '\0' || cVar2 != '\0') || cVar4 != '\0');
                  R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(4,(uint6)R25R24R23R22R21R20R19R18);
                  R25R24R23R22R21R20R19R18 = CONCAT17(cVar4,(uint7)R25R24R23R22R21R20R19R18);
                  *(undefined3 *)(iVar22 + -2) = 0xbc0;
                  FUN_code_000561(R25R24R23R22R21R20R19R18._6_1_);
                  R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(2,(uint6)R25R24R23R22R21R20R19R18);
                  R25R24R23R22R21R20R19R18 =
                       CONCAT17(R25R24R23R22R21R20R19R18._7_1_,(uint7)R25R24R23R22R21R20R19R18);
                  *(undefined3 *)(iVar22 + -2) = 0xbc3;
                  FUN_code_000561(R25R24R23R22R21R20R19R18._6_1_);
                  R25R24R23R22R21R20R19R18._0_5_ = CONCAT14(0x7d,(ulong)R25R24R23R22R21R20R19R18);
                  R25R24R23R22R21R20R19R18._0_6_ = (uint6)(uint5)R25R24R23R22R21R20R19R18;
                  R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(2,(uint6)R25R24R23R22R21R20R19R18);
                  R25R24R23R22R21R20R19R18 =
                       CONCAT17(R25R24R23R22R21R20R19R18._7_1_,(uint7)R25R24R23R22R21R20R19R18);
                  *(undefined3 *)(iVar22 + -2) = 0xbc8;
                  iVar8 = Y;
                  FUN_code_0005c9(R25R24R23R22R21R20R19R18._6_2_,R25R24R23R22R21R20R19R18._4_2_,
                                  R25R24R23R22R21R20R19R18._2_2_);
                  R25R24R23R22R21R20R19R18 = (ulonglong)(uint6)R25R24R23R22R21R20R19R18;
                  Y = Y + 0x14;
                  *(byte *)(iVar8 + 0x53) = R6;
                  iVar8 = Y;
                  Y = Y + 1;
                  *(byte *)(iVar8 + 0x40) = R6;
                  Y = Y + -0x15;
                  goto LAB_code_000bce;
                }
                R25R24R23R22R21R20R19R18 = CONCAT71(R25R24R23R22R21R20R19R18._1_7_,4);
              }
              R1R0._0_1_ = (byte)R25R24R23R22R21R20R19R18;
              R25R24R23R22R21R20R19R18._1_1_ = *(undefined1 *)(Y + 0x47);
              uVar7 = R25R24R23R22R21R20R19R18._1_1_;
              R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(uVar7,(uint6)R25R24R23R22R21R20R19R18);
              while( true ) {
                R1R0._0_1_ = (byte)R1R0 - 1;
                if ((char)(byte)R1R0 < '\0') break;
                R25R24R23R22R21R20R19R18._0_7_ =
                     CONCAT16((byte)((uint7)R25R24R23R22R21R20R19R18 >> 0x31),
                              (uint6)R25R24R23R22R21R20R19R18);
              }
              if (((uint7)R25R24R23R22R21R20R19R18 & 0x1000000000000) == 0) {
                R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(1,(uint6)R25R24R23R22R21R20R19R18);
                R25R24R23R22R21R20R19R18 = (ulonglong)(uint7)R25R24R23R22R21R20R19R18;
                while( true ) {
                  uVar20 = R25R24R23R22R21R20R19R18;
                  R25R24R23R22R21R20R19R18._0_1_ = (byte)R25R24R23R22R21R20R19R18 + -1;
                  uVar19 = R25R24R23R22R21R20R19R18;
                  R25R24R23R22R21R20R19R18._6_1_ = SUB81(uVar20,6);
                  if ((char)(byte)R25R24R23R22R21R20R19R18 < '\0') break;
                  bVar24 = CARRY1(R25R24R23R22R21R20R19R18._6_1_,R25R24R23R22R21R20R19R18._6_1_);
                  R25R24R23R22R21R20R19R18._7_1_ = SUB81(uVar20,7);
                  R25R24R23R22R21R20R19R18._0_6_ = (uint6)uVar19;
                  R25R24R23R22R21R20R19R18._0_7_ =
                       CONCAT16(R25R24R23R22R21R20R19R18._6_1_ * '\x02',
                                (uint6)R25R24R23R22R21R20R19R18);
                  R25R24R23R22R21R20R19R18 =
                       CONCAT17(R25R24R23R22R21R20R19R18._7_1_ * '\x02' + bVar24,
                                (uint7)R25R24R23R22R21R20R19R18);
                }
                Z._0_1_ = *(byte *)(Y + 0x47);
                Z._0_1_ = (byte)Z | R25R24R23R22R21R20R19R18._6_1_;
                Y = Y + 8;
                R25R24R23R22R21R20R19R18 = uVar19;
                *(byte *)(iVar8 + 0x47) = (byte)Z;
                Y = Y + -8;
                R25R24R23R22R21R20R19R18._0_7_ = CONCAT16((byte)Z,(uint6)R25R24R23R22R21R20R19R18);
                *(undefined3 *)(iVar22 + -2) = 0xb85;
                iVar8 = Y;
                R25R24R23R22R21R20R19R18._0_7_ = FUN_code_000806(R25R24R23R22R21R20R19R18._6_1_);
                uVar10 = (uint7)R25R24R23R22R21R20R19R18;
                R25R24R23R22R21R20R19R18 = (ulonglong)(uint7)R25R24R23R22R21R20R19R18;
                uVar20 = R25R24R23R22R21R20R19R18;
                Y = Y + 0x12;
                R25R24R23R22R21R20R19R18._6_1_ = SUB71(uVar10,6);
                *(byte *)(iVar8 + 0x51) = R25R24R23R22R21R20R19R18._6_1_;
                R25R24R23R22R21R20R19R18 = uVar20;
                R25R24R23R22R21R20R19R18._4_1_ = *(undefined1 *)(Y + 0x35);
                Y = Y + -0x12;
                R25R24R23R22R21R20R19R18._0_7_ = (uint7)R25R24R23R22R21R20R19R18 & 0xffffffffffff;
                R25R24R23R22R21R20R19R18 = (ulonglong)(uint7)R25R24R23R22R21R20R19R18;
                *(undefined3 *)(iVar22 + -2) = 0xb8f;
                R25R24R23R22R21R20R19R18._6_2_ =
                     (byte *)FUN_code_001008((int)R25R24R23R22R21R20R19R18._6_2_,
                                             R25R24R23R22R21R20R19R18._4_1_);
                R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(4,(uint6)R25R24R23R22R21R20R19R18);
                *(undefined3 *)(iVar22 + -2) = 0xb92;
                FUN_code_000561(R25R24R23R22R21R20R19R18._6_1_);
                R25R24R23R22R21R20R19R18._0_5_ = CONCAT14(0x45,(ulong)R25R24R23R22R21R20R19R18);
                R25R24R23R22R21R20R19R18._0_6_ = CONCAT15(1,(uint5)R25R24R23R22R21R20R19R18);
                R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(4,(uint6)R25R24R23R22R21R20R19R18);
                R25R24R23R22R21R20R19R18 =
                     CONCAT17(R25R24R23R22R21R20R19R18._7_1_,(uint7)R25R24R23R22R21R20R19R18);
                *(undefined3 *)(iVar22 + -2) = 0xb97;
                R25R24R23R22R21R20R19R18._6_2_ =
                     (byte *)FUN_code_0005c9(R25R24R23R22R21R20R19R18._6_2_,
                                             R25R24R23R22R21R20R19R18._4_2_,
                                             R25R24R23R22R21R20R19R18._2_2_);
                R25R24R23R22R21R20R19R18 =
                     CONCAT26(R25R24R23R22R21R20R19R18._6_2_,(uint6)R25R24R23R22R21R20R19R18);
                Z._1_1_ = -1;
                R25R24R23R22R21R20R19R18 = CONCAT62(R25R24R23R22R21R20R19R18._2_6_,0x249e);
                do {
                  uVar19 = R25R24R23R22R21R20R19R18;
                  cVar1 = Z._1_1_ + -1;
                  cVar2 = (byte)R25R24R23R22R21R20R19R18 - (Z._1_1_ == '\0');
                  cVar4 = R25R24R23R22R21R20R19R18._1_1_ -
                          ((byte)R25R24R23R22R21R20R19R18 < (Z._1_1_ == '\0'));
                  R25R24R23R22R21R20R19R18._0_2_ = (undefined1 *)CONCAT11(cVar4,cVar2);
                  uVar16 = R25R24R23R22R21R20R19R18;
                  Z._1_1_ = cVar1;
                } while ((cVar1 != '\0' || cVar2 != '\0') || cVar4 != '\0');
                R25R24R23R22R21R20R19R18._7_1_ = SUB81(uVar19,7);
                R25R24R23R22R21R20R19R18._0_6_ = (uint6)uVar16;
                R25R24R23R22R21R20R19R18._6_1_ = *(undefined1 *)(Y + 0x51);
                *(undefined3 *)(iVar22 + -2) = 0xba5;
                iVar8 = Y;
                FUN_code_00081a((char *)R25R24R23R22R21R20R19R18._6_2_,
                                R25R24R23R22R21R20R19R18._4_2_,R25R24R23R22R21R20R19R18._2_2_);
                R25R24R23R22R21R20R19R18 = (ulonglong)(uint6)R25R24R23R22R21R20R19R18;
                Y = Y + 0x14;
                *(byte *)(iVar8 + 0x53) = R6;
                iVar8 = Y;
                Y = Y + 1;
                *(byte *)(iVar8 + 0x40) = R6;
                Y = Y + -0x15;
              }
              else {
                R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(4,(uint6)R25R24R23R22R21R20R19R18);
                R25R24R23R22R21R20R19R18 = (ulonglong)(uint7)R25R24R23R22R21R20R19R18;
                *(undefined3 *)(iVar22 + -2) = 0xb5a;
                FUN_code_000561(R25R24R23R22R21R20R19R18._6_1_);
                R25R24R23R22R21R20R19R18._0_5_ = CONCAT14(0x35,(ulong)R25R24R23R22R21R20R19R18);
                R25R24R23R22R21R20R19R18._0_6_ = CONCAT15(1,(uint5)R25R24R23R22R21R20R19R18);
                R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(4,(uint6)R25R24R23R22R21R20R19R18);
                R25R24R23R22R21R20R19R18 =
                     CONCAT17(R25R24R23R22R21R20R19R18._7_1_,(uint7)R25R24R23R22R21R20R19R18);
                *(undefined3 *)(iVar22 + -2) = 0xb5f;
                FUN_code_0005c9(R25R24R23R22R21R20R19R18._6_2_,R25R24R23R22R21R20R19R18._4_2_,
                                R25R24R23R22R21R20R19R18._2_2_);
                uVar13 = (uint6)R25R24R23R22R21R20R19R18;
                R25R24R23R22R21R20R19R18._0_3_ = (undefined3)uVar13;
                R25R24R23R22R21R20R19R18._0_4_ = CONCAT13(0xff,(undefined3)R25R24R23R22R21R20R19R18)
                ;
                R25R24R23R22R21R20R19R18._0_7_ =
                     CONCAT16(0x9e,CONCAT24((int)((uint6)uVar13 >> 0x20),
                                            (ulong)R25R24R23R22R21R20R19R18));
                R25R24R23R22R21R20R19R18 = CONCAT17(0x24,(uint7)R25R24R23R22R21R20R19R18);
                do {
                  uVar16 = R25R24R23R22R21R20R19R18;
                  cVar1 = R25R24R23R22R21R20R19R18._3_1_ + -1;
                  bVar24 = R25R24R23R22R21R20R19R18._3_1_ == '\0';
                  R25R24R23R22R21R20R19R18._0_4_ =
                       CONCAT13(cVar1,(undefined3)R25R24R23R22R21R20R19R18);
                  uVar19 = R25R24R23R22R21R20R19R18;
                  R25R24R23R22R21R20R19R18._6_1_ = SUB81(uVar16,6);
                  cVar2 = R25R24R23R22R21R20R19R18._6_1_ - bVar24;
                  bVar24 = R25R24R23R22R21R20R19R18._6_1_ < bVar24;
                  R25R24R23R22R21R20R19R18._7_1_ = SUB81(uVar16,7);
                  R25R24R23R22R21R20R19R18._0_6_ = (uint6)uVar19;
                  R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(cVar2,(uint6)R25R24R23R22R21R20R19R18);
                  cVar4 = R25R24R23R22R21R20R19R18._7_1_ - bVar24;
                  R25R24R23R22R21R20R19R18 = CONCAT17(cVar4,(uint7)R25R24R23R22R21R20R19R18);
                } while ((cVar1 != '\0' || cVar2 != '\0') || cVar4 != '\0');
                R25R24R23R22R21R20R19R18._6_1_ = *(undefined1 *)(Y + 0x51);
                R25R24R23R22R21R20R19R18 = CONCAT17(cVar4,(uint7)R25R24R23R22R21R20R19R18);
                *(undefined3 *)(iVar22 + -2) = 0xb6d;
                iVar8 = Y;
                FUN_code_00081a((char *)R25R24R23R22R21R20R19R18._6_2_,
                                R25R24R23R22R21R20R19R18._4_2_,R25R24R23R22R21R20R19R18._2_2_);
                R25R24R23R22R21R20R19R18 = (ulonglong)(uint6)R25R24R23R22R21R20R19R18;
                Y = Y + 0x14;
                *(byte *)(iVar8 + 0x53) = R6;
                iVar8 = Y;
                Y = Y + 1;
                *(byte *)(iVar8 + 0x40) = R6;
                Y = Y + -0x15;
              }
            }
LAB_code_000bce:
            Z = (byte *)0x387f;
            R25R24R23R22R21R20R19R18 = CONCAT71(R25R24R23R22R21R20R19R18._1_7_,1);
            do {
              cVar1 = (byte)Z + -1;
              cVar2 = Z._1_1_ - ((byte)Z == '\0');
              bVar24 = Z._1_1_ < ((byte)Z == '\0');
              Z = (byte *)CONCAT11(cVar2,cVar1);
              cVar4 = (byte)R25R24R23R22R21R20R19R18 - bVar24;
              R25R24R23R22R21R20R19R18 = CONCAT71(R25R24R23R22R21R20R19R18._1_7_,cVar4);
            } while ((cVar1 != '\0' || cVar2 != '\0') || cVar4 != '\0');
          }
          iVar8 = Y;
          uVar20 = R25R24R23R22R21R20R19R18;
          R25R24R23R22R21R20R19R18._1_1_ = *(byte *)(Y + 0x51);
          uVar21 = R25R24R23R22R21R20R19R18;
          if (R25R24R23R22R21R20R19R18._1_1_ < 5) {
            R25R24R23R22R21R20R19R18._4_4_ = SUB84(uVar20,4);
            R25R24R23R22R21R20R19R18._0_3_ = (undefined3)uVar21;
            uVar12 = (undefined3)R25R24R23R22R21R20R19R18;
            R25R24R23R22R21R20R19R18._3_1_ = *(byte *)(Y + 0x53);
            if (R25R24R23R22R21R20R19R18._3_1_ < 8) {
              R25R24R23R22R21R20R19R18._6_1_ = *(char *)(Y + 0x46);
              if (R25R24R23R22R21R20R19R18._6_1_ == '\x01') {
                R25R24R23R22R21R20R19R18 = CONCAT17(1,(uint7)R25R24R23R22R21R20R19R18);
                if ((R4 == '\x01') && (-1 < (int)R17R16)) {
                  R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(1,(uint6)R25R24R23R22R21R20R19R18);
                  R25R24R23R22R21R20R19R18 = (ulonglong)(uint7)R25R24R23R22R21R20R19R18;
                }
                else {
                  if ((byte)R17R16 != R1R0._1_1_) goto LAB_code_000dbb;
                  R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(R6,(uint6)R25R24R23R22R21R20R19R18);
                  R25R24R23R22R21R20R19R18 = (ulonglong)(uint7)R25R24R23R22R21R20R19R18;
                }
              }
              else {
                uVar10 = (uint7)R25R24R23R22R21R20R19R18 >> 0x20;
                R25R24R23R22R21R20R19R18._0_4_ = CONCAT13(1,uVar12);
                uVar10 = CONCAT34((int3)uVar10,(ulong)R25R24R23R22R21R20R19R18);
                R25R24R23R22R21R20R19R18 = (ulonglong)uVar10;
                if ((R4 != '\x01') || ((int)R17R16 < 0)) goto LAB_code_000dbb;
                R25R24R23R22R21R20R19R18._0_6_ = (uint6)uVar10;
                R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(1,(uint6)R25R24R23R22R21R20R19R18);
                R25R24R23R22R21R20R19R18 = (ulonglong)(uint7)R25R24R23R22R21R20R19R18;
              }
              uVar20 = R25R24R23R22R21R20R19R18;
              uVar15 = (uint7)R25R24R23R22R21R20R19R18;
              R25R24R23R22R21R20R19R18._7_1_ = *(char *)(Y + 0x54);
              R25R24R23R22R21R20R19R18._6_1_ = SUB81(uVar20,6);
              R25R24R23R22R21R20R19R18._7_1_ =
                   R25R24R23R22R21R20R19R18._7_1_ * '\x02' | R25R24R23R22R21R20R19R18._6_1_;
              R25R24R23R22R21R20R19R18 = CONCAT17(R25R24R23R22R21R20R19R18._7_1_,uVar15);
              Y = Y + 0x15;
              *(byte *)(iVar8 + 0x54) = R25R24R23R22R21R20R19R18._7_1_;
              iVar8 = Y;
              R17R16._1_1_ = *(char *)(Y + 0x3e);
              Y = Y + -0x15;
              R17R16._1_1_ = R17R16._1_1_ + 1;
              R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(0x10,(uint6)R25R24R23R22R21R20R19R18);
              Z = &DIDR2;
              X = (byte *)(iVar8 + 0x1c);
              do {
                pbVar18 = Z;
                pbVar17 = X;
                Z = Z + 1;
                R1R0._0_1_ = *pbVar18;
                X = X + 1;
                *pbVar17 = (byte)R1R0;
                R25R24R23R22R21R20R19R18._6_1_ = R25R24R23R22R21R20R19R18._6_1_ + -1;
              } while (R25R24R23R22R21R20R19R18._6_1_ != '\0');
              if (R17R16._1_1_ != 0) {
                R25R24R23R22R21R20R19R18._6_2_ = (byte *)(uint)R17R16._1_1_;
                R25R24R23R22R21R20R19R18._6_2_ = (byte *)((int)R25R24R23R22R21R20R19R18._6_2_ - 1);
                Z = (byte *)(Y + 0x38);
                R25R24R23R22R21R20R19R18._0_1_ = *(byte *)(Y + 0x53);
                R25R24R23R22R21R20R19R18._2_1_ = (byte)Y;
                R25R24R23R22R21R20R19R18._3_1_ = (byte)(Y >> 8);
                R25R24R23R22R21R20R19R18._1_1_ = *(undefined1 *)(Y + 0x54);
                R25R24R23R22R21R20R19R18._0_6_ =
                     (uint6)CONCAT13(R25R24R23R22R21R20R19R18._1_1_,
                                     CONCAT21(CONCAT11((R25R24R23R22R21R20R19R18._3_1_ + R1R0._1_1_
                                                       + CARRY1(R25R24R23R22R21R20R19R18._2_1_,
                                                                (byte)R25R24R23R22R21R20R19R18)) -
                                                       (((byte)(R25R24R23R22R21R20R19R18._2_1_ +
                                                               (byte)R25R24R23R22R21R20R19R18) < 199
                                                        ) + -1),R25R24R23R22R21R20R19R18._2_1_ +
                                                                (byte)R25R24R23R22R21R20R19R18 +
                                                                0x39),R25R24R23R22R21R20R19R18._1_1_
                                             )) << 8;
                do {
                  pbVar17 = Z;
                  uVar19 = R25R24R23R22R21R20R19R18;
                  uVar11 = R25R24R23R22R21R20R19R18._4_2_;
                  R25R24R23R22R21R20R19R18 = CONCAT62(R25R24R23R22R21R20R19R18._2_6_,uVar11);
                  uVar20 = R25R24R23R22R21R20R19R18;
                  R25R24R23R22R21R20R19R18._6_1_ = SUB81(uVar19,6);
                  R1R0._0_1_ = R25R24R23R22R21R20R19R18._6_1_;
                  R25R24R23R22R21R20R19R18 = uVar20;
                  while( true ) {
                    R1R0._0_1_ = (byte)R1R0 - 1;
                    if ((char)(byte)R1R0 < '\0') break;
                    cVar1 = R25R24R23R22R21R20R19R18._1_1_;
                    R25R24R23R22R21R20R19R18._1_1_ = (char)R25R24R23R22R21R20R19R18._1_1_ >> 1;
                    R25R24R23R22R21R20R19R18._0_1_ =
                         cVar1 << 7 | (byte)R25R24R23R22R21R20R19R18 >> 1;
                  }
                  if ((R25R24R23R22R21R20R19R18 & 1) == 0) {
                    R25R24R23R22R21R20R19R18 = CONCAT71(R25R24R23R22R21R20R19R18._1_7_,0x30);
                  }
                  else {
                    R25R24R23R22R21R20R19R18 = CONCAT71(R25R24R23R22R21R20R19R18._1_7_,0x31);
                  }
                  Z = Z + 1;
                  *pbVar17 = (byte)R25R24R23R22R21R20R19R18;
                  uVar19 = R25R24R23R22R21R20R19R18;
                  R25R24R23R22R21R20R19R18._6_2_ =
                       (byte *)((int)R25R24R23R22R21R20R19R18._6_2_ + -1);
                  uVar16 = R25R24R23R22R21R20R19R18;
                  R25R24R23R22R21R20R19R18._2_1_ = SUB81(uVar19,2);
                  bVar24 = (byte)Z != R25R24R23R22R21R20R19R18._2_1_;
                  R25R24R23R22R21R20R19R18._3_1_ = SUB81(uVar19,3);
                  cVar1 = R25R24R23R22R21R20R19R18._3_1_ +
                          ((byte)Z < R25R24R23R22R21R20R19R18._2_1_);
                  R25R24R23R22R21R20R19R18 = uVar16;
                } while (bVar24 || Z._1_1_ != cVar1);
              }
              R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(2,(uint6)R25R24R23R22R21R20R19R18);
              *(undefined3 *)(iVar22 + -2) = 0xc32;
              FUN_code_000561(R25R24R23R22R21R20R19R18._6_1_);
              R25R24R23R22R21R20R19R18._4_1_ = (byte)Y;
              bVar24 = R25R24R23R22R21R20R19R18._4_1_ < 0xcf;
              R25R24R23R22R21R20R19R18._0_5_ =
                   CONCAT14(R25R24R23R22R21R20R19R18._4_1_ + 0x31,(ulong)R25R24R23R22R21R20R19R18);
              R25R24R23R22R21R20R19R18._5_1_ = (byte)(Y >> 8);
              R25R24R23R22R21R20R19R18._0_6_ =
                   CONCAT15(R25R24R23R22R21R20R19R18._5_1_ - (bVar24 + -1),
                            (uint5)R25R24R23R22R21R20R19R18);
              R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(2,(uint6)R25R24R23R22R21R20R19R18);
              R25R24R23R22R21R20R19R18 =
                   CONCAT17(R25R24R23R22R21R20R19R18._7_1_,(uint7)R25R24R23R22R21R20R19R18);
              *(undefined3 *)(iVar22 + -2) = 0xc38;
              iVar8 = Y;
              FUN_code_0005c9(R25R24R23R22R21R20R19R18._6_2_,R25R24R23R22R21R20R19R18._4_2_,
                              R25R24R23R22R21R20R19R18._2_2_);
              uVar13 = (uint6)R25R24R23R22R21R20R19R18;
              R25R24R23R22R21R20R19R18._0_3_ = (undefined3)uVar13;
              R25R24R23R22R21R20R19R18._0_4_ = CONCAT13(0x7f,(undefined3)R25R24R23R22R21R20R19R18);
              R25R24R23R22R21R20R19R18._0_7_ =
                   CONCAT16(0x38,CONCAT24((int)((uint6)uVar13 >> 0x20),
                                          (ulong)R25R24R23R22R21R20R19R18));
              R25R24R23R22R21R20R19R18 = CONCAT17(1,(uint7)R25R24R23R22R21R20R19R18);
              do {
                uVar20 = R25R24R23R22R21R20R19R18;
                cVar1 = R25R24R23R22R21R20R19R18._3_1_ + -1;
                bVar24 = R25R24R23R22R21R20R19R18._3_1_ == '\0';
                R25R24R23R22R21R20R19R18._0_4_ =
                     CONCAT13(cVar1,(undefined3)R25R24R23R22R21R20R19R18);
                uVar19 = R25R24R23R22R21R20R19R18;
                R25R24R23R22R21R20R19R18._6_1_ = SUB81(uVar20,6);
                cVar2 = R25R24R23R22R21R20R19R18._6_1_ - bVar24;
                bVar24 = R25R24R23R22R21R20R19R18._6_1_ < bVar24;
                R25R24R23R22R21R20R19R18._7_1_ = SUB81(uVar20,7);
                R25R24R23R22R21R20R19R18._0_6_ = (uint6)uVar19;
                R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(cVar2,(uint6)R25R24R23R22R21R20R19R18);
                cVar4 = R25R24R23R22R21R20R19R18._7_1_ - bVar24;
                R25R24R23R22R21R20R19R18 = CONCAT17(cVar4,(uint7)R25R24R23R22R21R20R19R18);
              } while ((cVar1 != '\0' || cVar2 != '\0') || cVar4 != '\0');
              Y = Y + 0x14;
              *(byte *)(iVar8 + 0x53) = R17R16._1_1_;
              Y = Y + -0x14;
            }
          }
        }
        else {
          Z._0_1_ = *(byte *)(Y + 0x45);
          if ((byte)Z == R1R0._1_1_) {
            Z = (byte *)CONCAT11(1,(byte)Z);
            if ((char)R15R14 == '\x01') goto LAB_code_000c5f;
            goto LAB_code_000c82;
          }
        }
      }
    }
LAB_code_000dbb:
    iVar8 = Y;
    R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(0xff,(uint6)R25R24R23R22R21R20R19R18);
    R13R12._0_1_ = (byte)R9R8;
    R13R12._1_1_ = (byte)((uint)R9R8 >> 8);
    R13R12 = CONCAT11(R13R12._1_1_ - (((byte)R13R12 != -1) + -1),(byte)R13R12 + '\x01');
    R25R24R23R22R21R20R19R18._7_1_ = *(byte *)(Y + 0x41);
    bVar23 = R25R24R23R22R21R20R19R18._7_1_;
    uVar19 = R25R24R23R22R21R20R19R18;
    if (R25R24R23R22R21R20R19R18._7_1_ < 4) {
      if (R25R24R23R22R21R20R19R18._7_1_ == 0) {
        R25R24R23R22R21R20R19R18._0_2_ = (undefined1 *)CONCAT11(R6,0x5a);
        R25R24R23R22R21R20R19R18._0_3_ = CONCAT12(0x5a,(undefined1 *)R25R24R23R22R21R20R19R18);
        R25R24R23R22R21R20R19R18._0_4_ = CONCAT13(0x80,(undefined3)R25R24R23R22R21R20R19R18);
        R25R24R23R22R21R20R19R18._0_5_ = CONCAT14(R6,(ulong)R25R24R23R22R21R20R19R18);
        R25R24R23R22R21R20R19R18._0_6_ = CONCAT15(0x80,(uint5)R25R24R23R22R21R20R19R18);
        R25R24R23R22R21R20R19R18 = (ulonglong)(uint6)R25R24R23R22R21R20R19R18;
      }
      else if (R25R24R23R22R21R20R19R18._7_1_ == 1) {
        R25R24R23R22R21R20R19R18._0_2_ = (undefined1 *)CONCAT11(0x5a,R6);
        R25R24R23R22R21R20R19R18._0_3_ = CONCAT12(R6,(undefined1 *)R25R24R23R22R21R20R19R18);
        R25R24R23R22R21R20R19R18._0_4_ = CONCAT13(R6,(undefined3)R25R24R23R22R21R20R19R18);
        R25R24R23R22R21R20R19R18._0_5_ = CONCAT14(0x80,(ulong)R25R24R23R22R21R20R19R18);
        R25R24R23R22R21R20R19R18._0_6_ = CONCAT15(R6,(uint5)R25R24R23R22R21R20R19R18);
        R25R24R23R22R21R20R19R18 = (ulonglong)(uint6)R25R24R23R22R21R20R19R18;
      }
      else if (R25R24R23R22R21R20R19R18._7_1_ == 2) {
        R25R24R23R22R21R20R19R18._0_2_ = (undefined1 *)CONCAT11(R6,0x5a);
        R25R24R23R22R21R20R19R18._0_3_ = CONCAT12(R6,(undefined1 *)R25R24R23R22R21R20R19R18);
        R25R24R23R22R21R20R19R18._0_4_ = CONCAT13(0x80,(undefined3)R25R24R23R22R21R20R19R18);
        R25R24R23R22R21R20R19R18._0_5_ = CONCAT14(R6,(ulong)R25R24R23R22R21R20R19R18);
        R25R24R23R22R21R20R19R18._0_6_ = CONCAT15(R6,(uint5)R25R24R23R22R21R20R19R18);
        R25R24R23R22R21R20R19R18 = (ulonglong)(uint6)R25R24R23R22R21R20R19R18;
      }
      else {
        R25R24R23R22R21R20R19R18._0_3_ = CONCAT12(R6,0x3c50);
        R25R24R23R22R21R20R19R18._0_4_ = CONCAT13(0x6e,(undefined3)R25R24R23R22R21R20R19R18);
        R25R24R23R22R21R20R19R18._0_5_ = CONCAT14(0x5a,(ulong)R25R24R23R22R21R20R19R18);
        R25R24R23R22R21R20R19R18._0_6_ = CONCAT15(R6,(uint5)R25R24R23R22R21R20R19R18);
        R25R24R23R22R21R20R19R18 = (ulonglong)(uint6)R25R24R23R22R21R20R19R18;
      }
      Z = (byte *)(Y + 1);
      do {
        R25R24R23R22R21R20R19R18._6_1_ = Z[1];
        R1R0 = (uint)R7 * (uint)R25R24R23R22R21R20R19R18._6_1_;
        R25R24R23R22R21R20R19R18 = CONCAT26(R1R0,(uint6)R25R24R23R22R21R20R19R18);
        uVar19 = R25R24R23R22R21R20R19R18;
        R25R24R23R22R21R20R19R18._7_1_ = (byte)(R1R0 >> 8);
        Z[1] = R25R24R23R22R21R20R19R18._7_1_;
        R25R24R23R22R21R20R19R18 = uVar19;
        R25R24R23R22R21R20R19R18._6_1_ = *Z;
        R1R0 = (uint)R7 * (uint)R25R24R23R22R21R20R19R18._6_1_;
        R25R24R23R22R21R20R19R18 = CONCAT26(R1R0,(uint6)R25R24R23R22R21R20R19R18);
        uVar19 = R25R24R23R22R21R20R19R18;
        R25R24R23R22R21R20R19R18._7_1_ = (byte)(R1R0 >> 8);
        *Z = R25R24R23R22R21R20R19R18._7_1_;
        R25R24R23R22R21R20R19R18 = uVar19;
        R25R24R23R22R21R20R19R18._6_1_ = Z[2];
        R1R0 = (uint)R7 * (uint)R25R24R23R22R21R20R19R18._6_1_;
        iVar8 = R1R0;
        R25R24R23R22R21R20R19R18 = CONCAT26(R1R0,(uint6)R25R24R23R22R21R20R19R18);
        uVar20 = R25R24R23R22R21R20R19R18;
        R1R0._1_1_ = 0;
        R25R24R23R22R21R20R19R18._7_1_ = (byte)((uint)iVar8 >> 8);
        Z[2] = R25R24R23R22R21R20R19R18._7_1_;
        R25R24R23R22R21R20R19R18 = uVar20;
        uVar20 = R25R24R23R22R21R20R19R18;
        Z = Z + 3;
      } while ((byte)R11R10 != (byte)Z || R11R10._1_1_ != (byte)(Z._1_1_ + ((byte)R11R10 < (byte)Z))
              );
      Z._0_1_ = *(byte *)(Y + 0x4a);
      R25R24R23R22R21R20R19R18._0_7_ = CONCAT16((byte)Z,(uint6)R25R24R23R22R21R20R19R18);
      R25R24R23R22R21R20R19R18 = (ulonglong)(uint7)R25R24R23R22R21R20R19R18;
      uVar21 = R25R24R23R22R21R20R19R18;
      Z = (byte *)CONCAT11(CARRY1((byte)Z,(byte)Z) + CARRY1((byte)Z * '\x02',(byte)Z) + R3R2._1_1_ +
                           CARRY1((byte)Z * '\x03',(byte)R3R2),(byte)Z * '\x03' + (byte)R3R2);
      R25R24R23R22R21R20R19R18._5_1_ = SUB81(uVar20,5);
      *Z = R25R24R23R22R21R20R19R18._5_1_;
      R25R24R23R22R21R20R19R18 = uVar21;
      Z[1] = R25R24R23R22R21R20R19R18._4_1_;
      Z[2] = R25R24R23R22R21R20R19R18._3_1_;
      *(byte *)(Y + 0x1f) = R25R24R23R22R21R20R19R18._2_1_;
      *(byte *)(Y + 0x20) = R25R24R23R22R21R20R19R18._1_1_;
      *(byte *)(Y + 0x21) = (byte)R25R24R23R22R21R20R19R18;
      *(byte *)(Y + 0x22) = R25R24R23R22R21R20R19R18._2_1_;
      *(byte *)(Y + 0x23) = R25R24R23R22R21R20R19R18._1_1_;
      *(byte *)(Y + 0x24) = (byte)R25R24R23R22R21R20R19R18;
      R25R24R23R22R21R20R19R18._0_4_ = CONCAT13(0xf,(undefined3)R25R24R23R22R21R20R19R18);
      *(undefined1 *)(Y + 0x2b) = 0xf;
      *(byte *)(Y + 0x2c) = R25R24R23R22R21R20R19R18._3_1_;
      *(byte *)(Y + 0x2d) = R25R24R23R22R21R20R19R18._3_1_;
      *(byte *)(Y + 0x2e) = R25R24R23R22R21R20R19R18._3_1_;
      *(byte *)(Y + 0x2f) = R25R24R23R22R21R20R19R18._3_1_;
      *(byte *)(Y + 0x30) = R25R24R23R22R21R20R19R18._3_1_;
      uVar19 = R25R24R23R22R21R20R19R18;
      Z._1_1_ = *(byte *)(Y + 0x47);
      if ((Z._1_1_ & 0x10) == 0) {
        R25R24R23R22R21R20R19R18._0_2_ = (undefined1 *)CONCAT11(R6,R6);
        R25R24R23R22R21R20R19R18._3_5_ = SUB85(uVar19,3);
        R25R24R23R22R21R20R19R18._0_3_ = CONCAT12(R6,(undefined1 *)R25R24R23R22R21R20R19R18);
      }
      *(byte *)(Y + 0x25) = R25R24R23R22R21R20R19R18._2_1_;
      *(byte *)(Y + 0x26) = R25R24R23R22R21R20R19R18._1_1_;
      *(byte *)(Y + 0x27) = (byte)R25R24R23R22R21R20R19R18;
      *(byte *)(Y + 0x28) = R25R24R23R22R21R20R19R18._2_1_;
      *(byte *)(Y + 0x29) = R25R24R23R22R21R20R19R18._1_1_;
      *(byte *)(Y + 0x2a) = (byte)R25R24R23R22R21R20R19R18;
      uVar19 = R25R24R23R22R21R20R19R18;
      R25R24R23R22R21R20R19R18._6_2_ = (byte *)((int)R25R24R23R22R21R20R19R18._6_2_ + 1);
      R25R24R23R22R21R20R19R18._0_4_ = (ulong)uVar19;
      R25R24R23R22R21R20R19R18._0_5_ = CONCAT14(10,(ulong)R25R24R23R22R21R20R19R18);
      R25R24R23R22R21R20R19R18._0_6_ = (uint6)(uint5)R25R24R23R22R21R20R19R18;
      *(undefined3 *)(iVar22 + -2) = 0xe2a;
      iVar8 = Y;
      R25R24R23R22R21R20R19R18._6_2_ = (byte *)FUN_code_000f7c();
      R25R24R23R22R21R20R19R18 =
           CONCAT26(R25R24R23R22R21R20R19R18._6_2_,(uint6)R25R24R23R22R21R20R19R18);
      uVar20 = R25R24R23R22R21R20R19R18;
      Y = Y + 0xb;
      *(byte *)(iVar8 + 0x4a) = R25R24R23R22R21R20R19R18._6_1_;
      R25R24R23R22R21R20R19R18 = uVar20;
      Y = Y + -0xb;
    }
    else {
      R25R24R23R22R21R20R19R18._0_1_ = *(char *)(Y + 0x41);
      if ((byte)R25R24R23R22R21R20R19R18 == '\x04') {
        R25R24R23R22R21R20R19R18._2_6_ = SUB86(uVar19,2);
        R25R24R23R22R21R20R19R18._1_1_ = *(char *)(Y + 0x4e);
        cVar1 = R25R24R23R22R21R20R19R18._1_1_ + '\x02';
        R25R24R23R22R21R20R19R18._0_2_ = (undefined1 *)CONCAT11(cVar1,4);
        Y = Y + 7;
        *(char *)(iVar8 + 0x46) = cVar1;
        iVar8 = Y;
        R17R16._1_1_ = *(char *)(Y + 0x47);
        R17R16._1_1_ = R17R16._1_1_ + -0x68;
        R4 = R25R24R23R22R21R20R19R18._1_1_;
        R15R14 = (byte *)CONCAT11(R1R0._1_1_,R1R0._1_1_);
        Y = Y + 9;
        *(byte *)(iVar8 + 0x48) = R13R12._1_1_;
        *(byte *)(Y + 0x3e) = (byte)R13R12;
        Y = Y + -0x10;
        R13R12._1_1_ = R5;
        R5 = R17R16._1_1_;
        do {
          R17R16._0_1_ = (byte)R15R14;
          R17R16._1_1_ = (byte)((uint)R15R14 >> 8);
          R17R16 = (byte *)CONCAT11(R17R16._1_1_ * '\x03' + CARRY1((byte)R17R16,(byte)R17R16) +
                                    CARRY1((byte)R17R16 * '\x02',(byte)R17R16) + R3R2._1_1_ +
                                    CARRY1((byte)R17R16 * '\x03',(byte)R3R2),
                                    (byte)R17R16 * '\x03' + (byte)R3R2);
          R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(R4,(uint6)R25R24R23R22R21R20R19R18);
          *(undefined3 *)(iVar22 + -2) = 0xe52;
          FUN_code_00090d(R25R24R23R22R21R20R19R18._6_2_,R25R24R23R22R21R20R19R18._4_2_,
                          R25R24R23R22R21R20R19R18._2_2_,
                          (uint)(undefined1 *)R25R24R23R22R21R20R19R18);
          Z = R17R16;
          *R17R16 = R25R24R23R22R21R20R19R18._4_1_;
          Z[1] = R25R24R23R22R21R20R19R18._5_1_;
          Z[2] = R25R24R23R22R21R20R19R18._6_1_;
          uVar19 = R25R24R23R22R21R20R19R18;
          Z = (byte *)CONCAT11(0xff,(byte)Z);
          R15R14 = (byte *)CONCAT11(R15R14._1_1_ - (((char)R15R14 != -1) + -1),(char)R15R14 + '\x01'
                                   );
          R25R24R23R22R21R20R19R18 = CONCAT71(R25R24R23R22R21R20R19R18._1_7_,0xf);
          uVar16 = R25R24R23R22R21R20R19R18;
          R4 = R4 + '\x0f';
        } while (R5 != R4);
        R5 = R13R12._1_1_;
        R13R12 = *(undefined2 *)(Y + 0x4e);
        R25R24R23R22R21R20R19R18._7_1_ = SUB81(uVar19,7);
        R25R24R23R22R21R20R19R18._0_6_ = (uint6)uVar16;
        R25R24R23R22R21R20R19R18._6_1_ = *(undefined1 *)(Y + 0x46);
        *(undefined3 *)(iVar22 + -2) = 0xe67;
        FUN_code_00090d(R25R24R23R22R21R20R19R18._6_2_,R25R24R23R22R21R20R19R18._4_2_,
                        R25R24R23R22R21R20R19R18._2_2_,(uint)(undefined1 *)R25R24R23R22R21R20R19R18)
        ;
        *(byte *)(Y + 0x22) = R25R24R23R22R21R20R19R18._4_1_;
        *(byte *)(Y + 0x23) = R25R24R23R22R21R20R19R18._5_1_;
        *(byte *)(Y + 0x24) = R25R24R23R22R21R20R19R18._6_1_;
        *(byte *)(Y + 0x1f) = R25R24R23R22R21R20R19R18._4_1_;
        *(byte *)(Y + 0x20) = R25R24R23R22R21R20R19R18._5_1_;
        *(byte *)(Y + 0x21) = R25R24R23R22R21R20R19R18._6_1_;
        R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(0xf,(uint6)R25R24R23R22R21R20R19R18);
        R25R24R23R22R21R20R19R18 = (ulonglong)(uint7)R25R24R23R22R21R20R19R18;
        *(undefined1 *)(Y + 0x2b) = 0xf;
        *(byte *)(Y + 0x2c) = R25R24R23R22R21R20R19R18._6_1_;
        *(byte *)(Y + 0x2d) = R25R24R23R22R21R20R19R18._6_1_;
        *(byte *)(Y + 0x2e) = R25R24R23R22R21R20R19R18._6_1_;
        *(byte *)(Y + 0x2f) = R25R24R23R22R21R20R19R18._6_1_;
        *(byte *)(Y + 0x30) = R25R24R23R22R21R20R19R18._6_1_;
        R25R24R23R22R21R20R19R18._1_1_ = *(undefined1 *)(Y + 0x47);
        R25R24R23R22R21R20R19R18 =
             (ulonglong)CONCAT61(R25R24R23R22R21R20R19R18._2_6_,R25R24R23R22R21R20R19R18._1_1_) << 8
        ;
        if ((R25R24R23R22R21R20R19R18 & 0x1000) == 0) {
          R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(R6,(uint6)R25R24R23R22R21R20R19R18);
          uVar10 = (uint7)R25R24R23R22R21R20R19R18;
        }
        else {
          R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(0x5a,(uint6)R25R24R23R22R21R20R19R18);
          uVar10 = (uint7)R25R24R23R22R21R20R19R18;
        }
        R25R24R23R22R21R20R19R18 = (ulonglong)uVar10;
        uVar20 = R25R24R23R22R21R20R19R18;
        R25R24R23R22R21R20R19R18._6_1_ = (byte)(uVar10 >> 0x30);
        *(byte *)(Y + 0x28) = R25R24R23R22R21R20R19R18._6_1_;
        R25R24R23R22R21R20R19R18 = uVar20;
        *(byte *)(Y + 0x29) = R6;
        *(byte *)(Y + 0x2a) = R25R24R23R22R21R20R19R18._6_1_;
        R25R24R23R22R21R20R19R18._6_1_ = *(undefined1 *)(Y + 0x28);
        R25R24R23R22R21R20R19R18._7_1_ = *(undefined1 *)(Y + 0x29);
        X._0_1_ = *(undefined1 *)(Y + 0x2a);
        *(byte *)(Y + 0x25) = R25R24R23R22R21R20R19R18._6_1_;
        *(byte *)(Y + 0x26) = R25R24R23R22R21R20R19R18._7_1_;
        *(undefined1 *)(Y + 0x27) = X._0_1_;
        iVar8 = Y;
        R25R24R23R22R21R20R19R18._3_1_ = *(undefined1 *)(Y + 0x46);
        uVar7 = R25R24R23R22R21R20R19R18._3_1_;
        R25R24R23R22R21R20R19R18 = (ulonglong)(ulong)R25R24R23R22R21R20R19R18;
        Y = Y + 0xf;
        *(undefined1 *)(iVar8 + 0x4e) = uVar7;
        Y = Y + -0xf;
      }
      else {
        R25R24R23R22R21R20R19R18._6_1_ = *(char *)(Y + 0x41);
        R25R24R23R22R21R20R19R18 = CONCAT17(bVar23,(uint7)R25R24R23R22R21R20R19R18);
        if (R25R24R23R22R21R20R19R18._6_1_ == '\x05') {
          R17R16._0_1_ = (byte)Y;
          R17R16._1_1_ = (byte)(Y >> 8);
          R17R16 = (byte *)CONCAT11(R17R16._1_1_ - (((byte)R17R16 != -1) + -1),(byte)R17R16 + '\x01'
                                   );
          do {
            *(undefined3 *)(iVar22 + -2) = 0xe97;
            R25R24R23R22R21R20R19R18._6_2_ = FUN_code_000ff0();
            R15R14 = R17R16;
            R25R24R23R22R21R20R19R18 =
                 CONCAT17(R25R24R23R22R21R20R19R18._7_1_,
                          CONCAT16(R25R24R23R22R21R20R19R18._6_1_,(uint6)R25R24R23R22R21R20R19R18))
                 & 0x807fffffffffffff;
            if ((longlong)R25R24R23R22R21R20R19R18 < 0) {
              uVar13 = (uint6)R25R24R23R22R21R20R19R18;
              R25R24R23R22R21R20R19R18._6_1_ = (char)(R25R24R23R22R21R20R19R18 >> 0x30) + -1;
              R25R24R23R22R21R20R19R18._0_7_ =
                   CONCAT16(R25R24R23R22R21R20R19R18._6_1_,(uint6)R25R24R23R22R21R20R19R18) |
                   0x80000000000000;
              R25R24R23R22R21R20R19R18 = CONCAT17(0xff,(uint7)R25R24R23R22R21R20R19R18);
              R25R24R23R22R21R20R19R18._6_2_ = (byte *)((int)R25R24R23R22R21R20R19R18._6_2_ + 1);
              R25R24R23R22R21R20R19R18 = CONCAT26(R25R24R23R22R21R20R19R18._6_2_,uVar13);
            }
            Z = R17R16;
            R17R16[1] = R25R24R23R22R21R20R19R18._6_1_;
            *(undefined3 *)(iVar22 + -2) = 0xea4;
            R25R24R23R22R21R20R19R18._6_2_ = FUN_code_000ff0();
            R25R24R23R22R21R20R19R18 =
                 CONCAT17(R25R24R23R22R21R20R19R18._7_1_,
                          CONCAT16(R25R24R23R22R21R20R19R18._6_1_,(uint6)R25R24R23R22R21R20R19R18))
                 & 0x807fffffffffffff;
            if ((longlong)R25R24R23R22R21R20R19R18 < 0) {
              uVar13 = (uint6)R25R24R23R22R21R20R19R18;
              R25R24R23R22R21R20R19R18._6_1_ = (char)(R25R24R23R22R21R20R19R18 >> 0x30) + -1;
              R25R24R23R22R21R20R19R18._0_7_ =
                   CONCAT16(R25R24R23R22R21R20R19R18._6_1_,(uint6)R25R24R23R22R21R20R19R18) |
                   0x80000000000000;
              R25R24R23R22R21R20R19R18 = CONCAT17(0xff,(uint7)R25R24R23R22R21R20R19R18);
              R25R24R23R22R21R20R19R18._6_2_ = (byte *)((int)R25R24R23R22R21R20R19R18._6_2_ + 1);
              R25R24R23R22R21R20R19R18 = CONCAT26(R25R24R23R22R21R20R19R18._6_2_,uVar13);
            }
            Z = R15R14;
            *R15R14 = R25R24R23R22R21R20R19R18._6_1_;
            *(undefined3 *)(iVar22 + -2) = 0xeb0;
            R25R24R23R22R21R20R19R18._6_2_ = FUN_code_000ff0();
            R25R24R23R22R21R20R19R18 =
                 CONCAT17(R25R24R23R22R21R20R19R18._7_1_,
                          CONCAT16(R25R24R23R22R21R20R19R18._6_1_,(uint6)R25R24R23R22R21R20R19R18))
                 & 0x807fffffffffffff;
            if ((longlong)R25R24R23R22R21R20R19R18 < 0) {
              uVar13 = (uint6)R25R24R23R22R21R20R19R18;
              R25R24R23R22R21R20R19R18._6_1_ = (char)(R25R24R23R22R21R20R19R18 >> 0x30) + -1;
              R25R24R23R22R21R20R19R18._0_7_ =
                   CONCAT16(R25R24R23R22R21R20R19R18._6_1_,(uint6)R25R24R23R22R21R20R19R18) |
                   0x80000000000000;
              R25R24R23R22R21R20R19R18 = CONCAT17(0xff,(uint7)R25R24R23R22R21R20R19R18);
              R25R24R23R22R21R20R19R18._6_2_ = (byte *)((int)R25R24R23R22R21R20R19R18._6_2_ + 1);
              R25R24R23R22R21R20R19R18 = CONCAT26(R25R24R23R22R21R20R19R18._6_2_,uVar13);
            }
            Z = R15R14;
            R15R14[2] = R25R24R23R22R21R20R19R18._6_1_;
            bVar23 = (byte)R17R16 + 3;
            cVar1 = R17R16._1_1_ - (((byte)R17R16 < 0xfd) + -1);
            R17R16 = (byte *)CONCAT11(cVar1,bVar23);
          } while (bVar23 != (byte)R11R10 || cVar1 != (char)(R11R10._1_1_ + (bVar23 < (byte)R11R10))
                  );
          *(undefined3 *)(iVar22 + -2) = 0xec1;
          R25R24R23R22R21R20R19R18._6_2_ = FUN_code_000ff0();
          R25R24R23R22R21R20R19R18 =
               CONCAT17(R25R24R23R22R21R20R19R18._7_1_,
                        CONCAT16(R25R24R23R22R21R20R19R18._6_1_,(uint6)R25R24R23R22R21R20R19R18)) &
               0x807fffffffffffff;
          if ((longlong)R25R24R23R22R21R20R19R18 < 0) {
            uVar13 = (uint6)R25R24R23R22R21R20R19R18;
            R25R24R23R22R21R20R19R18._6_1_ = (char)(R25R24R23R22R21R20R19R18 >> 0x30) + -1;
            R25R24R23R22R21R20R19R18._0_7_ =
                 CONCAT16(R25R24R23R22R21R20R19R18._6_1_,(uint6)R25R24R23R22R21R20R19R18) |
                 0x80000000000000;
            R25R24R23R22R21R20R19R18 = CONCAT17(0xff,(uint7)R25R24R23R22R21R20R19R18);
            R25R24R23R22R21R20R19R18._6_2_ = (byte *)((int)R25R24R23R22R21R20R19R18._6_2_ + 1);
            R25R24R23R22R21R20R19R18 = CONCAT26(R25R24R23R22R21R20R19R18._6_2_,uVar13);
          }
          *(byte *)(Y + 0x20) = R25R24R23R22R21R20R19R18._6_1_;
          *(undefined3 *)(iVar22 + -2) = 0xecc;
          R25R24R23R22R21R20R19R18._6_2_ = FUN_code_000ff0();
          R25R24R23R22R21R20R19R18 =
               CONCAT17(R25R24R23R22R21R20R19R18._7_1_,
                        CONCAT16(R25R24R23R22R21R20R19R18._6_1_,(uint6)R25R24R23R22R21R20R19R18)) &
               0x807fffffffffffff;
          if ((longlong)R25R24R23R22R21R20R19R18 < 0) {
            uVar13 = (uint6)R25R24R23R22R21R20R19R18;
            R25R24R23R22R21R20R19R18._6_1_ = (char)(R25R24R23R22R21R20R19R18 >> 0x30) + -1;
            R25R24R23R22R21R20R19R18._0_7_ =
                 CONCAT16(R25R24R23R22R21R20R19R18._6_1_,(uint6)R25R24R23R22R21R20R19R18) |
                 0x80000000000000;
            R25R24R23R22R21R20R19R18 = CONCAT17(0xff,(uint7)R25R24R23R22R21R20R19R18);
            R25R24R23R22R21R20R19R18._6_2_ = (byte *)((int)R25R24R23R22R21R20R19R18._6_2_ + 1);
            R25R24R23R22R21R20R19R18 = CONCAT26(R25R24R23R22R21R20R19R18._6_2_,uVar13);
          }
          *(byte *)(Y + 0x1f) = R25R24R23R22R21R20R19R18._6_1_;
          *(undefined3 *)(iVar22 + -2) = 0xed7;
          R25R24R23R22R21R20R19R18._6_2_ = FUN_code_000ff0();
          R25R24R23R22R21R20R19R18 =
               CONCAT17(R25R24R23R22R21R20R19R18._7_1_,
                        CONCAT16(R25R24R23R22R21R20R19R18._6_1_,(uint6)R25R24R23R22R21R20R19R18)) &
               0x807fffffffffffff;
          if ((longlong)R25R24R23R22R21R20R19R18 < 0) {
            R25R24R23R22R21R20R19R18._6_1_ = (char)(R25R24R23R22R21R20R19R18 >> 0x30) - 1;
            R25R24R23R22R21R20R19R18._6_2_ = (byte *)(uint)(R25R24R23R22R21R20R19R18._6_1_ | 0x80);
            R25R24R23R22R21R20R19R18._6_2_ = (byte *)((int)R25R24R23R22R21R20R19R18._6_2_ + 1);
          }
          *(byte *)(Y + 0x21) = R25R24R23R22R21R20R19R18._6_1_;
          R25R24R23R22R21R20R19R18._6_1_ = *(undefined1 *)(Y + 0x1f);
          R25R24R23R22R21R20R19R18._7_1_ = *(undefined1 *)(Y + 0x20);
          X._0_1_ = *(undefined1 *)(Y + 0x21);
          *(byte *)(Y + 0x22) = R25R24R23R22R21R20R19R18._6_1_;
          *(byte *)(Y + 0x23) = R25R24R23R22R21R20R19R18._7_1_;
          *(undefined1 *)(Y + 0x24) = X._0_1_;
          R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(0xf,(uint6)R25R24R23R22R21R20R19R18);
          R25R24R23R22R21R20R19R18 = (ulonglong)(uint7)R25R24R23R22R21R20R19R18;
          *(undefined1 *)(Y + 0x2b) = 0xf;
          *(byte *)(Y + 0x2c) = R25R24R23R22R21R20R19R18._6_1_;
          *(byte *)(Y + 0x2d) = R25R24R23R22R21R20R19R18._6_1_;
          *(byte *)(Y + 0x2e) = R25R24R23R22R21R20R19R18._6_1_;
          *(byte *)(Y + 0x2f) = R25R24R23R22R21R20R19R18._6_1_;
          *(byte *)(Y + 0x30) = R25R24R23R22R21R20R19R18._6_1_;
          Z._1_1_ = *(byte *)(Y + 0x47);
          if ((Z._1_1_ & 0x10) == 0) {
            R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(R6,(uint6)R25R24R23R22R21R20R19R18);
            uVar10 = (uint7)R25R24R23R22R21R20R19R18;
          }
          else {
            R25R24R23R22R21R20R19R18._0_7_ = CONCAT16(0x5a,(uint6)R25R24R23R22R21R20R19R18);
            uVar10 = (uint7)R25R24R23R22R21R20R19R18;
          }
          R25R24R23R22R21R20R19R18 = (ulonglong)uVar10;
          uVar20 = R25R24R23R22R21R20R19R18;
          R25R24R23R22R21R20R19R18._6_1_ = (byte)(uVar10 >> 0x30);
          *(byte *)(Y + 0x28) = R25R24R23R22R21R20R19R18._6_1_;
          R25R24R23R22R21R20R19R18 = uVar20;
          *(byte *)(Y + 0x29) = R6;
          *(byte *)(Y + 0x2a) = R25R24R23R22R21R20R19R18._6_1_;
          R25R24R23R22R21R20R19R18._6_1_ = *(undefined1 *)(Y + 0x28);
          R25R24R23R22R21R20R19R18._7_1_ = *(undefined1 *)(Y + 0x29);
          X._0_1_ = *(undefined1 *)(Y + 0x2a);
          *(byte *)(Y + 0x25) = R25R24R23R22R21R20R19R18._6_1_;
          *(byte *)(Y + 0x26) = R25R24R23R22R21R20R19R18._7_1_;
          *(undefined1 *)(Y + 0x27) = X._0_1_;
        }
      }
    }
    bVar23 = (byte)R9R8 + 0xba;
    bVar3 = R9R8._1_1_ - (R1R0._1_1_ + ((byte)R9R8 < 0x46));
    R9R8 = CONCAT11(bVar3,bVar23);
    R25R24R23R22R21R20R19R18 = CONCAT62(R25R24R23R22R21R20R19R18._2_6_,0x300);
    if (bVar3 < R1R0._1_1_ || (byte)(bVar3 - R1R0._1_1_) < (bVar23 < 3)) {
      *(byte *)(Y + 0x20) = R6;
      *(byte *)(Y + 0x1f) = R6;
      *(byte *)(Y + 0x21) = R6;
      *(byte *)(Y + 0x23) = R6;
      *(byte *)(Y + 0x22) = R6;
      *(byte *)(Y + 0x24) = R6;
    }
    else {
      R25R24R23R22R21R20R19R18._0_4_ = CONCAT13(0x4a,(undefined3)R25R24R23R22R21R20R19R18);
      if (R1R0._1_1_ <= R13R12._1_1_ && ((byte)R13R12 < 0x4a) <= (byte)(R13R12._1_1_ - R1R0._1_1_))
      {
        R13R12 = CONCAT11(R1R0._1_1_,R1R0._1_1_);
      }
    }
    R25R24R23R22R21R20R19R18._0_5_ = CONCAT14(10,(ulong)R25R24R23R22R21R20R19R18);
    R25R24R23R22R21R20R19R18._0_6_ = (uint6)(uint5)R25R24R23R22R21R20R19R18;
    R25R24R23R22R21R20R19R18._6_1_ = *(undefined1 *)(Y + 0x4b);
    R25R24R23R22R21R20R19R18._7_1_ = *(undefined1 *)(Y + 0x4c);
    *(undefined3 *)(iVar22 + -2) = 0xf1c;
    R25R24R23R22R21R20R19R18 =
         FUN_code_000772(R25R24R23R22R21R20R19R18._6_2_,R25R24R23R22R21R20R19R18._4_2_,
                         R25R24R23R22R21R20R19R18._2_1_);
    R25R24R23R22R21R20R19R18._0_5_ = CONCAT14(2,(ulong)R25R24R23R22R21R20R19R18);
    R25R24R23R22R21R20R19R18._0_6_ = (uint6)(uint5)R25R24R23R22R21R20R19R18;
    R25R24R23R22R21R20R19R18 = CONCAT26(R11R10,(uint6)R25R24R23R22R21R20R19R18);
    *(undefined3 *)(iVar22 + -2) = 0xf21;
    R25R24R23R22R21R20R19R18 =
         FUN_code_000797(R25R24R23R22R21R20R19R18._6_2_,R25R24R23R22R21R20R19R18._4_2_,
                         R25R24R23R22R21R20R19R18._2_1_);
    R25R24R23R22R21R20R19R18._0_5_ = CONCAT14(2,(ulong)R25R24R23R22R21R20R19R18);
    R25R24R23R22R21R20R19R18._0_6_ = (uint6)(uint5)R25R24R23R22R21R20R19R18;
    R25R24R23R22R21R20R19R18._6_2_ = (byte *)(Y + 0x25);
    *(undefined3 *)(iVar22 + -2) = 0xf27;
    R25R24R23R22R21R20R19R18 =
         FUN_code_0007bc(R25R24R23R22R21R20R19R18._6_2_,R25R24R23R22R21R20R19R18._4_2_,
                         R25R24R23R22R21R20R19R18._2_1_);
    R25R24R23R22R21R20R19R18._0_5_ = CONCAT14(2,(ulong)R25R24R23R22R21R20R19R18);
    R25R24R23R22R21R20R19R18._0_6_ = (uint6)(uint5)R25R24R23R22R21R20R19R18;
    R25R24R23R22R21R20R19R18._6_2_ = (byte *)(Y + 0x2b);
    *(undefined3 *)(iVar22 + -2) = 0xf2d;
    iVar8 = Y;
    R25R24R23R22R21R20R19R18 =
         FUN_code_0007e1(R25R24R23R22R21R20R19R18._6_2_,R25R24R23R22R21R20R19R18._4_2_,
                         R25R24R23R22R21R20R19R18._2_1_);
    R25R24R23R22R21R20R19R18._6_1_ = *(char *)(Y + 0x41);
    cVar1 = R25R24R23R22R21R20R19R18._6_1_;
    uVar10 = (uint7)R25R24R23R22R21R20R19R18;
    R25R24R23R22R21R20R19R18 = (ulonglong)(uint7)R25R24R23R22R21R20R19R18;
    if (cVar1 == '\x05') {
      Z = (byte *)0xea5f;
      do {
        Z = (byte *)((int)Z + -1);
      } while (Z != (byte *)0x0);
    }
    else {
      R25R24R23R22R21R20R19R18 = CONCAT62((uint6)(uVar10 >> 0x10),0x1b5);
      cVar1 = '\x7f';
      do {
        cVar2 = cVar1 + -1;
        cVar4 = (byte)R25R24R23R22R21R20R19R18 - (cVar1 == '\0');
        cVar5 = R25R24R23R22R21R20R19R18._1_1_ - ((byte)R25R24R23R22R21R20R19R18 < (cVar1 == '\0'));
        R25R24R23R22R21R20R19R18._0_2_ = (undefined1 *)CONCAT11(cVar5,cVar4);
        cVar1 = cVar2;
      } while ((cVar2 != '\0' || cVar4 != '\0') || cVar5 != '\0');
    }
    R15R14._1_1_ = *(undefined1 *)(Y + 0x42);
    R15R14._0_1_ = *(undefined1 *)(Y + 0x43);
    R25R24R23R22R21R20R19R18._7_1_ = *(undefined1 *)(Y + 0x44);
    Y = Y + 7;
    *(byte *)(iVar8 + 0x46) = R25R24R23R22R21R20R19R18._7_1_;
    R4 = R5;
    R9R8 = R13R12;
    iVar8 = Y;
  } while( true );
}



undefined2 FUN_code_000f7c(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  R1 = 0;
  uVar1 = uMem0016._3_1_ >> 7;
  if ((bool)uVar1) {
    uMem0016._2_2_ = FUN_code_000f88(uMem0016._2_2_);
  }
  uVar2 = CONCAT22(uMem0016._2_2_,(uint)uMem0016);
  if (((uint)uMem0016 & 0x8000) != 0) {
    uVar2 = FUN_code_000f8c(uMem0016._2_2_,(uint)uMem0016);
  }
  uMem0016._2_2_ = (undefined2)((ulong)uVar2 >> 0x10);
  uMem0016._0_2_ = (uint)uVar2;
  FUN_code_000f90(uMem0016._2_2_,(uint)uMem0016);
  uMem0016 = uVar2;
  uVar2 = uMem0016;
  if ((R0 & 0x80) != 0) {
    uVar2 = FUN_code_000f8c(uMem0016._2_2_,(uint)uMem0016);
  }
  uMem0016._2_2_ = (undefined2)((ulong)uVar2 >> 0x10);
  uMem0016._0_2_ = (uint)uVar2;
  if ((bool)uVar1) {
    uMem0016._3_1_ = (byte)((ulong)uVar2 >> 0x18);
    uMem0016._2_1_ = (char)((ulong)uVar2 >> 0x10);
    uMem0016._3_1_ = ~uMem0016._3_1_;
    uMem0016._2_1_ = -uMem0016._2_1_;
    uMem0016._2_2_ = CONCAT11(uMem0016._3_1_ - ((uMem0016._2_1_ != '\0') + -1),uMem0016._2_1_);
    return uMem0016._2_2_;
  }
  return uMem0016._2_2_;
}



undefined2 FUN_code_000f88(undefined2 R25R24)

{
  R1 = 0;
  R25R24._1_1_ = ~R25R24._1_1_;
  R25R24._0_1_ = -(char)R25R24;
  R25R24 = CONCAT11(R25R24._1_1_ - (((char)R25R24 != '\0') + -1),(char)R25R24);
  return R25R24;
}



undefined4 FUN_code_000f8c(undefined2 param_1,undefined2 R23R22)

{
  R1 = 0;
  R23R22._1_1_ = ~R23R22._1_1_;
  R23R22._0_1_ = -(char)R23R22;
  R23R22 = CONCAT11(R23R22._1_1_ - (((char)R23R22 != '\0') + -1),(char)R23R22);
  return CONCAT22(param_1,R23R22);
}



undefined4 FUN_code_000f90(undefined2 R25R24,undefined2 R23R22)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  undefined4 uVar5;
  
  R1 = 0;
  bVar4 = false;
  X = 0;
  R21 = '\x11';
  while( true ) {
    bVar2 = (byte)R25R24 * '\x02' + bVar4;
    bVar4 = CARRY1((byte)R25R24,(byte)R25R24) || CARRY1((byte)R25R24 * '\x02',bVar4);
    bVar3 = R25R24._1_1_ * '\x02' + bVar4;
    bVar4 = CARRY1(R25R24._1_1_,R25R24._1_1_) || CARRY1(R25R24._1_1_ * '\x02',bVar4);
    R25R24 = CONCAT11(bVar3,bVar2);
    R21 = R21 + -1;
    if (R21 == '\0') break;
    bVar2 = (byte)X * '\x02' + bVar4;
    bVar3 = X._1_1_ * '\x02' + (CARRY1((byte)X,(byte)X) || CARRY1((byte)X * '\x02',bVar4));
    X = CONCAT11(bVar3,bVar2);
    bVar1 = (byte)(bVar3 - R23R22._1_1_) < (bVar2 < (byte)R23R22);
    bVar4 = bVar3 < R23R22._1_1_ || bVar1;
    if (bVar3 >= R23R22._1_1_ && !bVar1) {
      bVar4 = bVar3 < R23R22._1_1_ || (byte)(bVar3 - R23R22._1_1_) < (bVar2 < (byte)R23R22);
      X = CONCAT11(bVar3 - (R23R22._1_1_ + (bVar2 < (byte)R23R22)),bVar2 - (byte)R23R22);
    }
  }
  R25R24._0_1_ = ~bVar2;
  R25R24._1_1_ = ~bVar3;
  R23R22 = R25R24;
  uVar5 = CONCAT22(X,R25R24);
  R25R24 = X;
  return uVar5;
}



undefined1 * FUN_code_000fa4(undefined1 *R25R24)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined2 uVar9;
  bool bVar10;
  
  uVar9 = Y;
  puVar6 = R25R24;
  uVar5 = R15R14;
  uVar4 = R13R12;
  uVar3 = R11R10;
  uVar2 = R9R8;
  R1 = 0;
  Y = R25R24;
  FUN_code_001019();
  R9R8 = R19R18;
  R11R10 = R21R20;
  R19R18 = R23R22;
  R21R20 = R25R24;
  X = 0x41a7;
  R25R24 = (undefined1 *)FUN_code_001038();
  R13R12 = R23R22;
  R15R14 = R25R24;
  X = 0xf4ec;
  R21R20 = (undefined1 *)R11R10;
  R19R18 = R9R8;
  R25R24 = (undefined1 *)FUN_code_001046();
  puVar7 = R25R24;
  R25R24._0_1_ = (byte)R23R22;
  R25R24._1_1_ = (byte)((uint)R23R22 >> 8);
  bVar10 = CARRY1(R25R24._1_1_,R13R12._1_1_) ||
           CARRY1(R25R24._1_1_ + R13R12._1_1_,CARRY1((byte)R25R24,(byte)R13R12));
  R25R24 = (undefined1 *)
           CONCAT11(R25R24._1_1_ + R13R12._1_1_ + CARRY1((byte)R25R24,(byte)R13R12),
                    (byte)R25R24 + (byte)R13R12);
  puVar8 = R25R24;
  X._0_1_ = (byte)puVar7;
  bVar1 = (byte)X + (byte)R15R14 + bVar10;
  X._1_1_ = (byte)((uint)puVar7 >> 8);
  X._1_1_ = X._1_1_ + R15R14._1_1_ +
            (CARRY1((byte)X,(byte)R15R14) || CARRY1((byte)X + (byte)R15R14,bVar10));
  X._0_1_ = bVar1;
  if ((X._1_1_ & 0x80) != 0) {
    R25R24 = R25R24 + -1;
    X._1_1_ = X._1_1_ - ((bVar1 < (puVar8 == (undefined1 *)0x0)) + -0x80);
    X._0_1_ = bVar1 - (puVar8 == (undefined1 *)0x0);
  }
  *puVar6 = (byte)R25R24;
  Y[1] = R25R24._1_1_;
  Y[2] = (byte)X;
  Y[3] = X._1_1_;
  R25R24 = (undefined1 *)((uint)R25R24 & 0x7fff);
  Y = (undefined1 *)uVar9;
  R15R14 = (undefined1 *)uVar5;
  R13R12 = uVar4;
  R11R10 = uVar3;
  R9R8 = uVar2;
  return R25R24;
}



undefined1 * FUN_code_000ff0(void)

{
  R1 = 0;
  R25R24 = FUN_code_000fa4(&WDTCSR);
  return R25R24;
}



undefined1 FUN_code_001000(undefined2 R25R24)

{
  byte bVar1;
  
  R1 = 0;
  do {
    bVar1 = EIFR;
  } while ((bVar1 & 2) != 0);
  EECR = R25R24._1_1_;
  GPIOR0 = (undefined1)R25R24;
  bVar1 = EIFR;
  EIFR = bVar1 | 1;
  R25R24._1_1_ = 0;
  R25R24._0_1_ = EIMSK;
  return (undefined1)R25R24;
}



int FUN_code_001008(int R25R24,byte R22)

{
  byte bVar1;
  char in_Hflg;
  char in_Tflg;
  char in_Iflg;
  
  R1 = 0;
  R18 = R22;
  do {
    bVar1 = EIFR;
  } while ((bVar1 & 2) != 0);
  EECR = R25R24._1_1_;
  GPIOR0 = (undefined1)R25R24;
  bVar1 = EIFR;
  EIFR = bVar1 | 1;
  R25R24 = R25R24 + -1;
  R0 = EIMSK;
  if (R0 != R22) {
    EIMSK = R22;
    R0 = R0 < R22 | ((char)(R0 - R22) < '\0') << 2 | SBORROW1(R0,R22) << 3 |
         ((char)R0 < (char)R22) << 4 | (in_Hflg == '\x01') << 5 | (in_Tflg == '\x01') << 6 |
         (in_Iflg == '\x01') << 7;
    bVar1 = EIFR;
    EIFR = bVar1 | 4;
    bVar1 = EIFR;
    EIFR = bVar1 | 2;
    SREG = R0;
  }
  return R25R24;
}



void FUN_code_001019(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  
  R1 = 0;
  uVar4 = uMem0016._3_1_ >> 7;
  if ((bool)uVar4) {
    uMem0016 = FUN_code_001030(uMem0016._2_2_,(undefined2)uMem0016);
    _R25R24R23R22R21R20R19R18 = CONCAT44(uMem0016,R25R24R23R22R21R20R19R18);
  }
  if ((_R25R24R23R22R21R20R19R18 & 0x80000000) != 0) {
    uVar1 = (undefined2)R25R24R23R22R21R20R19R18;
    uVar2 = R25R24R23R22R21R20R19R18._2_2_;
    uVar3 = (undefined2)uMem0016;
    uMem0016._2_2_ = FUN_code_001028(uMem0016._2_2_,uVar3,uVar2,uVar1);
  }
  _R25R24R23R22R21R20R19R18 =
       FUN_code_00104b(uMem0016._2_2_,(undefined2)uMem0016,R25R24R23R22R21R20R19R18._2_2_,
                       (undefined2)R25R24R23R22R21R20R19R18);
  if ((R0 & 0x80) != 0) {
    uVar1 = (undefined2)R25R24R23R22R21R20R19R18;
    uVar2 = R25R24R23R22R21R20R19R18._2_2_;
    uVar3 = (undefined2)uMem0016;
    uMem0016._2_2_ = FUN_code_001028(uMem0016._2_2_,uVar3,uVar2,uVar1);
  }
  if ((bool)uVar4) {
    uMem0016 = FUN_code_001030(uMem0016._2_2_,(undefined2)uMem0016);
    _R25R24R23R22R21R20R19R18 = CONCAT44(uMem0016,R25R24R23R22R21R20R19R18);
    return;
  }
  return;
}



undefined8
FUN_code_001028(undefined2 param_1,undefined2 param_2,undefined2 R21R20,undefined2 R19R18)

{
  bool bVar1;
  
  R1 = 0;
  R21R20._1_1_ = ~R21R20._1_1_;
  R21R20._0_1_ = ~(byte)R21R20;
  R19R18._1_1_ = ~R19R18._1_1_;
  R19R18._0_1_ = -(char)R19R18;
  bVar1 = R19R18._1_1_ != 0xff || (byte)(R19R18._1_1_ + 1) < ((char)R19R18 != '\0');
  R19R18 = CONCAT11(R19R18._1_1_ - (((char)R19R18 != '\0') + -1),(char)R19R18);
  R21R20 = CONCAT11(R21R20._1_1_ - (((byte)R21R20 != 0xff || (byte)((byte)R21R20 + 1) < bVar1) + -1)
                    ,(byte)R21R20 - (bVar1 + -1));
  _R19R18 = CONCAT26(param_1,CONCAT24(param_2,CONCAT22(R21R20,R19R18)));
  return _R19R18;
}



undefined4 FUN_code_001030(undefined2 R25R24,undefined2 R23R22)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  bool bVar5;
  
  uVar4 = R25R24;
  R1 = 0;
  R25R24._1_1_ = ~R25R24._1_1_;
  R25R24._0_1_ = (byte)uVar4;
  R25R24._0_1_ = ~(byte)R25R24;
  R23R22._1_1_ = ~R23R22._1_1_;
  R23R22._0_1_ = -(char)R23R22;
  bVar5 = R23R22._1_1_ != 0xff || (byte)(R23R22._1_1_ + 1) < ((char)R23R22 != '\0');
  R23R22 = CONCAT11(R23R22._1_1_ - (((char)R23R22 != '\0') + -1),(char)R23R22);
  bVar1 = (byte)R25R24 + 1;
  cVar2 = (byte)R25R24 - (bVar5 + -1);
  bVar3 = (byte)R25R24 != 0xff;
  _R23R22 = CONCAT13(R25R24._1_1_ - ((bVar3 || bVar1 < bVar5) + -1),CONCAT12(cVar2,R23R22));
  return _R23R22;
}



undefined2 FUN_code_001038(void)

{
  R1R0 = (uint)(byte)R1R0;
  FUN_code_00106d();
  R1R0 = (uint)Xlo * (uint)R20;
  R25R24 = CONCAT11(R25R24._1_1_ + Xlo * R21 + Xhi * R20 + R1R0._1_1_ +
                    CARRY1((byte)R25R24,(byte)R1R0),(byte)R25R24 + (byte)R1R0);
  R1R0 = R1R0 & 0xff;
  return R25R24;
}



undefined2 FUN_code_001046(void)

{
  R1 = 0;
  R25R24 = FUN_code_001038();
  R25R24 = CONCAT11(R25R24._1_1_ - (R19 + ((byte)R25R24 < R18)),(byte)R25R24 - R18);
  return R25R24;
}



undefined8 FUN_code_00104b(undefined2 R25R24,undefined2 R23R22,undefined2 R21R20,undefined2 R19R18)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
  
  R1 = '!';
  bVar10 = false;
  Xlo = 0;
  Xhi = 0;
  Zlo = 0;
  Zhi = 0;
  while( true ) {
    bVar6 = (byte)R23R22 * '\x02' + bVar10;
    bVar10 = CARRY1((byte)R23R22,(byte)R23R22) || CARRY1((byte)R23R22 * '\x02',bVar10);
    bVar7 = R23R22._1_1_ * '\x02' + bVar10;
    bVar10 = CARRY1(R23R22._1_1_,R23R22._1_1_) || CARRY1(R23R22._1_1_ * '\x02',bVar10);
    bVar8 = (byte)R25R24 * '\x02' + bVar10;
    bVar10 = CARRY1((byte)R25R24,(byte)R25R24) || CARRY1((byte)R25R24 * '\x02',bVar10);
    bVar9 = R25R24._1_1_ * '\x02' + bVar10;
    bVar10 = CARRY1(R25R24._1_1_,R25R24._1_1_) || CARRY1(R25R24._1_1_ * '\x02',bVar10);
    R1 = R1 + -1;
    if (R1 == '\0') break;
    bVar2 = Xlo * '\x02' + bVar10;
    bVar10 = CARRY1(Xlo,Xlo) || CARRY1(Xlo * '\x02',bVar10);
    bVar3 = Xhi * '\x02' + bVar10;
    bVar10 = CARRY1(Xhi,Xhi) || CARRY1(Xhi * '\x02',bVar10);
    bVar4 = Zlo * '\x02' + bVar10;
    bVar5 = Zhi * '\x02' + (CARRY1(Zlo,Zlo) || CARRY1(Zlo * '\x02',bVar10));
    bVar1 = (byte)(bVar5 - R21R20._1_1_) <
            (bVar4 < (byte)R21R20 ||
            (byte)(bVar4 - (byte)R21R20) <
            (bVar3 < R19R18._1_1_ || (byte)(bVar3 - R19R18._1_1_) < (bVar2 < (byte)R19R18)));
    bVar10 = bVar5 < R21R20._1_1_ || bVar1;
    R23R22._0_1_ = bVar6;
    R23R22._1_1_ = bVar7;
    R25R24._0_1_ = bVar8;
    R25R24._1_1_ = bVar9;
    Xlo = bVar2;
    Xhi = bVar3;
    Zlo = bVar4;
    Zhi = bVar5;
    if (bVar5 >= R21R20._1_1_ && !bVar1) {
      Xlo = bVar2 - (byte)R19R18;
      Xhi = bVar3 - (R19R18._1_1_ + (bVar2 < (byte)R19R18));
      bVar10 = bVar3 < R19R18._1_1_ || (byte)(bVar3 - R19R18._1_1_) < (bVar2 < (byte)R19R18);
      Zlo = bVar4 - ((byte)R21R20 + bVar10);
      bVar10 = bVar4 < (byte)R21R20 || (byte)(bVar4 - (byte)R21R20) < bVar10;
      Zhi = bVar5 - (R21R20._1_1_ + bVar10);
      bVar10 = bVar5 < R21R20._1_1_ || (byte)(bVar5 - R21R20._1_1_) < bVar10;
    }
  }
  R23R22._0_1_ = ~bVar6;
  bVar6 = (byte)R23R22;
  R23R22._1_1_ = ~bVar7;
  bVar7 = R23R22._1_1_;
  R25R24._0_1_ = ~bVar8;
  bVar8 = (byte)R25R24;
  R25R24._1_1_ = ~bVar9;
  bVar9 = R25R24._1_1_;
  R19R18._0_1_ = (byte)R23R22;
  R19R18._1_1_ = R23R22._1_1_;
  R21R20._0_1_ = (byte)R25R24;
  R21R20._1_1_ = R25R24._1_1_;
  R23R22._0_1_ = Xlo;
  R23R22._1_1_ = Xhi;
  R25R24._0_1_ = Zlo;
  R25R24._1_1_ = Zhi;
  return CONCAT17(Zhi,CONCAT16(Zlo,CONCAT15(Xhi,CONCAT14(Xlo,CONCAT13(bVar9,CONCAT12(bVar8,CONCAT11(
                                                  bVar7,bVar6)))))));
}



undefined4 FUN_code_00106d(void)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  
  R1R0 = (uint)Xlo * (uint)R18;
  iVar6 = R1R0;
  R1R0 = (uint)Xhi * (uint)R19;
  iVar7 = R1R0;
  R1R0 = (uint)Xlo * (uint)R19;
  R23R22._1_1_ = (byte)((uint)iVar6 >> 8);
  bVar5 = R23R22._1_1_ + (byte)R1R0;
  bVar8 = CARRY1(R23R22._1_1_,(byte)R1R0);
  R25R24._0_1_ = (byte)iVar7;
  bVar2 = (byte)R25R24 + R1R0._1_1_ + bVar8;
  bVar3 = CARRY1((byte)R25R24,R1R0._1_1_);
  R25R24._0_1_ = (byte)R25R24 + R1R0._1_1_;
  R25R24._1_1_ = (char)((uint)iVar7 >> 8);
  R1R0 = (uint)Xhi * (uint)R18;
  bVar9 = CARRY1(bVar5,(byte)R1R0);
  R23R22 = CONCAT11(bVar5 + (byte)R1R0,(char)iVar6);
  cVar1 = bVar2 + R1R0._1_1_;
  bVar4 = CARRY1(bVar2,R1R0._1_1_);
  bVar2 = bVar2 + R1R0._1_1_;
  R1R0 = R1R0 & 0xff;
  R25R24 = CONCAT11(R25R24._1_1_ + (bVar3 || CARRY1((byte)R25R24,bVar8)) +
                    (bVar4 || CARRY1(bVar2,bVar9)),cVar1 + bVar9);
  return CONCAT22(R25R24,R23R22);
}



void FUN_code_00107c(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}


