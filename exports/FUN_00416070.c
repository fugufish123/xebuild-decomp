
undefined4 __cdecl FUN_00416070(int param_1)

{
  void *_Buf1;
  int iVar1;
  void *_Buf2;
  int iVar2;
  
  _Buf1 = DAT_00479f50;
  if (1 < param_1) {
    iVar2 = 1;
    _Buf2 = DAT_00479f50;
    do {
      _Buf2 = (void *)((int)_Buf2 + 0x10);
      iVar1 = memcmp(_Buf1,_Buf2,3);
      if (iVar1 != 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (param_1 != iVar2);
  }
  return 1;
}

