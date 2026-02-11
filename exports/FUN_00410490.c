
int FUN_00410490(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(DAT_00479ed8 + 0x70);
  iVar2 = (uVar1 >> 0x18) + uVar1 * 0x1000000 + (uVar1 & 0xff00) * 0x100 + (uVar1 >> 8 & 0xff00);
  if (iVar2 == 0) {
    iVar2 = 0x10000;
  }
  return iVar2;
}

