
void __cdecl FUN_0040bae0(short *param_1)

{
  longlong lVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  time_t tVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  uint uVar15;
  short local_28;
  short local_24;
  short local_20;
  
  tVar11 = time((time_t *)0x0);
  lVar1 = (longlong)(int)tVar11 * 10000000 + 0x19db1ded53e8000;
  uVar6 = (uint)lVar1;
  uVar15 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar12 = FUN_00447d70(uVar6,uVar15,10000000,0);
  uVar12 = FUN_00447c30((uint)uVar12,(uint)((ulonglong)uVar12 >> 0x20),10000,0);
  uVar13 = FUN_00447c30(uVar6,uVar15,10000000,0);
  uVar6 = (uint)((ulonglong)uVar13 >> 0x20);
  uVar14 = FUN_00447f20((uint)uVar13,uVar6,0x15180,0);
  iVar10 = (int)uVar14;
  uVar14 = FUN_00448040((uint)uVar13,uVar6,0x15180,0);
  iVar7 = (int)uVar14 % 0xe10;
  sVar3 = (short)(iVar7 / 0x3c);
  local_28 = (short)iVar7 + sVar3 * -0x3c;
  local_24 = (short)(iVar10 + 1) + (short)((iVar10 + 1) / 7) * -7;
  iVar8 = ((iVar10 * 4 + 0x4cb) / 0x23ab1) * 3;
  iVar7 = iVar8 + 3;
  iVar8 = iVar8 + 6;
  if (-1 < iVar7) {
    iVar8 = iVar7;
  }
  iVar10 = (iVar8 >> 2) + 0x6e1c + iVar10;
  iVar7 = (iVar10 * 0x14 + -0x98a) / 0x1c89;
  iVar5 = iVar7 * -0x5b5;
  iVar8 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar8 = iVar5;
  }
  iVar10 = (iVar8 >> 2) + iVar10;
  iVar8 = (iVar10 * 0x40) / 0x7a7;
  sVar2 = (short)iVar7;
  sVar9 = sVar2 + 0x5f4;
  sVar4 = (short)iVar8 + -1;
  if (0xd < iVar8) {
    sVar4 = (short)iVar8 + -0xd;
    sVar9 = sVar2 + 0x5f5;
  }
  iVar8 = iVar8 * 0x7a7;
  param_1[1] = sVar4;
  *param_1 = sVar9;
  param_1[4] = (short)((int)uVar14 / 0xe10);
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0x3f;
  }
  param_1[3] = (short)iVar10 - (short)(iVar8 >> 6);
  param_1[5] = sVar3;
  param_1[6] = local_28;
  local_20 = (short)uVar12;
  param_1[7] = local_20;
  param_1[2] = local_24;
  tVar11 = time((time_t *)0x0);
  srand((uint)tVar11);
  uVar6 = rand();
  param_1[7] = (short)uVar6 + (short)(uVar6 / 999) * -999;
  return;
}

