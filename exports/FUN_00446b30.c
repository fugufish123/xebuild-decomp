
_onexit_t __cdecl FUN_00446b30(_onexit_t param_1)

{
  _onexit_t p_Var1;
  int local_14;
  undefined4 local_10 [3];
  
  local_14 = FUN_00446fc0(DAT_0050ec8c);
  if (local_14 != -1) {
    _lock(8);
    local_14 = FUN_00446fc0(DAT_0050ec8c);
    local_10[0] = FUN_00446fc0(DAT_0050ec88);
    p_Var1 = (_onexit_t)__dllonexit(param_1,&local_14,local_10);
    DAT_0050ec8c = FUN_00446fd0(local_14);
    DAT_0050ec88 = FUN_00446fd0(local_10[0]);
    _unlock(8);
    return p_Var1;
  }
  p_Var1 = _onexit(param_1);
  return p_Var1;
}

