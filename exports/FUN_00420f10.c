
undefined4 __cdecl FUN_00420f10(char *param_1,char *param_2,int param_3)

{
  byte *pbVar1;
  FILE *_File;
  uint uVar2;
  int iVar3;
  int iVar4;
  char local_41c [1036];
  
  if ((param_2 != (char *)0x0 && param_3 != 0) && (param_1 != (char *)0x0)) {
    strcpy(local_41c,param_1);
    strcat(local_41c,param_2);
    _File = fopen(local_41c,"wb");
    if (_File != (FILE *)0x0) {
      uVar2 = 0;
      iVar3 = 0;
      do {
        iVar4 = iVar3;
        if ((uVar2 & 7) == 0) {
          iVar4 = iVar3 + 1;
          fprintf(_File,"\nfuseset %02d: ",iVar3);
        }
        pbVar1 = (byte *)(param_3 + uVar2);
        uVar2 = uVar2 + 1;
        fprintf(_File,"%02X",(uint)*pbVar1);
        iVar3 = iVar4;
      } while (uVar2 != 0x60);
      fputc(10,_File);
      fclose(_File);
      return 1;
    }
  }
  return 0;
}

