
undefined4 __cdecl FUN_00418ee0(void *param_1,char *param_2,char *param_3)

{
  FILE *_File;
  size_t sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 local_41c;
  undefined2 local_41a;
  undefined4 local_418 [258];
  
  local_41c = DAT_00455500;
  local_41a = 0;
  puVar3 = local_418;
  for (iVar2 = 0xff; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (param_2 != (char *)0x0) {
    strcpy((char *)&local_41c,param_2);
  }
  strcat((char *)&local_41c,param_3);
  _File = fopen((char *)&local_41c,"rb");
  if (_File != (FILE *)0x0) {
    FUN_00433690(1,"loading %s from %s\n");
    sVar1 = fread(param_1,0x20,1,_File);
    fclose(_File);
    if (sVar1 == 1) {
      *(undefined1 *)((int)param_1 + 0x20) = 0;
      return 1;
    }
  }
  return 0;
}

