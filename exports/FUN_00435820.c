
undefined4 __cdecl FUN_00435820(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  
  uVar4 = *param_3;
  uVar4 = (uVar4 & 0xff00) * 0x100 + (uVar4 >> 0x18) + uVar4 * 0x1000000 + (uVar4 >> 8 & 0xff00);
  if (uVar4 == 0x40) {
    puVar3 = param_3 + 0x84;
    puVar6 = param_3 + 0xc4;
    puVar7 = param_3 + 0x104;
    puVar5 = param_3 + 0x144;
    puVar1 = param_3 + 0x184;
  }
  else if (uVar4 == 0x20) {
    puVar3 = param_3 + 0x44;
    puVar6 = param_3 + 100;
    puVar7 = param_3 + 0x84;
    puVar5 = param_3 + 0xa4;
    puVar1 = param_3 + 0xc4;
  }
  else if (uVar4 == 0x18) {
    puVar3 = param_3 + 0x34;
    puVar6 = param_3 + 0x4c;
    puVar7 = param_3 + 100;
    puVar5 = param_3 + 0x7c;
    puVar1 = param_3 + 0x94;
  }
  else {
    if (uVar4 != 0x10) {
      return 0;
    }
    puVar3 = param_3 + 0x24;
    puVar6 = param_3 + 0x34;
    puVar7 = param_3 + 0x44;
    puVar5 = param_3 + 0x54;
    puVar1 = param_3 + 100;
  }
  uVar2 = FUN_00433aa0((int)puVar3,param_1,(int)puVar6,(int)puVar7,(int)puVar5,(int)puVar1,
                       uVar4 >> 1);
  return uVar2;
}

