
uint FUN_00410220(void) // align_up_16k()

{
  uint mask;
  
  mask = DAT_004cd840;
  if ((DAT_004cd840 & 0x3fff) != 0) {
    mask = (DAT_004cd840 + 0x4000) - (DAT_004cd840 & 0x3fff);
  }
  return mask;
}

