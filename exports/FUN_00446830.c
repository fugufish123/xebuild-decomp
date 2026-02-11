
uint __cdecl FUN_00446830(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_1c;
  
  if (-1 < (int)param_4) {
    *param_2 = 0;
    *param_1 = 0;
    return 0xffffffff;
  }
  uVar1 = param_4 & 0xffff;
  uVar2 = param_4 >> 0x10;
  uVar3 = *param_3 & 0xffff;
  uVar7 = *param_3 >> 0x10;
  uVar5 = param_3[1];
  uVar9 = uVar5 >> 0x10;
  uVar4 = uVar9 / uVar2;
  uVar6 = uVar5;
  if (uVar4 != 0) {
    if (((uVar9 % uVar2 << 0x10 | uVar5 & 0xffff) < uVar1) ||
       (uVar6 = uVar5 - param_4, ~param_4 < uVar6)) {
      uVar4 = 0;
      uVar6 = uVar5;
    }
    else {
      uVar9 = uVar6 >> 0x10;
    }
  }
  uVar5 = uVar6 / uVar2;
  if ((uVar5 == 0x10000) ||
     (local_1c = uVar1 * uVar5, uVar10 = uVar5, (uVar6 % uVar2 << 0x10 | uVar7) < local_1c)) {
    uVar10 = uVar5 - 1;
    uVar8 = uVar6 % uVar2 + uVar2;
    local_1c = uVar1 * uVar10;
    if ((uVar8 < 0x10000) && ((uVar8 * 0x10000 | uVar7) < local_1c)) {
      uVar10 = uVar5 - 2;
      local_1c = local_1c - uVar1;
    }
  }
  local_1c = local_1c + uVar2 * uVar10 * 0x10000;
  uVar5 = (uVar6 << 0x10 | uVar7) - local_1c;
  if ((uVar9 - (~local_1c < uVar5)) - (uVar2 * uVar10 >> 0x10) >> 0x10 != 0) {
    uVar5 = uVar5 + param_4;
    uVar10 = uVar10 - 1;
  }
  uVar6 = uVar5 / uVar2;
  if ((uVar6 == 0x10000) ||
     (uVar9 = uVar1 * uVar6, uVar7 = uVar6, (uVar5 % uVar2 << 0x10 | uVar3) < uVar9)) {
    uVar8 = uVar5 % uVar2 + uVar2;
    uVar7 = uVar6 - 1;
    if (uVar8 < 0x10000) {
      uVar9 = uVar1 * uVar7;
      if ((uVar8 * 0x10000 | uVar3) < uVar9) {
        uVar7 = uVar6 - 2;
        uVar9 = uVar9 - uVar1;
      }
    }
    else {
      uVar9 = uVar1 * uVar7;
    }
  }
  uVar9 = uVar9 + uVar2 * uVar7 * 0x10000;
  uVar6 = (uVar5 << 0x10 | uVar3) - uVar9;
  if (((uVar5 >> 0x10) - (uint)(~uVar9 < uVar6)) - (uVar2 * uVar7 >> 0x10) >> 0x10 != 0) {
    uVar6 = uVar6 + param_4;
    uVar7 = uVar7 - 1;
  }
  *param_1 = uVar7 & 0xffff | uVar10 << 0x10;
  *param_2 = uVar6;
  return uVar4;
}

