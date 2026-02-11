
uint __cdecl FUN_00441110(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint local_28;
  uint local_24;
  uint local_20;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    return 0;
  }
  uVar2 = 0x80000000;
  uVar3 = 0;
  do {
    if ((param_3 & uVar2) != 0) {
      bVar1 = (byte)uVar3 & 0x1f;
      uVar2 = uVar3;
      goto LAB_0044115e;
    }
    uVar3 = uVar3 + 1;
    uVar2 = uVar2 >> 1;
  } while (uVar3 != 0x20);
  uVar2 = 0x20;
  bVar1 = 0;
LAB_0044115e:
  iVar4 = param_4 - 1;
  local_28 = FUN_00441f40(param_1,param_2,uVar2,param_4);
  puVar5 = param_1 + (param_4 - 1);
  do {
    local_24 = *puVar5;
    iVar4 = iVar4 + -1;
    local_20 = local_28;
    FUN_00446830(puVar5,&local_28,&local_24,param_3 << bVar1);
    puVar5 = puVar5 + -1;
  } while (iVar4 != -1);
  return local_28 >> ((byte)uVar3 & 0x1f);
}

