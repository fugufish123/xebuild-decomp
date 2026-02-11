
/* WARNING: Removing unreachable block (ram,0x0044813a) */

ulonglong __cdecl FUN_00448040(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint local_28;
  
  local_28 = param_1;
  if (param_4 == 0) {
    if (param_2 < param_3) {
      uVar4 = (uint)(CONCAT44(param_2,param_1) % (ulonglong)param_3);
    }
    else {
      if (param_3 == 0) {
        param_3 = 1 / 0;
      }
      uVar4 = (uint)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                    (ulonglong)param_3);
    }
    return (ulonglong)uVar4;
  }
  if (param_4 <= param_2) {
    uVar4 = 0x1f;
    if (param_4 != 0) {
      for (; param_4 >> uVar4 == 0; uVar4 = uVar4 - 1) {
      }
    }
    if ((uVar4 ^ 0x1f) == 0) {
      if ((param_4 < param_2) || (param_3 <= param_1)) {
        local_28 = param_1 - param_3;
        param_2 = (param_2 - param_4) - (uint)(param_1 < param_3);
      }
      return CONCAT44(param_2,local_28);
    }
    bVar2 = (byte)(uVar4 ^ 0x1f);
    bVar3 = 0x20 - bVar2;
    uVar4 = param_3 >> (bVar3 & 0x1f) | param_4 << (bVar2 & 0x1f);
    uVar5 = param_3 << (bVar2 & 0x1f);
    uVar1 = CONCAT44(param_2 >> (bVar3 & 0x1f),param_1 >> (bVar3 & 0x1f) | param_2 << (bVar2 & 0x1f)
                    );
    iVar6 = (int)(uVar1 % (ulonglong)uVar4);
    uVar7 = param_1 << (bVar2 & 0x1f);
    uVar1 = (uVar1 / uVar4 & 0xffffffff) * (ulonglong)uVar5;
    if (CONCAT44(iVar6,uVar7) < uVar1) {
      uVar1 = uVar1 - CONCAT44(uVar4,uVar5);
    }
    uVar4 = (iVar6 - (int)(uVar1 >> 0x20)) - (uint)(uVar7 < (uint)uVar1);
    return CONCAT44(uVar4 >> (bVar2 & 0x1f),
                    uVar4 << (bVar3 & 0x1f) | uVar7 - (uint)uVar1 >> (bVar2 & 0x1f));
  }
  return CONCAT44(param_2,param_1);
}

