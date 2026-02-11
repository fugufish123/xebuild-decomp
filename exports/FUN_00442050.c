
undefined4 __cdecl FUN_00442050(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (param_2 & 0xffff) * (param_3 & 0xffff);
  uVar2 = (param_2 & 0xffff) * (param_3 >> 0x10);
  uVar1 = (param_3 & 0xffff) * (param_2 >> 0x10);
  uVar3 = uVar2 + uVar1;
  uVar4 = uVar3 * 0x10000;
  *param_1 = uVar5 + uVar4;
  param_1[1] = (param_2 >> 0x10) * (param_3 >> 0x10) +
               (((uint)CARRY4(uVar2,uVar1) * 0x10000 + (uVar3 >> 0x10) + 1) -
               (uint)!CARRY4(uVar5,uVar4));
  return 0;
}

