
void FUN_004337a0(void)

{
  FILE *_File;
  
  if ((DAT_00479aa0 == 0) && (DAT_00479aa0 = 1, DAT_004796a0 != '\0')) {
    _File = fopen("build.log","rb");
    if (_File != (FILE *)0x0) {
      fclose(_File);
      rename("build.log",&DAT_004796a0);
    }
    return;
  }
  return;
}

