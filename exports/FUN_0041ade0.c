
bool __cdecl FUN_0041ade0(uint param_1)

{
  bool bVar1;
  
  bVar1 = (param_1 & 0xffffff) != 0;
  if (bVar1) {
    DAT_00479572 = (undefined1)param_1;
    DAT_00479570._0_1_ = (undefined1)(param_1 >> 0x10);
    DAT_00479570._1_1_ = (undefined1)(param_1 >> 8);
    FUN_00433690(1,"pairing set to: %02x %02x %02x\n");
  }
  return bVar1;
}

