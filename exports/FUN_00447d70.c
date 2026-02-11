
/* WARNING: Removing unreachable block (ram,0x00447ecf) */

undefined8 __cdecl FUN_00447d70(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  undefined4 local_34;
  undefined4 local_30;
  
  local_34 = 0;
  local_30 = param_1;
  if ((int)param_2 < 0) {
    local_30 = -param_1;
    local_34 = -1;
    param_2 = -(param_2 + (param_1 != 0));
  }
  if ((int)param_4 < 0) {
    bVar8 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(param_4 + bVar8);
  }
  if (param_4 == 0) {
    if (param_2 < param_3) {
      local_30 = (uint)(CONCAT44(param_2,local_30) % (ulonglong)param_3);
    }
    else {
      if (param_3 == 0) {
        param_3 = 1 / 0;
      }
      local_30 = (uint)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)local_30) %
                       (ulonglong)param_3);
    }
    param_2 = 0;
  }
  else if (param_4 <= param_2) {
    uVar3 = 0x1f;
    if (param_4 != 0) {
      for (; param_4 >> uVar3 == 0; uVar3 = uVar3 - 1) {
      }
    }
    if ((uVar3 ^ 0x1f) == 0) {
      if ((param_4 < param_2) || (param_3 <= local_30)) {
        bVar8 = local_30 < param_3;
        local_30 = local_30 - param_3;
        param_2 = (param_2 - param_4) - (uint)bVar8;
      }
    }
    else {
      bVar2 = (byte)(uVar3 ^ 0x1f);
      bVar4 = 0x20 - bVar2;
      uVar5 = param_3 >> (bVar4 & 0x1f) | param_4 << (bVar2 & 0x1f);
      uVar6 = param_3 << (bVar2 & 0x1f);
      uVar3 = local_30 << (bVar2 & 0x1f);
      uVar1 = CONCAT44(param_2 >> (bVar4 & 0x1f),
                       param_2 << (bVar2 & 0x1f) | local_30 >> (bVar4 & 0x1f));
      iVar7 = (int)(uVar1 % (ulonglong)uVar5);
      uVar1 = (uVar1 / uVar5 & 0xffffffff) * (ulonglong)uVar6;
      if (CONCAT44(iVar7,uVar3) < uVar1) {
        uVar1 = uVar1 - CONCAT44(uVar5,uVar6);
      }
      uVar5 = (iVar7 - (int)(uVar1 >> 0x20)) - (uint)(uVar3 < (uint)uVar1);
      local_30 = uVar5 << (bVar4 & 0x1f) | uVar3 - (uint)uVar1 >> (bVar2 & 0x1f);
      param_2 = uVar5 >> (bVar2 & 0x1f);
    }
  }
  if (local_34 != 0) {
    bVar8 = local_30 != 0;
    local_30 = -local_30;
    param_2 = -(param_2 + bVar8);
  }
  return CONCAT44(param_2,local_30);
}

