
undefined4 __cdecl
FUN_0041db70(int param_1,int param_2,int param_3,size_t param_4,int param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_00434a30((void *)(param_5 + param_1),param_2 - param_5,(void *)0x0,0,(void *)0x0,0,&local_20,
               0x14);
  iVar1 = memcmp((void *)(param_1 + param_3),&local_20,param_4);
  uVar2 = 0;
  if (iVar1 == 0) {
    if (param_6 == (undefined4 *)0x0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 1;
      *param_6 = local_20;
      param_6[1] = local_1c;
      param_6[2] = local_18;
      param_6[3] = local_14;
      param_6[4] = local_10;
    }
  }
  return uVar2;
}

