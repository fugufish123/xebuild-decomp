
int FUN_00410460(void) // byte_swap32()

{
  uint original_word;

  original_word = *(uint *)(DAT_00479ed8 + 100);
   return ((original_word >> 24) & 0xFF) | ((original_word >> 8) & 0xFF00) | ((original_word << 8) & 0xFF0000) | ((original_word << 24) & 0xFF000000);
}

