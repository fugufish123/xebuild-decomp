
void __cdecl FUN_0041aa00(int param_1)

{
  FUN_00439eb0();
  if (param_1 == 0) {
    if ((char)DAT_00479570 != '\0') {
      return;
    }
    if (DAT_00479570._1_1_ != '\0') {
      return;
    }
    if (DAT_00479572 == '\0') {
      FUN_00433690(1,"initializing static pairing value\n");
      DAT_00479570._0_1_ = 0x23;
      DAT_00479570._1_1_ = 0x45;
      DAT_00479572 = 0xf1;
      return;
    }
  }
  else {
    FUN_00433690(1,"initializing random nonces\n");
    FUN_004346c0((byte *)&DAT_0044a6a4,0x10);
    FUN_004346c0((byte *)&DAT_0044a694,0x10);
    FUN_004346c0((byte *)&DAT_0044a684,0x10);
    FUN_004346c0((byte *)&DAT_0044a674,0x10);
    FUN_004346c0((byte *)&DAT_0044a664,0x10);
    FUN_004346c0((byte *)&DAT_0044a654,0x10);
    FUN_004346c0((byte *)&DAT_0044a64c,8);
    FUN_004346c0((byte *)&DAT_0044a644,8);
    FUN_004346c0((byte *)&DAT_0044a640,4);
    FUN_004346c0((byte *)&DAT_0044a620,0x20);
    FUN_004346c0((byte *)&DAT_0044a600,0x20);
    FUN_004346c0((byte *)&DAT_0044a5e0,8);
    if ((char)DAT_00479570 != '\0') {
      return;
    }
    if (DAT_00479570._1_1_ != '\0') {
      return;
    }
  }
  if (DAT_00479572 != '\0') {
    return;
  }
  FUN_004346c0((byte *)&DAT_00479570,3);
  return;
}

