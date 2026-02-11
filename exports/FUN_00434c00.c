
void __cdecl
FUN_00434c00(uint *param_1,uint param_2,uint *param_3,uint param_4,undefined4 *param_5,uint param_6)

{
  uint uVar1;
  uint *puVar2;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  uint local_9c [8];
  uint local_7c [27];
  
  uVar1 = 0;
  do {
    *(undefined4 *)((int)local_9c + uVar1) = 0;
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x20);
  if (param_2 >> 3 != 0) {
    FUN_00433840(param_2 >> 3,param_1);
  }
  if (param_4 >> 3 != 0) {
    FUN_00433840(param_4 >> 3,param_3);
  }
  FUN_00442b00(local_7c);
  puVar2 = (uint *)malloc(0x20);
  *puVar2 = local_9c[0];
  puVar2[1] = local_9c[1];
  puVar2[2] = local_9c[2];
  puVar2[3] = local_9c[3];
  puVar2[4] = local_9c[4];
  puVar2[5] = local_9c[5];
  puVar2[6] = local_9c[6];
  puVar2[7] = local_9c[7];
  FUN_004448d0(local_7c,puVar2,0x20);
  free(puVar2);
  puVar2 = (uint *)malloc(0x20);
  *puVar2 = local_9c[0];
  puVar2[1] = local_9c[1];
  puVar2[2] = local_9c[2];
  puVar2[3] = local_9c[3];
  puVar2[4] = local_9c[4];
  puVar2[5] = local_9c[5];
  puVar2[6] = local_9c[6];
  puVar2[7] = local_9c[7];
  FUN_004448d0(local_7c,puVar2,0x20);
  free(puVar2);
  if (param_2 != 0) {
    puVar2 = (uint *)malloc(param_2);
    memcpy(puVar2,param_1,param_2);
    FUN_004448d0(local_7c,puVar2,param_2);
    free(puVar2);
  }
  if (param_4 != 0) {
    puVar2 = (uint *)malloc(param_4);
    memcpy(puVar2,param_3,param_4);
    FUN_004448d0(local_7c,puVar2,param_4);
    free(puVar2);
  }
  local_9c[0] = ~local_9c[0];
  local_9c[1] = ~local_9c[1];
  local_9c[2] = ~local_9c[2];
  local_9c[3] = ~local_9c[3];
  local_9c[4] = ~local_9c[4];
  local_9c[5] = ~local_9c[5];
  local_9c[6] = ~local_9c[6];
  local_9c[7] = ~local_9c[7];
  puVar2 = (uint *)malloc(0x20);
  *puVar2 = local_9c[0];
  puVar2[1] = local_9c[1];
  puVar2[2] = local_9c[2];
  puVar2[3] = local_9c[3];
  puVar2[4] = local_9c[4];
  puVar2[5] = local_9c[5];
  puVar2[6] = local_9c[6];
  puVar2[7] = local_9c[7];
  FUN_004448d0(local_7c,puVar2,0x20);
  free(puVar2);
  puVar2 = (uint *)malloc(0x20);
  *puVar2 = local_9c[0];
  puVar2[1] = local_9c[1];
  puVar2[2] = local_9c[2];
  puVar2[3] = local_9c[3];
  puVar2[4] = local_9c[4];
  puVar2[5] = local_9c[5];
  puVar2[6] = local_9c[6];
  puVar2[7] = local_9c[7];
  FUN_004448d0(local_7c,puVar2,0x20);
  free(puVar2);
  FUN_00444da0((undefined1 *)&local_b0,local_7c);
  if (0x14 < param_6) {
    *param_5 = local_b0;
    param_5[1] = local_ac;
    param_5[2] = local_a8;
    param_5[3] = local_a4;
    param_5[4] = local_a0;
    return;
  }
  memcpy(param_5,&local_b0,param_6);
  return;
}

