
undefined4 __cdecl
FUN_00421200(char *param_1,int param_2,char *param_3,int param_4,void *param_5,size_t param_6)

{
  int iVar1;
  int iVar2;
  char *_Dst;
  
  if (-1 < param_2 - param_4) {
    iVar2 = 0;
    _Dst = param_1;
    do {
      if (*_Dst == *param_3) {
        iVar1 = 0;
        if (0 < param_4) {
          while (iVar1 = iVar1 + 1, iVar1 < param_4) {
            if (param_1[iVar2 + iVar1] != param_3[iVar1]) {
              iVar1 = param_4 + 1;
            }
          }
        }
        if (param_4 == iVar1) {
          memcpy(_Dst,param_5,param_6);
          return 1;
        }
      }
      iVar2 = iVar2 + 1;
      _Dst = _Dst + 1;
    } while (iVar2 <= param_2 - param_4);
  }
  return 0;
}

