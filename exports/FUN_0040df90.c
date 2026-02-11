
void __cdecl FUN_0040df90(char *param_1)

{
  char *pcVar1;
  int iVar2;
  char local_110 [268];
  
  if (param_1 != (char *)0x0) {
    strcpy(local_110,param_1);
    pcVar1 = strrchr(local_110,0x2f);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = strrchr(local_110,0x5c);
      if (pcVar1 == (char *)0x0) {
        return;
      }
    }
    *pcVar1 = '\0';
    iVar2 = _chdir(local_110);
    if (iVar2 == 0) {
      FUN_00433690(0,"base path changed to %s\n");
      return;
    }
  }
  return;
}

