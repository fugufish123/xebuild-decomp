
undefined8 __cdecl FUN_00447c30(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined4 local_28;
  
  local_28 = 0;
  if ((int)param_2 < 0) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    local_28 = 0xffffffff;
    param_2 = -(param_2 + bVar10);
  }
  if ((int)param_4 < 0) {
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    local_28 = ~local_28;
    param_4 = -(param_4 + bVar10);
  }
  if (param_4 == 0) {
    if (param_2 < param_3) {
      iVar6 = (int)(CONCAT44(param_2,param_1) / (ulonglong)param_3);
      uVar9 = 0;
    }
    else {
      if (param_3 == 0) {
        param_3 = 1 / 0;
      }
      uVar9 = param_2 / param_3;
      iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                   (ulonglong)param_3);
    }
  }
  else if (param_2 < param_4) {
    uVar9 = 0;
    iVar6 = 0;
  }
  else {
    uVar9 = 0x1f;
    if (param_4 != 0) {
      for (; param_4 >> uVar9 == 0; uVar9 = uVar9 - 1) {
      }
    }
    if ((uVar9 ^ 0x1f) == 0) {
      uVar9 = 0;
      if ((param_4 < param_2) || (iVar6 = 0, param_3 <= param_1)) {
        iVar6 = 1;
      }
    }
    else {
      bVar5 = (byte)(uVar9 ^ 0x1f);
      bVar7 = 0x20 - bVar5;
      uVar1 = (ulonglong)(param_3 >> (bVar7 & 0x1f) | param_4 << (bVar5 & 0x1f));
      uVar2 = CONCAT44(param_2 >> (bVar7 & 0x1f),
                       param_2 << (bVar5 & 0x1f) | param_1 >> (bVar7 & 0x1f));
      uVar3 = uVar2 / uVar1;
      iVar6 = (int)uVar3;
      uVar9 = (uint)(uVar2 % uVar1);
      lVar4 = (uVar3 & 0xffffffff) * (ulonglong)(param_3 << (bVar5 & 0x1f));
      uVar8 = (uint)((ulonglong)lVar4 >> 0x20);
      if ((uVar9 < uVar8) || ((param_1 << (bVar5 & 0x1f) < (uint)lVar4 && (uVar9 == uVar8)))) {
        iVar6 = iVar6 + -1;
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
      }
    }
  }
  if (local_28 != 0) {
    bVar10 = iVar6 != 0;
    iVar6 = -iVar6;
    uVar9 = -(uVar9 + bVar10);
  }
  return CONCAT44(uVar9,iVar6);
}

