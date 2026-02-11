
undefined4 __cdecl FUN_00413410(char *param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint3 uVar4;
  uint uVar5;
  uint uVar6;
  
  if ((DAT_004709ec != 0) && (param_1 != (char *)0x0)) {
    bVar1 = *(byte *)(DAT_004709f0 + 0x9ca);
    uVar3 = CONCAT11(bVar1,*(byte *)(DAT_004709f0 + 0x9cb));
    uVar4 = CONCAT21(uVar3,*(byte *)(DAT_004709f0 + 0x9cc));
    bVar2 = *(byte *)(DAT_004709f0 + 0x9ce);
    uVar5 = CONCAT31(uVar4,*(byte *)(DAT_004709f0 + 0x9cd)) * 0x100;
    uVar6 = ((((uint)CARRY4((uint)*(byte *)(DAT_004709f0 + 0x9cb),(uint)bVar1 << 8) * 0x100 +
              (uint)CARRY4((uint)*(byte *)(DAT_004709f0 + 0x9cc),(uint)uVar3 << 8)) * 0x100 +
             (uint)CARRY4((uint)*(byte *)(DAT_004709f0 + 0x9cd),(uint)uVar4 << 8)) * 0x100 |
            (uint)bVar1) + (uint)CARRY4(uVar5,(uint)bVar2);
    if (9 < (bVar2 & 0xf)) {
      return 0;
    }
    sprintf(param_1,"%011I64u%X",uVar5 + bVar2 >> 4 | uVar6 * 0x10000000,uVar6 >> 4,
            (uint)(bVar2 & 0xf));
    return 1;
  }
  return 0;
}

