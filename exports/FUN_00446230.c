
uint __cdecl FUN_00446230(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte local_20;
  
  if (param_3 < 0x20) {
    iVar2 = param_4 - 1;
    local_20 = 0x20 - (byte)param_3;
    if (param_4 != 0) {
      uVar3 = 0;
      do {
        uVar1 = *(uint *)(param_2 + iVar2 * 4);
        uVar4 = (~(-1 << ((byte)param_3 & 0x1f)) & uVar1) << (local_20 & 0x1f);
        *(uint *)(param_1 + iVar2 * 4) = uVar3 | uVar1 >> ((byte)param_3 & 0x1f);
        iVar2 = iVar2 + -1;
        uVar3 = uVar4;
      } while (iVar2 != -1);
      return uVar4;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = param_3 >> 5;
    if (param_4 != 0) {
      iVar2 = param_1 + uVar3 * -4;
      uVar1 = uVar3;
      do {
        while (param_4 <= uVar1) {
          *(undefined4 *)(iVar2 + uVar1 * 4) = 0;
          uVar1 = uVar1 + 1;
          if (uVar3 + param_4 == uVar1) goto LAB_00446289;
        }
        *(undefined4 *)(iVar2 + uVar1 * 4) = *(undefined4 *)(param_2 + uVar1 * 4);
        uVar1 = uVar1 + 1;
      } while (uVar1 != uVar3 + param_4);
    }
LAB_00446289:
    uVar1 = param_3 & 0x1f;
    uVar3 = *(uint *)(param_2 + -4 + uVar3 * 4) >> (sbyte)uVar1;
    if (uVar1 != 0) {
      uVar1 = FUN_00446230(param_1,param_1,uVar1,param_4);
      return uVar3 | uVar1;
    }
  }
  return uVar3;
}

