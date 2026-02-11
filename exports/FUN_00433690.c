
void __cdecl FUN_00433690(uint param_1,char *param_2)

{
  FILE *_File;
  char local_20c [516];
  
  _vsnprintf(local_20c,0x200,param_2,&stack0x0000000c);
  if (param_1 <= DAT_00479aa4) {
    printf(local_20c);
  }
  if ((param_1 < 3) && (DAT_00479aa0 == 0)) {
    _File = fopen("build.log","a");
    if (_File != (FILE *)0x0) {
      fprintf(_File,local_20c);
      fclose(_File);
      return;
    }
  }
  return;
}

