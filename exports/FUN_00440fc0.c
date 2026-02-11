
undefined4 __cdecl FUN_00440fc0(int param_1,void *param_2,int param_3,uint *param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_20;
  
  if (param_5 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_20 = FUN_004417d0(param_3,param_5);
    iVar3 = 0x20;
    uVar1 = 0x80000000;
    do {
      if ((*(uint *)(param_3 + -4 + local_20 * 4) & uVar1) != 0) {
        if (uVar1 == 1) {
          local_20 = local_20 + -1;
          uVar1 = 0x80000000;
        }
        else {
          uVar1 = uVar1 >> 1;
        }
        goto LAB_00441018;
      }
      uVar1 = uVar1 >> 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar1 = 0;
LAB_00441018:
    FUN_00446200(param_1,(int)param_2,param_5);
    if (local_20 != 0) {
      while( true ) {
        while( true ) {
          FUN_00442130(param_1,(void *)param_1,(void *)param_1,param_4,param_5);
          if ((*(uint *)(param_3 + (local_20 + 0x3fffffff) * 4) & uVar1) != 0) {
            FUN_00442130(param_1,(void *)param_1,param_2,param_4,param_5);
          }
          if (uVar1 == 1) break;
          uVar1 = uVar1 >> 1;
        }
        local_20 = local_20 + -1;
        if (local_20 == 0) break;
        uVar1 = 0x80000000;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

