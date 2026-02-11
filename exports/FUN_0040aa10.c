
char * __cdecl FUN_0040aa10(char *param_1)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  size_t sVar5;
  char *local_28;
  
  iVar2 = DAT_004c97ac;
  iVar1 = DAT_004c93a4;
  if (DAT_004c97ac != 0) {
    sVar3 = strlen(param_1);
    if (0 < (int)(iVar2 - sVar3)) {
      local_28 = (char *)(iVar1 + sVar3);
      iVar4 = 0;
      do {
        if ((uint)*(byte *)(iVar1 + iVar4) == (int)*param_1) {
          sVar5 = 0;
          if (0 < (int)sVar3) {
            while (sVar5 = sVar5 + 1, (int)sVar5 < (int)sVar3) {
              if ((uint)*(byte *)(iVar1 + sVar5 + iVar4) != (int)param_1[sVar5]) {
                sVar5 = sVar3 + 1;
              }
            }
          }
          if ((sVar3 == sVar5) && (*local_28 != '\0')) {
            if (sVar3 + iVar4 == -1) {
              return (char *)0x0;
            }
            return local_28;
          }
        }
        iVar4 = iVar4 + 1;
        local_28 = local_28 + 1;
        if (iVar4 == iVar2 - sVar3) {
          return (char *)0x0;
        }
      } while( true );
    }
  }
  return (char *)0x0;
}

