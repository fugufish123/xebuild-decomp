
undefined4 __fastcall
FUN_00433aa0(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  undefined1 *puVar1;
  bool bVar2;
  undefined4 in_EAX;
  int iVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined1 local_41c [256];
  undefined1 local_31c [256];
  undefined1 local_21c [524];
  
  puVar1 = (undefined1 *)(param_7 * 2);
  iVar3 = FUN_00438460(param_2,param_1,(int)local_31c,puVar1,param_7);
  if ((((iVar3 != 0) &&
       (iVar3 = FUN_004380f0(local_41c,local_31c,param_4,param_1,param_7), iVar3 != 0)) &&
      (iVar3 = FUN_00438460(param_2,param_3,(int)local_31c,puVar1,param_7), iVar3 != 0)) &&
     (iVar3 = FUN_004380f0(local_21c,local_31c,param_5,param_3,param_7), iVar3 != 0)) {
    bVar2 = FUN_00438860(local_31c,local_41c,(int)local_21c,param_7);
    if (CONCAT31(extraout_var,bVar2) != 0) {
      do {
        bVar2 = FUN_004389b0(local_31c,local_31c,param_1,param_7);
      } while (CONCAT31(extraout_var_00,bVar2) == 0);
    }
    FUN_004382c0(in_EAX,local_31c,param_6,param_7);
    iVar3 = FUN_00438460(in_EAX,param_1,(int)local_31c,puVar1,param_7);
    if (iVar3 != 0) {
      FUN_004382c0(in_EAX,local_31c,param_3,param_7);
      FUN_00436df0(local_21c + param_7 * 8,param_7);
      FUN_004389b0(in_EAX,(undefined1 *)in_EAX,(int)local_21c,(int)puVar1);
      return 1;
    }
  }
  return 0;
}

