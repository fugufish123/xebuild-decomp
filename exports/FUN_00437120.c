
undefined8 __cdecl FUN_00437120(uint param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  
  iVar11 = param_2 * 3 + (int)((ulonglong)param_1 * 3 >> 0x20);
  uVar15 = (uint)((ulonglong)param_1 * 3) ^ 2;
  uVar6 = (uint)((ulonglong)param_1 * (ulonglong)uVar15);
  iVar14 = (int)((ulonglong)param_1 * (ulonglong)uVar15 >> 0x20) +
           iVar11 * param_1 + param_2 * uVar15;
  uVar7 = 1 - uVar6;
  uVar1 = (ulonglong)(2 - uVar6) * (ulonglong)uVar15;
  uVar2 = (ulonglong)uVar7 * (ulonglong)uVar7;
  uVar8 = (uint)uVar2;
  iVar12 = (int)(uVar2 >> 0x20) + (-(uint)(1 < uVar6) - iVar14) * uVar7 * 2;
  uVar3 = (ulonglong)(uVar8 + 1) * (uVar1 & 0xffffffff);
  uVar2 = (uVar2 & 0xffffffff) * (uVar2 & 0xffffffff);
  uVar7 = (uint)uVar2;
  iVar13 = (int)(uVar2 >> 0x20) + iVar12 * uVar8 * 2;
  lVar4 = (uVar2 & 0xffffffff) * (uVar2 & 0xffffffff);
  uVar9 = (uint)lVar4;
  uVar2 = (ulonglong)(uVar7 + 1) * (uVar3 & 0xffffffff);
  uVar10 = uVar9 + 1;
  lVar5 = (ulonglong)uVar10 * (uVar2 & 0xffffffff);
  return CONCAT44((int)((ulonglong)lVar5 >> 0x20) +
                  ((int)(uVar2 >> 0x20) +
                  (iVar13 + (uint)(0xfffffffe < uVar7)) * (int)uVar3 +
                  ((int)(uVar3 >> 0x20) +
                  ((int)(uVar1 >> 0x20) +
                  iVar11 * (2 - uVar6) + (-(uint)(2 < uVar6) - iVar14) * uVar15) * (uVar8 + 1) +
                  (iVar12 + (uint)(0xfffffffe < uVar8)) * (int)uVar1) * (uVar7 + 1)) * uVar10 +
                  ((int)((ulonglong)lVar4 >> 0x20) + iVar13 * uVar7 * 2 + (uint)(0xfffffffe < uVar9)
                  ) * (int)uVar2,(int)lVar5);
}

