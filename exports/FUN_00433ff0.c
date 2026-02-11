
void __cdecl FUN_00433ff0(int param_1)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint local_14;
  
  uVar2 = 0;
  iVar5 = 0;
  local_14 = 0;
  do {
    while( true ) {
      pbVar6 = (byte *)((iVar5 >> 3) + param_1);
      bVar3 = (byte)iVar5 & 7;
      bVar1 = *pbVar6;
      uVar4 = (int)(uint)bVar1 >> bVar3 & 1;
      if (0x69 < iVar5) break;
      uVar2 = uVar2 ^ uVar4;
      if ((uVar2 & 1) != 0) {
        uVar2 = uVar2 ^ 0x360325;
      }
      iVar5 = iVar5 + 1;
      local_14 = local_14 ^ uVar4;
      uVar2 = uVar2 >> 1;
      if (iVar5 == 0x80) {
        return;
      }
    }
    if (iVar5 == 0x7f) {
      if (uVar4 == local_14) {
        return;
      }
      *(byte *)(param_1 + 0xf) = bVar1 + 0x80;
      return;
    }
    if (uVar4 != (uVar2 & 1)) {
      *pbVar6 = (byte)(1 << bVar3) ^ bVar1;
    }
    iVar5 = iVar5 + 1;
    local_14 = local_14 ^ uVar2 & 1;
    uVar2 = uVar2 >> 1;
  } while (iVar5 != 0x80);
  return;
}

