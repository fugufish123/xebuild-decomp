
void __cdecl FUN_004183d0(char *param_1)

{
  FILE *_File;
  char local_20c [516];
  
  _vsnprintf(local_20c,0x200,param_1,&stack0x00000008);
  printf(local_20c);
  _File = fopen(&DAT_00479160,"a");
  if (_File != (FILE *)0x0) {
    fprintf(_File,local_20c);
    fclose(_File);
  }
  return;
}

