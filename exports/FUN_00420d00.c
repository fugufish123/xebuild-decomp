
bool __cdecl FUN_00420d00(char *param_1,void *param_2,size_t param_3)

{
  FILE *_File;
  size_t sVar1;
  
  if ((param_1 != (char *)0x0 && param_3 != 0) && (param_2 != (void *)0x0)) {
    _File = fopen(param_1,"wb");
    if (_File != (FILE *)0x0) {
      sVar1 = fwrite(param_2,param_3,1,_File);
      fclose(_File);
      return sVar1 == 1;
    }
  }
  return false;
}

