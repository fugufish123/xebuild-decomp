
undefined1 FUN_00413370(void)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 uVar4;
  
  uVar4 = 0;
  if (DAT_004709ec != 0) {
    sVar1 = *(ushort *)(DAT_004709f0 + 0x1c) * 0x100;
    uVar2 = *(ushort *)(DAT_004709f0 + 0x1c) >> 8;
    uVar3 = uVar2 + sVar1;
    if ((uVar3 == 0) || ((uVar4 = 2, (uVar3 & 0x300) == 0 && (uVar4 = 1, (uVar3 & 0x20) == 0)))) {
      uVar4 = (sVar1 + uVar2 & 0x120) != 0;
    }
  }
  return uVar4;
}

