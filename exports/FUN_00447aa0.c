
undefined4 FUN_00447aa0(void)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 extraout_EDX;
  undefined4 uVar2;
  
  if (IMAGE_DOS_HEADER_00400000.e_magic != (char  [2])0x5a4d) {
    return 0;
  }
  bVar1 = FUN_00447880();
  uVar2 = extraout_EDX;
  if (CONCAT31(extraout_var,bVar1) != 0) {
    uVar2 = 0x400000;
  }
  return uVar2;
}

