
undefined4 __cdecl FUN_0040b700(ushort *param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_20;
  
  uVar1 = param_1[1];
  if ((param_1[3] == 0 ||
       (0x17 < param_1[4] || ((0x3b < param_1[6] || 999 < param_1[7]) || 0x3b < param_1[5]))) ||
     (0xb < (ushort)(uVar1 - 1))) {
LAB_0040b8d0:
    piVar5 = _errno();
    *piVar5 = 0x16;
    return 0;
  }
  uVar2 = *param_1;
  local_20 = (uint)uVar2;
  uVar4 = (uint)param_1[3];
  if (uVar1 == 2) {
    if ((0x1d < uVar4) || (uVar2 < 0x641)) goto LAB_0040b8d0;
    uVar7 = 2;
  }
  else {
    uVar6 = 0;
    if ((uVar2 & 3) == 0) {
      uVar7 = (uint)((ulonglong)((longlong)(int)local_20 * 0x51eb851f) >> 0x20);
      uVar6 = 1;
      if (local_20 == (uVar7 >> 5) * 100) {
        uVar6 = (uint)(local_20 == (uVar7 >> 7) * 400);
      }
    }
    uVar7 = (uint)uVar1;
    if ((*(int *)(&DAT_00450420 + ((uVar7 - 1) + uVar6 * 0xc) * 4) < (int)uVar4) || (uVar2 < 0x641))
    goto LAB_0040b8d0;
    iVar8 = uVar7 + 1;
    if (2 < uVar1) goto LAB_0040b808;
  }
  local_20 = (uint)uVar2;
  iVar8 = uVar7 + 0xd;
  local_20 = local_20 - 1;
LAB_0040b808:
  uVar3 = (longlong)
          (int)((uVar4 - 0x8ec71) +
               ((int)(local_20 * 0x8ead) / 100 - (((int)local_20 / 100) * 3 + 3 >> 2)) +
               (iVar8 * 0x7a7 >> 6)) * 0x18 + (ulonglong)param_1[4];
  uVar3 = (uVar3 & 0xffffffff) * 0x3c + CONCAT44((int)(uVar3 >> 0x20) * 0x3c,(uint)param_1[5]);
  uVar3 = (uVar3 & 0xffffffff) * 0x3c + CONCAT44((int)(uVar3 >> 0x20) * 0x3c,(uint)param_1[6]);
  *param_2 = ((uVar3 & 0xffffffff) * 1000 + CONCAT44((int)(uVar3 >> 0x20) * 1000,(uint)param_1[7]))
             * 10000;
  return 1;
}

