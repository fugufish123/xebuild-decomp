
uint FUN_00410220(void)

{
  uint uVar1;
  
  uVar1 = DAT_004cd840;
  if ((DAT_004cd840 & 0x3fff) != 0) {
    uVar1 = (DAT_004cd840 + 0x4000) - (DAT_004cd840 & 0x3fff);
  }
  return uVar1;
}

