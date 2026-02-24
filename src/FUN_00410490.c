
int FUN_00410490(void) // read_u32_be_or_default()

{
  uint raw_u32;
  int swapped_u32;
  
  raw_u32 = *(uint *)(DAT_00479ed8 + 0x70);
  swapped_u32 = (raw_u32 >> 0x18) + raw_u32 * 0x1000000 + (raw_u32 & 0xff00) * 0x100 + (raw_u32 >> 8 & 0xff00);
  if (swapped_u32 == 0) {
    swapped_u32 = 0x10000;
  }
  return swapped_u32;
}

