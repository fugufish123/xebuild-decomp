
undefined4 FUN_00447a00(void)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  
  uVar2 = 0;
  if (IMAGE_DOS_HEADER_00400000.e_magic == (char  [2])0x5a4d) {
    bVar1 = FUN_00447880();
    uVar2 = extraout_EDX;
    if (CONCAT31(extraout_var,bVar1) != 0) {
      return (uint)*(ushort *)
                    (IMAGE_DOS_HEADER_00400000.e_magic + IMAGE_DOS_HEADER_00400000.e_lfanew + 6);
    }
  }
  return uVar2;
}

