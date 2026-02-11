
undefined4 __cdecl FUN_00438bc0(uint *param_1,undefined1 *param_2,uint param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  
  if ((param_3 & 0xf) == 0) {
    local_20 = 0;
    for (iVar2 = (int)param_3 >> 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      iVar1 = FUN_00439ec0(param_1,param_2,param_4);
      if (iVar1 != 0) goto LAB_00438c0f;
      param_1 = param_1 + 4;
      param_2 = param_2 + 0x10;
    }
  }
  else {
LAB_00438c0f:
    local_20 = 1;
  }
  return local_20;
}

