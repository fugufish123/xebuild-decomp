
undefined4 __cdecl FUN_004477a0(undefined4 param_1,int param_2)

{
  void *pvVar1;
  void *_Memory;
  
  if (param_2 == 1) {
    if (DAT_00479e54 == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00479e58);
    }
    DAT_00479e54 = 1;
    return 1;
  }
  if (param_2 == 0) {
    if (DAT_00479e54 != 0) {
      FUN_00447600();
    }
    if (DAT_00479e54 == 1) {
      DAT_00479e54 = 1;
      _Memory = DAT_00479e50;
      while (_Memory != (void *)0x0) {
        pvVar1 = *(void **)((int)_Memory + 8);
        free(_Memory);
        _Memory = pvVar1;
      }
      DAT_00479e50 = (void *)0x0;
      DAT_00479e54 = 0;
      DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00479e58);
    }
  }
  else if (param_2 == 2) {
    FUN_00446fb0();
  }
  else if ((param_2 == 3) && (DAT_00479e54 != 0)) {
    FUN_00447600();
  }
  return 1;
}

