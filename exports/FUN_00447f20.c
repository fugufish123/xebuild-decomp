
ulonglong __cdecl FUN_00447f20(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  
  if (param_4 == 0) {
    if (param_2 < param_3) {
      return CONCAT44(param_2,param_1) / (ulonglong)param_3 & 0xffffffff;
    }
    if (param_3 == 0) {
      param_3 = 1 / 0;
    }
    uVar6 = param_2 / param_3;
    uVar7 = (undefined4)
            (((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
            (ulonglong)param_3);
  }
  else {
    if (param_2 < param_4) {
      return 0;
    }
    uVar6 = 0x1f;
    if (param_4 != 0) {
      for (; param_4 >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
    if ((uVar6 ^ 0x1f) != 0) {
      bVar5 = (byte)(uVar6 ^ 0x1f);
      bVar8 = 0x20 - bVar5;
      uVar1 = (ulonglong)(param_4 << (bVar5 & 0x1f) | param_3 >> (bVar8 & 0x1f));
      uVar2 = CONCAT44(param_2 >> (bVar8 & 0x1f),
                       param_2 << (bVar5 & 0x1f) | param_1 >> (bVar8 & 0x1f));
      uVar3 = uVar2 / uVar1;
      uVar6 = (uint)uVar3;
      uVar9 = (uint)(uVar2 % uVar1);
      lVar4 = (uVar3 & 0xffffffff) * (ulonglong)(param_3 << (bVar5 & 0x1f));
      uVar10 = (uint)((ulonglong)lVar4 >> 0x20);
      if ((uVar9 < uVar10) || ((param_1 << (bVar5 & 0x1f) < (uint)lVar4 && (uVar9 == uVar10)))) {
        uVar6 = uVar6 - 1;
      }
      return (ulonglong)uVar6;
    }
    uVar6 = 0;
    if ((param_4 < param_2) || (uVar7 = 0, param_3 <= param_1)) {
      uVar7 = 1;
    }
  }
  return CONCAT44(uVar6,uVar7);
}

