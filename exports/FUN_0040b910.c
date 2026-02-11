
undefined4 __cdecl FUN_0040b910(uint *param_1,short *param_2,short *param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  tm *ptVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_20 [4];
  
  if ((param_2 != (short *)0x0) && (param_3 != (short *)0x0)) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    lVar6 = FUN_00447c30(uVar1,uVar2,10000000,0);
    lVar7 = FUN_00447d70(uVar1,uVar2,10000000,0);
    if (lVar7 == 0) {
      uVar3 = lVar6 - 0x2b6109100;
    }
    else {
      uVar3 = lVar6 - 0x2b61090ff;
    }
    if ((uVar3 & 1) != 0) {
      uVar3 = uVar3 + 1;
    }
    local_20[0] = (undefined4)uVar3;
    if ((int)(uVar3 >> 0x20) == 0) {
      ptVar4 = gmtime((time_t *)local_20);
      *param_3 = (short)(ptVar4->tm_sec / 2) +
                 (short)ptVar4->tm_hour * 0x800 + (short)ptVar4->tm_min * 0x20;
      *param_2 = ((short)ptVar4->tm_mon + 1) * 0x20 + ((short)ptVar4->tm_year + -0x50) * 0x200 +
                 (short)ptVar4->tm_mday;
      return 1;
    }
  }
  piVar5 = _errno();
  *piVar5 = 0x16;
  return 0;
}

