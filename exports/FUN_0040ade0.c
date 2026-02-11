
byte * __cdecl FUN_0040ade0(char *param_1)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  byte *local_30;
  
  iVar1 = DAT_004c97ac;
  iVar3 = DAT_004c93a4;
  if (DAT_004c97ac != 0) {
    sVar2 = strlen(param_1);
    if (0 < (int)(iVar1 - sVar2)) {
      local_30 = (byte *)(iVar3 + sVar2);
      iVar5 = 0;
      do {
        if ((uint)*(byte *)(iVar3 + iVar5) == (int)*param_1) {
          sVar4 = 0;
          if (0 < (int)sVar2) {
            while (sVar4 = sVar4 + 1, (int)sVar4 < (int)sVar2) {
              if ((uint)*(byte *)(iVar3 + iVar5 + sVar4) != (int)param_1[sVar4]) {
                sVar4 = sVar2 + 1;
              }
            }
          }
          if (sVar2 == sVar4) {
            if (*local_30 != 0) {
              if (sVar2 + iVar5 == -1) {
                return (byte *)0x0;
              }
              if ((*local_30 == 0x30) &&
                 (iVar3 = FUN_00421840((int)(char)local_30[1]), (char)iVar3 == 'x')) {
                iVar3 = FUN_00422350(local_30 + 2);
                if (iVar3 != 0) {
                  return (byte *)0x0;
                }
                return local_30;
              }
              iVar3 = FUN_00422350(local_30);
              if (iVar3 != 0) {
                return (byte *)0x0;
              }
              return local_30;
            }
          }
        }
        iVar5 = iVar5 + 1;
        local_30 = local_30 + 1;
      } while (iVar5 != iVar1 - sVar2);
    }
  }
  return (byte *)0x0;
}

