
void __cdecl
FUN_00434a30(void *param_1,size_t param_2,void *param_3,size_t param_4,void *param_5,size_t param_6,
            undefined4 *param_7,uint param_8)

{
  uint *puVar1;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  uint local_7c [27];
  
  FUN_00442b00(local_7c);
  if (param_2 != 0) {
    puVar1 = (uint *)malloc(param_2);
    memcpy(puVar1,param_1,param_2);
    FUN_004448d0(local_7c,puVar1,param_2);
    free(puVar1);
  }
  if (param_4 != 0) {
    puVar1 = (uint *)malloc(param_4);
    memcpy(puVar1,param_3,param_4);
    FUN_004448d0(local_7c,puVar1,param_4);
    free(puVar1);
  }
  if (param_6 != 0) {
    puVar1 = (uint *)malloc(param_6);
    memcpy(puVar1,param_5,param_6);
    FUN_004448d0(local_7c,puVar1,param_6);
    free(puVar1);
  }
  FUN_00444da0((undefined1 *)&local_90,local_7c);
  if (0x14 < param_8) {
    *param_7 = local_90;
    param_7[1] = local_8c;
    param_7[2] = local_88;
    param_7[3] = local_84;
    param_7[4] = local_80;
    return;
  }
  memcpy(param_7,&local_90,param_8);
  return;
}

