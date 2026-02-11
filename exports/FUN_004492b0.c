
undefined4 __cdecl FUN_004492b0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00479e74;
  LOCK();
  DAT_00479e74 = param_1;
  UNLOCK();
  return uVar1;
}

