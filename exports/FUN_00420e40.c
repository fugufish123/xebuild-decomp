
undefined4 __cdecl FUN_00420e40(char *param_1,char *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  FILE *_File;
  char local_40c [1024];
  
  if ((param_2 != (char *)0x0 && param_3 != (byte *)0x0) && (param_1 != (char *)0x0)) {
    strcpy(local_40c,param_1);
    strcat(local_40c,param_2);
    _File = fopen(local_40c,"wb");
    if (_File != (FILE *)0x0) {
      pbVar1 = param_3 + 0x10;
      do {
        bVar2 = *param_3;
        param_3 = param_3 + 1;
        fprintf(_File,"%02X",(uint)bVar2);
      } while (param_3 != pbVar1);
      fputc(10,_File);
      fclose(_File);
      return 1;
    }
  }
  return 0;
}

