
uint __cdecl FUN_0040acf0(char *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  size_t sVar5;
  int iVar6;
  byte *local_34;
  
  iVar2 = DAT_004c97ac;
  iVar1 = DAT_004c93a4;
  if (DAT_004c97ac != 0) {
    sVar3 = strlen(param_1);
    if (0 < (int)(iVar2 - sVar3)) {
      local_34 = (byte *)(iVar1 + sVar3);
      iVar6 = 0;
      do {
        if ((uint)*(byte *)(iVar1 + iVar6) == (int)*param_1) {
          sVar5 = 0;
          if (0 < (int)sVar3) {
            while (sVar5 = sVar5 + 1, (int)sVar5 < (int)sVar3) {
              if ((uint)*(byte *)(iVar1 + iVar6 + sVar5) != (int)param_1[sVar5]) {
                sVar5 = sVar3 + 1;
              }
            }
          }
          if ((sVar3 == sVar5) && (*local_34 != 0)) {
            if (sVar3 + iVar6 == -1) {
              return param_2;
            }
            uVar4 = FUN_00421860(local_34,param_2);
            return uVar4;
          }
        }
        iVar6 = iVar6 + 1;
        local_34 = local_34 + 1;
      } while (iVar6 != iVar2 - sVar3);
    }
  }
  return param_2;
}

