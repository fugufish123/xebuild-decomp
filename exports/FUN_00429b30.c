
/* WARNING: Type propagation algorithm not settling */

undefined4 __cdecl FUN_00429b30(byte *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar2 = FUN_00420ad0((uint *)(param_1 + 0xc));
  if (param_2 < uVar2) {
    FUN_00433690(0,"\n\n***** ERROR: BL size (0x%x) is bigger than the file (0x%x) read in!\n");
    return 0xfffffffd;
  }
  if ((*param_1 & 0x43) != 0x43) {
LAB_00429ded:
    FUN_00433690(0,"\n\n***** ERROR: BL magic check %c%c for type %d failed!\n");
    return 0xffffffff;
  }
  switch(param_3) {
  case 5:
  case 6:
  case 0xb:
  case 0x11:
    if (param_1[1] != 0x42) goto LAB_00429ded;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    puVar5 = (undefined4 *)((uint)(param_1 + 0x14) & 0xfffffffc);
    for (uVar4 = (uint)(param_1 + (0x40 - (int)((uint)(param_1 + 0x14) & 0xfffffffc))) >> 2;
        uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    uVar2 = FUN_00433800(param_1,uVar2);
    goto joined_r0x00429bc0;
  case 7:
  case 0x12:
    if (param_1[1] != 0x44) goto LAB_00429ded;
    goto LAB_00429cdd;
  case 8:
  case 0x13:
    if (param_1[1] != 0x45) goto LAB_00429ded;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    uVar2 = FUN_00433800(param_1,uVar2);
    if (param_4 == uVar2) {
      FUN_00420ab0(param_1 + 4);
      pbVar3 = param_1 + 2;
LAB_00429d4d:
      uVar1 = FUN_00420ab0(pbVar3);
      FUN_00420ab0(param_1);
      uVar2 = (uint)uVar1 << 8 | 0x20000000;
      if (uVar2 <= DAT_00479eac) {
        return 0;
      }
      DAT_00479eac = uVar2;
      return 0;
    }
    break;
  case 9:
  case 0xf:
  case 0x14:
    if (param_1[1] != 0x46) goto LAB_00429ded;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x22c] = 0;
    param_1[0x22d] = 0;
    param_1[0x22e] = 0;
    param_1[0x22f] = 0;
    puVar5 = (undefined4 *)((uint)(param_1 + 0x24) & 0xfffffffc);
    for (uVar4 = (uint)(param_1 + (0x230 - (int)((uint)(param_1 + 0x24) & 0xfffffffc))) >> 2;
        uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    uVar2 = FUN_00433800(param_1,uVar2);
    if (param_4 == uVar2) {
      FUN_00420ab0(param_1 + 0x16);
      pbVar3 = param_1 + 0x14;
      goto LAB_00429d4d;
    }
    break;
  case 10:
  case 0x10:
  case 0x15:
    if (param_1[1] != 0x47) goto LAB_00429ded;
LAB_00429cdd:
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
LAB_00429bb0:
    uVar2 = FUN_00433800(param_1,uVar2);
joined_r0x00429bc0:
    if (param_4 == uVar2) {
      return 0;
    }
    break;
  case 0xc:
    if (param_1[1] != 0x43) goto LAB_00429ded;
    goto LAB_00429b8d;
  case 0xd:
    if (param_1[1] != 0x44) goto LAB_00429ded;
LAB_00429b8d:
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
joined_r0x00429c42:
    if (param_4 == 0xffffffff) {
      return 0;
    }
    goto LAB_00429bb0;
  case 0xe:
    if (param_1[1] != 0x45) goto LAB_00429ded;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    FUN_00433800(param_1,uVar2);
    FUN_00420ab0(param_1 + 4);
    uVar1 = FUN_00420ab0(param_1 + 2);
    FUN_00420ab0(param_1);
    uVar4 = (uint)uVar1 << 8 | 0x20000000;
    if (DAT_00479eac < uVar4) {
      DAT_00479eac = uVar4;
    }
    goto joined_r0x00429c42;
  }
  FUN_00433690(0,"\n\n***** ERROR: BL crc check failed! calculated: %08x expected: %08x\n");
  return 0xfffffffe;
}

