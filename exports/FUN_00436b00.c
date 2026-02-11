
undefined8 __cdecl FUN_00436b00(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (((uint)param_1 & 7) != 0) {
    uVar2 = CONCAT31(CONCAT21(CONCAT11((byte)*param_1,*(undefined1 *)((int)param_1 + 1)),
                              *(undefined1 *)((int)param_1 + 2)),*(undefined1 *)((int)param_1 + 3))
            << 8;
    uVar5 = ((byte)param_1[1] | uVar2) << 8;
    uVar3 = (*(byte *)((int)param_1 + 5) | uVar5) << 8;
    return CONCAT44((((uint)(byte)*param_1 << 8 | uVar2 >> 0x18) << 8 | uVar5 >> 0x18) << 8 |
                    uVar3 >> 0x18,
                    (uint)*(byte *)((int)param_1 + 7) | (*(byte *)((int)param_1 + 6) | uVar3) << 8);
  }
  uVar2 = param_1[1];
  uVar3 = *param_1;
  uVar5 = uVar2 * 0x1000000 + (uVar2 >> 0x18);
  uVar4 = (uVar2 & 0xff00) * 0x100;
  uVar1 = uVar5 + uVar4;
  uVar6 = uVar2 >> 8 & 0xff00;
  return CONCAT44(uVar3 * 0x1000000 + (uVar3 & 0xff00) * 0x100 + (uVar3 >> 8 & 0xff00) +
                  (uVar3 >> 0x18) + (uint)CARRY4(uVar2 * 0x1000000,uVar2 >> 0x18) +
                  (uint)CARRY4(uVar5,uVar4) + (uint)CARRY4(uVar1,uVar6),uVar1 + uVar6);
}

