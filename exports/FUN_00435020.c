
void __cdecl FUN_00435020(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint local_484 [24];
  uint local_424;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  
  *param_1 = 0;
  param_1[0x37] = 0;
  puVar3 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar2 = (uint)((int)param_1 + (0xe0 - (int)((uint)(param_1 + 1) & 0xfffffffc))) >> 2;
      uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(uint *)((int)param_1 + 0xe1) = *param_3;
  *(uint *)((int)param_1 + 0xe5) = param_3[1];
  uVar2 = param_3[2];
  *(undefined1 *)((int)param_1 + 0xff) = 0xbc;
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(short *)((int)param_1 + 0xe9) = (short)uVar2;
  FUN_00442b00(local_484);
  puVar1 = (uint *)malloc(8);
  uVar2 = *param_1;
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  FUN_004448d0(local_484,puVar1,8);
  free(puVar1);
  puVar1 = (uint *)malloc(0x14);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  puVar1[4] = param_2[4];
  FUN_004448d0(local_484,puVar1,0x14);
  free(puVar1);
  puVar1 = (uint *)malloc(10);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  *(short *)(puVar1 + 2) = (short)param_3[2];
  FUN_004448d0(local_484,puVar1,10);
  free(puVar1);
  FUN_00444da0((undefined1 *)&local_424,local_484);
  *(uint *)((int)param_1 + 0xeb) = local_424;
  *(undefined4 *)((int)param_1 + 0xef) = local_420;
  *(undefined4 *)((int)param_1 + 0xf3) = local_41c;
  *(undefined4 *)((int)param_1 + 0xf7) = local_418;
  *(undefined4 *)((int)param_1 + 0xfb) = local_414;
  FUN_004429d0(&local_424,0x14,(int)param_1 + 0xeb);
  FUN_00442630(&local_424,0xeb,(byte *)param_1,(byte *)param_1);
  *(byte *)param_1 = (byte)*param_1 & 0x7f;
  FUN_00436e50(param_1,0x20);
  return;
}

