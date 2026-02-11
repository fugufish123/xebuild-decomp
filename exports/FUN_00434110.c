
void FUN_00434110(uint *param_1,uint param_2,void *param_3,size_t param_4,void *param_5,
                 size_t param_6,void *param_7,size_t param_8,undefined4 *param_9,uint param_10)

{
  size_t _Size;
  uint *_Memory;
  int iVar1;
  uint *puVar2;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  uint local_110 [4];
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  uint local_7c [27];
  
  _Size = param_6 + param_4 + 0x40 + param_8;
  _Memory = (uint *)malloc(_Size);
  puVar2 = local_110;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (param_2 < 0x41) {
    memcpy(local_110,param_1,param_2);
  }
  else {
    local_110[0] = *param_1;
    local_110[1] = param_1[1];
    local_110[2] = param_1[2];
    local_110[3] = param_1[3];
    local_100 = param_1[4];
    local_fc = param_1[5];
    local_f8 = param_1[6];
    local_f4 = param_1[7];
    local_f0 = param_1[8];
    local_ec = param_1[9];
    local_e8 = param_1[10];
    local_e4 = param_1[0xb];
    local_e0 = param_1[0xc];
    local_dc = param_1[0xd];
    local_d8 = param_1[0xe];
    local_d4 = param_1[0xf];
  }
  *_Memory = local_110[0] ^ 0x36363636;
  local_d0 = local_110[0] ^ 0x5c5c5c5c;
  _Memory[1] = local_110[1] ^ 0x36363636;
  local_cc = local_110[1] ^ 0x5c5c5c5c;
  _Memory[2] = local_110[2] ^ 0x36363636;
  local_c8 = local_110[2] ^ 0x5c5c5c5c;
  _Memory[3] = local_110[3] ^ 0x36363636;
  local_c4 = local_110[3] ^ 0x5c5c5c5c;
  _Memory[4] = local_100 ^ 0x36363636;
  local_c0 = local_100 ^ 0x5c5c5c5c;
  _Memory[5] = local_fc ^ 0x36363636;
  local_bc = local_fc ^ 0x5c5c5c5c;
  _Memory[6] = local_f8 ^ 0x36363636;
  local_b8 = local_f8 ^ 0x5c5c5c5c;
  _Memory[7] = local_f4 ^ 0x36363636;
  local_b4 = local_f4 ^ 0x5c5c5c5c;
  _Memory[8] = local_f0 ^ 0x36363636;
  local_b0 = local_f0 ^ 0x5c5c5c5c;
  _Memory[9] = local_ec ^ 0x36363636;
  local_ac = local_ec ^ 0x5c5c5c5c;
  local_a8 = local_e8 ^ 0x5c5c5c5c;
  _Memory[10] = local_e8 ^ 0x36363636;
  _Memory[0xb] = local_e4 ^ 0x36363636;
  local_a4 = local_e4 ^ 0x5c5c5c5c;
  _Memory[0xc] = local_e0 ^ 0x36363636;
  local_a0 = local_e0 ^ 0x5c5c5c5c;
  _Memory[0xd] = local_dc ^ 0x36363636;
  local_9c = local_dc ^ 0x5c5c5c5c;
  _Memory[0xe] = local_d8 ^ 0x36363636;
  local_98 = local_d8 ^ 0x5c5c5c5c;
  local_94 = local_d4 ^ 0x5c5c5c5c;
  _Memory[0xf] = local_d4 ^ 0x36363636;
  if (param_4 != 0) {
    memcpy(_Memory + 0x10,param_3,param_4);
  }
  if (param_6 != 0) {
    memcpy((void *)((int)_Memory + param_4 + 0x40),param_5,param_6);
  }
  if (param_8 != 0) {
    memcpy((void *)((int)_Memory + param_6 + param_4 + 0x40),param_7,param_8);
  }
  FUN_00442b00(local_7c);
  FUN_004448d0(local_7c,_Memory,_Size);
  FUN_00444da0((undefined1 *)&local_124,local_7c);
  local_90 = local_124;
  local_8c = local_120;
  local_88 = local_11c;
  local_84 = local_118;
  local_80 = local_114;
  FUN_00442b00(local_7c);
  FUN_004448d0(local_7c,&local_d0,0x54);
  FUN_00444da0((undefined1 *)&local_124,local_7c);
  if (param_10 < 0x15) {
    memcpy(param_9,&local_124,param_10);
  }
  else {
    *param_9 = local_124;
    param_9[1] = local_120;
    param_9[2] = local_11c;
    param_9[3] = local_118;
    param_9[4] = local_114;
  }
  free(_Memory);
  return;
}

