
void FUN_00401730(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte local_20 [16];
  
  local_20[0] = 0x42;
  local_20[1] = 0x75;
  local_20[2] = 0x4e;
  local_20[3] = 0x79;
  if (param_2 != 0) {
    bVar3 = 0x42;
    uVar5 = 1;
    bVar1 = 0x75;
    pbVar4 = param_1;
    while( true ) {
      uVar6 = uVar5 & 3;
      iVar2 = (uint)*pbVar4 * 0xfb;
      *pbVar4 = *pbVar4 ^ bVar3;
      local_20[uVar6] = bVar1 + (char)iVar2;
      uVar5 = uVar6 + 1;
      bVar1 = (char)((uint)iVar2 >> 8) + local_20[uVar5 & 3];
      local_20[uVar5 & 3] = bVar1;
      if (pbVar4 + 1 == param_1 + param_2) break;
      bVar3 = local_20[uVar6];
      pbVar4 = pbVar4 + 1;
    }
  }
  FUN_004223b0((char *)(param_1 + param_2 + -4),4);
  return;
}

