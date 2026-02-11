
undefined4 __cdecl FUN_00438620(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  do {
    param_3 = param_3 + -1;
    uVar10 = *(uint *)(param_1 + 4 + param_3 * 8);
    uVar1 = *(uint *)(param_1 + param_3 * 8);
    uVar2 = (uVar10 >> 0x18) + uVar10 * 0x1000000;
    uVar9 = (uVar10 & 0xff00) * 0x100;
    uVar3 = uVar2 + uVar9;
    uVar6 = uVar10 >> 8 & 0xff00;
    uVar4 = uVar3 + uVar6;
    uVar7 = uVar1 * 0x1000000 + (uVar1 & 0xff00) * 0x100 + (uVar1 >> 8 & 0xff00) + (uVar1 >> 0x18) +
            (uint)CARRY4(uVar10 >> 0x18,uVar10 * 0x1000000) + (uint)CARRY4(uVar2,uVar9) +
            (uint)CARRY4(uVar3,uVar6);
    uVar10 = *(uint *)(param_2 + param_3 * 8);
    uVar1 = *(uint *)(param_2 + 4 + param_3 * 8);
    uVar3 = (uVar1 >> 0x18) + uVar1 * 0x1000000;
    uVar8 = (uVar1 & 0xff00) * 0x100;
    uVar6 = uVar3 + uVar8;
    uVar2 = uVar1 >> 8 & 0xff00;
    uVar9 = uVar6 + uVar2;
    uVar10 = uVar10 * 0x1000000 + (uVar10 & 0xff00) * 0x100 + (uVar10 >> 8 & 0xff00) +
             (uVar10 >> 0x18) + (uint)CARRY4(uVar1 >> 0x18,uVar1 * 0x1000000) +
             (uint)CARRY4(uVar3,uVar8) + (uint)CARRY4(uVar6,uVar2);
  } while (uVar7 == uVar10 && uVar4 == uVar9);
  if ((uVar10 < uVar7) || ((uVar10 <= uVar7 && (uVar9 < uVar4)))) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

