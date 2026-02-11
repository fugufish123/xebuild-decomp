
void __cdecl FUN_00433570(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 3;
  if (-1 < (int)param_1) {
    if (uVar1 == 3) {
      uVar1 = 2;
    }
    DAT_00479aa4 = uVar1;
    return;
  }
  DAT_00479aa0 = 1;
  return;
}

