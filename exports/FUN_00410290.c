
uint __cdecl FUN_00410290(uint param_1)

{
  int iVar1;
  
  iVar1 = DAT_00479ed8;
  if (param_1 < 0x3801) {
    *(uint *)(DAT_00479ed8 + 0x78) = (param_1 & 0xff00) * 0x100 + param_1 * 0x1000000;
    *(uint *)(iVar1 + 0x7c) = (0x4000 - param_1 & 0xff00) * 0x100 + param_1 * -0x1000000;
    FUN_00433690(1,"reset smc load address to 0x%x size 0x%x\n");
    return 0x4000 - param_1;
  }
  FUN_00433690(0,"\n***** ERROR: SMC size 0x%x not supported!!!\n\n");
  return 0;
}

