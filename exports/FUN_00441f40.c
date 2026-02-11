
uint __cdecl FUN_00441f40(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte local_20;
  
  if (param_3 < 0x20) {
    local_20 = 0x20 - (byte)param_3;
    if (param_4 != 0) {
      puVar1 = param_2 + param_4;
      uVar2 = 0;
      do {
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        uVar3 = (~(0xffffffffU >> ((byte)param_3 & 0x1f)) & uVar4) >> (local_20 & 0x1f);
        *param_1 = uVar2 | uVar4 << ((byte)param_3 & 0x1f);
        param_1 = param_1 + 1;
        uVar2 = uVar3;
      } while (puVar1 != param_2);
      return uVar3;
    }
    uVar2 = 0;
  }
  else {
    uVar4 = param_3 >> 5;
    uVar2 = param_4;
    while (uVar2 = uVar2 - 1, uVar2 != 0xffffffff) {
      while (uVar4 <= uVar2) {
        param_1[uVar2] = param_2[uVar2 - uVar4];
        uVar2 = uVar2 - 1;
        if (uVar2 == 0xffffffff) goto LAB_00441f8a;
      }
      param_1[uVar2] = 0;
    }
LAB_00441f8a:
    uVar3 = param_3 & 0x1f;
    uVar2 = param_2[param_4 - uVar4] << (sbyte)uVar3;
    if (uVar3 != 0) {
      uVar4 = FUN_00441f40(param_1,param_1,uVar3,param_4);
      return uVar2 | uVar4;
    }
  }
  return uVar2;
}

