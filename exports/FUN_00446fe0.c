
void FUN_00446fe0(char *param_1)

{
  fwrite("Mingw-w64 runtime failure:\n",1,0x1b,(FILE *)(_iob_exref + 0x40));
  vfprintf((FILE *)(_iob_exref + 0x40),param_1,&stack0x00000008);
                    /* WARNING: Subroutine does not return */
  abort();
}

