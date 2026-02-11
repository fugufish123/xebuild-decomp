
int __cdecl FUN_00448820(char *param_1,undefined4 *param_2)

{
  size_t _Size;
  char *pcVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (param_1 == (char *)0x0) {
    param_1 = (char *)0x0;
  }
  else {
    cVar4 = *param_1;
    if (((cVar4 != '\0') && (_Size = strlen(param_1), 1 < (int)_Size)) &&
       ((1 < _Size - 2 || (param_1[1] != ':')))) {
      if (((cVar4 == '\\') || (cVar4 == '/')) && ((param_1[1] == '\\' || (param_1[1] == '/')))) {
        pcVar1 = param_1 + 2;
        cVar4 = param_1[2];
        while ((cVar4 != '\0' && (cVar4 != '\\'))) {
          if (cVar4 == '/') goto LAB_00448976;
          pcVar1 = pcVar1 + 1;
          cVar4 = *pcVar1;
        }
        if (cVar4 != '\0') {
LAB_00448976:
          pcVar1 = pcVar1 + 1;
        }
        cVar4 = *pcVar1;
        if (cVar4 != '\0') {
          if (cVar4 != '\\') {
            do {
              if (cVar4 == '/') goto LAB_004489ac;
              pcVar1 = pcVar1 + 1;
              cVar4 = *pcVar1;
            } while ((cVar4 != '\0') && (cVar4 != '\\'));
            if (cVar4 == '\0') goto LAB_004488e2;
          }
LAB_004489ac:
          if (pcVar1[1] != '\0') goto LAB_0044887c;
        }
      }
      else {
LAB_0044887c:
        if ((param_1[_Size - 1] == '/') || (param_1[_Size - 1] == '\\')) {
          pcVar1 = (char *)malloc(_Size);
          memcpy(pcVar1,param_1,_Size - 1);
          pcVar1[_Size - 1] = '\0';
          iVar2 = stat(pcVar1,&local_40);
          if (param_1 != pcVar1) {
            free(pcVar1);
          }
          goto LAB_004488f4;
        }
      }
    }
  }
LAB_004488e2:
  iVar2 = stat(param_1,&local_40);
LAB_004488f4:
  if (iVar2 == -1) {
    *param_2 = 0;
    param_2[8] = 0;
    puVar5 = (undefined4 *)((uint)(param_2 + 1) & 0xfffffffc);
    for (uVar3 = (uint)((int)param_2 + (0x24 - (int)((uint)(param_2 + 1) & 0xfffffffc))) >> 2;
        uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    *param_2 = local_40;
    param_2[1] = local_3c;
    param_2[2] = local_38;
    param_2[3] = local_34;
    param_2[4] = local_30;
    param_2[5] = local_2c;
    param_2[6] = local_28;
    param_2[7] = local_24;
    param_2[8] = local_20;
  }
  return iVar2;
}

