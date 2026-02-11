
void __cdecl FUN_004112b0(uint param_1)

{
  short *psVar1;
  int iVar2;
  
  if (param_1 >> 0xe != 0) {
    iVar2 = (param_1 >> 0xe) - DAT_00479efc;
    psVar1 = (short *)((int)&DAT_004cb7c0 + DAT_00479efc * -2);
    do {
      if (*psVar1 != -0x4e1) {
        *psVar1 = -0x4e1;
      }
      psVar1 = psVar1 + 1;
    } while (psVar1 != (short *)((int)&DAT_004cb7c0 + iVar2 * 2));
  }
  return;
}

