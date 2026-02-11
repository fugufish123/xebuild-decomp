
int __cdecl FUN_00408fe0(char *param_1,int param_2)

{
  int iVar1;
  size_t _Size;
  void *_Dst;
  int iVar2;
  char cVar3;
  size_t _Size_00;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int local_30;
  
  _Size = param_2 + 1;
  _Dst = malloc(_Size);
  memcpy(_Dst,param_1,_Size);
  iVar6 = param_2;
  if (param_2 < 1) {
    memcpy(_Dst,param_1,_Size);
LAB_004092e6:
    memcpy(_Dst,param_1,_Size);
  }
  else {
    local_30 = 0;
LAB_0040903d:
    do {
      if (param_1[local_30] == ';') {
        iVar2 = local_30 + 1;
        cVar3 = param_1[iVar2];
        if ((cVar3 == -1 || cVar3 == '\n') || (iVar6 <= iVar2)) {
          iVar5 = 0;
          iVar4 = iVar2;
        }
        else {
          iVar5 = 0;
          iVar1 = local_30 + 2;
          do {
            iVar4 = iVar1;
            iVar5 = iVar5 + 1;
            if (param_1[iVar4] == '\n' || param_1[iVar4] == -1) break;
            iVar1 = iVar4 + 1;
          } while (iVar4 < iVar6);
        }
        _Size_00 = (iVar6 - iVar2) - iVar5;
        if ((int)_Size_00 < 1) {
          local_30 = local_30 + 2;
          if (iVar6 <= local_30) break;
          goto LAB_0040903d;
        }
        iVar6 = iVar6 - iVar5;
        memcpy(param_1 + iVar2,(void *)(iVar4 + (int)_Dst),_Size_00);
        memcpy(_Dst,param_1,_Size);
      }
      local_30 = local_30 + 1;
    } while (local_30 < iVar6);
    if (iVar6 < 1) goto LAB_00409256;
    pcVar7 = param_1;
    do {
      cVar3 = 'A';
      iVar2 = 0;
      while (*pcVar7 != cVar3) {
        if (iVar2 + 1 == 0x4a) {
          *pcVar7 = ' ';
          break;
        }
        cVar3 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789.,;[]_\n\\/-$:xenon"
                [iVar2 + 1];
        iVar2 = iVar2 + 1;
      }
      pcVar7 = pcVar7 + 1;
    } while (param_1 + iVar6 != pcVar7);
    iVar2 = 0;
    pcVar7 = param_1;
    do {
      while ((*pcVar7 == ';' && (((iVar2 == 0 || (pcVar7[-1] == '\n')) || (pcVar7[1] == '\n'))))) {
        iVar2 = iVar2 + 1;
        *pcVar7 = ' ';
        pcVar7 = pcVar7 + 1;
        if (iVar6 == iVar2) goto LAB_0040913c;
      }
      iVar2 = iVar2 + 1;
      pcVar7 = pcVar7 + 1;
    } while (iVar6 != iVar2);
LAB_0040913c:
    iVar2 = 0;
    memcpy(_Dst,param_1,_Size);
    do {
      while (param_1[iVar2] == ' ') {
        iVar4 = iVar6 - iVar2;
        iVar6 = iVar6 + -1;
        memcpy(param_1 + iVar2,(void *)((int)_Dst + iVar2 + 1),iVar4 - 1);
        memcpy(_Dst,param_1,_Size);
        if (iVar6 <= iVar2) goto LAB_004091ab;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar6);
LAB_004091ab:
    if (iVar6 == 0) goto LAB_004092e6;
    pcVar7 = param_1;
    do {
      while ((*pcVar7 == '\n' || (*pcVar7 == ';'))) {
        *pcVar7 = '\0';
        pcVar7 = pcVar7 + 1;
        if (pcVar7 == param_1 + iVar6) goto LAB_004091de;
      }
      pcVar7 = pcVar7 + 1;
    } while (pcVar7 != param_1 + iVar6);
LAB_004091de:
    memcpy(_Dst,param_1,_Size);
    iVar2 = 0;
    do {
      while( true ) {
        iVar4 = iVar2 + 1;
        if ((param_1[iVar2] != '\0') || (param_1[iVar2 + 1] != '\0')) break;
        iVar5 = iVar6 - iVar2;
        iVar6 = iVar6 + -1;
        memcpy(param_1 + iVar2,(void *)(iVar4 + (int)_Dst),iVar5 - 1);
        memcpy(_Dst,param_1,_Size);
        if (iVar6 <= iVar2) goto LAB_00409250;
      }
      iVar2 = iVar4;
    } while (iVar4 < iVar6);
  }
LAB_00409250:
  if (param_2 < iVar6) {
    return iVar6;
  }
LAB_00409256:
  param_1[iVar6] = '\0';
  return iVar6 + 1;
}

