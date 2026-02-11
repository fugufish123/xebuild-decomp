
bool __cdecl FUN_00420d80(char *param_1,char *param_2,void *param_3,size_t param_4)

{
  FILE *_File;
  size_t sVar1;
  char local_40c [1024];
  
  if ((param_2 != (char *)0x0 && param_3 != (void *)0x0) && (param_1 != (char *)0x0)) {
    strcpy(local_40c,param_1);
    strcat(local_40c,param_2);
    if (param_4 != 0) {
      _File = fopen(local_40c,"wb");
      if (_File != (FILE *)0x0) {
        sVar1 = fwrite(param_3,param_4,1,_File);
        fclose(_File);
        return sVar1 == 1;
      }
    }
  }
  return false;
}

