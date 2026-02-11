
undefined4 __cdecl FUN_00412230(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0x3000000;
  uVar1 = DAT_00479ed8;
  if ((DAT_00479ea4._3_1_ & 0x10) == 0) {
    iVar2 = DAT_00479ee4 * 0x4200;
    uVar1 = DAT_00479ee0;
  }
  *param_1 = iVar2;
  return uVar1;
}

