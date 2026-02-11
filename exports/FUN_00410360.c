
uint __cdecl FUN_00410360(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = DAT_00479ed8;
  if (param_1 == 0) {
    param_1 = DAT_004cd840;
  }
  if (DAT_00479ef0 == 0) {
    uVar5 = param_1 + 0x3fffU & 0xffffc000;
  }
  else {
    uVar5 = param_1 + 0x1ffffU & 0xfffe0000;
    if (DAT_00479ea8 == 1) {
      uVar1 = *(uint *)(DAT_00479ed8 + 0x70);
      iVar3 = (uVar1 >> 0x18) + uVar1 * 0x1000000 + (uVar1 & 0xff00) * 0x100 + (uVar1 >> 8 & 0xff00)
      ;
      iVar4 = 0x20000;
      if (iVar3 != 0) {
        iVar4 = iVar3 * 2;
      }
      DAT_00479ece = (undefined1)(iVar4 + uVar5 >> 0x11);
    }
  }
  iVar3 = ((uVar5 & 0xff00) << 8 | uVar5 >> 8 & 0xff00) + (uVar5 >> 0x18);
  *(int *)(DAT_00479ed8 + 100) = iVar3;
  *(int *)(iVar2 + 0xc) = iVar3;
  FUN_00433690(1,"patch slot offset reset to: 0x%x\n");
  return uVar5;
}

