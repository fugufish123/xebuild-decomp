
void __cdecl FUN_00444da0(undefined1 *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  size_t _Size;
  byte *pbVar8;
  byte *local_20;
  
  uVar2 = param_2[0x17];
  puVar1 = param_2 + 7;
  iVar3 = (int)uVar2 >> 2;
  uVar6 = uVar2 & 3;
  uVar4 = puVar1[iVar3];
  if (uVar6 == 2) {
    local_20 = &DAT_0044b6a0;
LAB_00444e15:
    pbVar8 = local_20 + 1;
    uVar4 = uVar4 | (uint)*local_20 << 8;
  }
  else {
    pbVar8 = &DAT_0044b6a0;
    if (uVar6 != 3) {
      if (uVar6 == 1) {
        uVar6 = (uint)DAT_0044b6a0;
        puVar7 = &DAT_0044b6a0;
      }
      else {
        uVar6 = (uint)DAT_0044b6a1;
        puVar7 = &DAT_0044b6a1;
        uVar4 = (uint)DAT_0044b6a0 << 0x18;
      }
      local_20 = puVar7 + 1;
      uVar4 = uVar4 | uVar6 << 0x10;
      goto LAB_00444e15;
    }
  }
  puVar1[iVar3] = uVar4 | *pbVar8;
  iVar5 = iVar3 + 1;
  if ((int)uVar2 < 0x38) {
    if (0xd < iVar5) goto LAB_00444eb2;
  }
  else {
    if (iVar5 < 0x10) {
      memset(param_2 + iVar3 + 8,0,iVar3 * -4 + 0x3c);
    }
    FUN_00442b40(param_2,puVar1,0x40);
    iVar5 = 0;
  }
  _Size = iVar5 * -4 + 0x38;
  if (0xd < iVar5) {
    _Size = 4;
  }
  memset(param_2 + iVar5 + 7,0,_Size);
LAB_00444eb2:
  param_2[0x15] = param_2[6];
  param_2[0x16] = param_2[5];
  FUN_00442b40(param_2,puVar1,0x40);
  uVar2 = *param_2;
  param_1[3] = (char)uVar2;
  *param_1 = (char)(uVar2 >> 0x18);
  param_1[1] = (char)(uVar2 >> 0x10);
  param_1[2] = (char)(uVar2 >> 8);
  uVar2 = param_2[1];
  param_1[7] = (char)uVar2;
  param_1[4] = (char)(uVar2 >> 0x18);
  param_1[5] = (char)(uVar2 >> 0x10);
  param_1[6] = (char)(uVar2 >> 8);
  uVar2 = param_2[2];
  param_1[0xb] = (char)uVar2;
  param_1[8] = (char)(uVar2 >> 0x18);
  param_1[9] = (char)(uVar2 >> 0x10);
  param_1[10] = (char)(uVar2 >> 8);
  uVar2 = param_2[3];
  param_1[0xf] = (char)uVar2;
  param_1[0xc] = (char)(uVar2 >> 0x18);
  param_1[0xd] = (char)(uVar2 >> 0x10);
  param_1[0xe] = (char)(uVar2 >> 8);
  uVar2 = param_2[4];
  param_1[0x13] = (char)uVar2;
  param_1[0x10] = (char)(uVar2 >> 0x18);
  param_1[0x11] = (char)(uVar2 >> 0x10);
  param_1[0x12] = (char)(uVar2 >> 8);
  param_2[0x17] = 0;
  return;
}

