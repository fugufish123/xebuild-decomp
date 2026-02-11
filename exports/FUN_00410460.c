
int FUN_00410460(void)

{
  uint uVar1;
  
  uVar1 = *(uint *)(DAT_00479ed8 + 100);
  return (uVar1 & 0xff00) * 0x100 + (uVar1 >> 0x18) + uVar1 * 0x1000000 + (uVar1 >> 8 & 0xff00);
}

