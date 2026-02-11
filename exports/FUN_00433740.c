
void FUN_00433740(void)

{
  FILE *_File;
  
  _File = fopen("build.log","wb");
  if (_File != (FILE *)0x0) {
    fclose(_File);
    return;
  }
  printf("could not initialize temp log file at \'%s\', logging disabled!\n","build.log");
  DAT_00479aa0 = 1;
  return;
}

