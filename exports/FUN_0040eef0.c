
undefined4 __fastcall FUN_0040eef0(uint param_1,void *param_2,ushort param_3)

{
  uint uVar1;
  byte bVar2;
  short sVar3;
  uint in_EAX;
  undefined4 *puVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint local_34;
  uint local_30;
  uint local_20;
  
  if ((DAT_00479ee8 < in_EAX) || (uVar1 = in_EAX + param_1, DAT_00479ee8 < uVar1)) {
    return 0xffffffff;
  }
  uVar10 = in_EAX >> 0xe;
  uVar6 = in_EAX & 0x3fff;
  local_30 = 0x4000 - uVar6;
  if (uVar6 == 0) {
    local_30 = 0;
  }
  if (local_30 < param_1) {
    local_30 = param_1 - local_30;
    uVar8 = local_30 & 0x3fff;
    if (local_30 < 0x4000) {
      uVar8 = local_30;
    }
    local_30 = local_30 >> 0xe;
    if (uVar8 == 0) {
      if (uVar6 == 0) {
        memcpy((void *)(in_EAX + DAT_00479ed8),param_2,param_1);
        if (local_30 == 0) {
          if (param_3 == 0xf1f1) {
            DAT_004cd840 = uVar1;
            return 0;
          }
          goto joined_r0x0040f1ce;
        }
      }
      else {
        local_30 = local_30 + 1;
        memcpy((void *)(in_EAX + DAT_00479ed8),param_2,param_1);
      }
    }
    else {
      if (uVar6 == 0) {
        memcpy((void *)(in_EAX + DAT_00479ed8),param_2,param_1);
        local_30 = local_30 + 1;
      }
      else {
        memcpy((void *)(in_EAX + DAT_00479ed8),param_2,param_1);
        local_30 = local_30 + 2;
      }
LAB_0040ef92:
      memset((void *)(DAT_00479ed8 + uVar1),0,(uVar1 + 0x3fff & 0xffffc000) - uVar1);
    }
  }
  else {
    memcpy((void *)(in_EAX + DAT_00479ed8),param_2,param_1);
    local_30 = 1;
    if (param_1 != 0) goto LAB_0040ef92;
  }
  local_34 = 0;
  iVar7 = uVar10 << 9;
  uVar6 = uVar10;
  do {
    iVar11 = iVar7 + 0x200;
    bVar2 = (byte)(uVar6 >> 8) & 0xf;
    do {
      while( true ) {
        puVar4 = (undefined4 *)(DAT_00479ed0 + iVar7);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        if (DAT_00479ef0 == 0) break;
        iVar7 = iVar7 + 0x10;
        *(undefined1 *)puVar4 = 0xff;
        *(byte *)((int)puVar4 + 2) = *(byte *)((int)puVar4 + 2) & 0xf0 | bVar2;
        *(char *)((int)puVar4 + 1) = (char)uVar6;
        if (iVar7 == iVar11) goto LAB_0040f02c;
      }
      iVar7 = iVar7 + 0x10;
      *(undefined1 *)((int)puVar4 + 5) = 0xff;
      *(byte *)((int)puVar4 + 1) = *(byte *)((int)puVar4 + 1) & 0xf0 | bVar2;
      *(char *)puVar4 = (char)uVar6;
    } while (iVar7 != iVar11);
LAB_0040f02c:
    local_34 = local_34 + 1;
    uVar6 = uVar6 + 1;
    iVar7 = iVar11;
  } while (local_34 < local_30);
  if (param_3 == 0xf1f1) {
    DAT_004cd840 = uVar1;
    return 0;
  }
  uVar5 = param_3 << 8 | param_3 >> 8;
  iVar7 = uVar10 - DAT_00479efc;
  if (0xfffd < (ushort)(param_3 - 1)) {
    iVar7 = iVar7 + 1;
    iVar11 = iVar7 + local_30;
    uVar6 = ((uVar10 - DAT_00479efc) + 1) * 0x100;
    do {
      sVar3 = (short)uVar6;
      uVar6 = (uint)(ushort)(sVar3 + 0x100);
      *(ushort *)(&DAT_004cb7be + iVar7 * 2) = ((ushort)((uint)iVar7 >> 8) & 0xff) + sVar3;
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar11);
    goto joined_r0x0040f1ce;
  }
  if (local_30 < 7) {
    *(ushort *)((int)&DAT_004cb7c0 + iVar7 * 2) = uVar5;
    if (local_30 == 1) goto LAB_0040f2aa;
    *(ushort *)((int)&DAT_004cb7c0 + iVar7 * 2 + 2) = uVar5;
    if (local_30 == 2) {
      uVar6 = 2;
      iVar11 = 2;
    }
    else {
      *(ushort *)((int)&DAT_004cb7c4 + iVar7 * 2) = uVar5;
      if (local_30 == 3) {
        uVar6 = 3;
        iVar11 = 3;
      }
      else {
        *(ushort *)((int)&DAT_004cb7c4 + iVar7 * 2 + 2) = uVar5;
        if (local_30 == 4) {
          uVar6 = 4;
          iVar11 = 4;
        }
        else {
          *(ushort *)((int)&DAT_004cb7c8 + iVar7 * 2) = uVar5;
          if (local_30 == 5) {
            uVar6 = 5;
            iVar11 = 5;
          }
          else {
            *(ushort *)((int)&DAT_004cb7c8 + iVar7 * 2 + 2) = uVar5;
            iVar11 = 6;
            uVar6 = local_30;
          }
        }
      }
    }
LAB_0040f193:
    if (local_30 == uVar6) goto joined_r0x0040f1ce;
    local_20 = local_30 - uVar6;
    if (local_20 != 1) goto LAB_0040f254;
  }
  else {
    if (((uint)((int)&DAT_004cb7c0 + iVar7 * 2) >> 1 & 1) != 0) {
      *(ushort *)((int)&DAT_004cb7c0 + iVar7 * 2) = uVar5;
LAB_0040f2aa:
      uVar6 = 1;
      iVar11 = 1;
      goto LAB_0040f193;
    }
    local_20 = local_30;
    uVar6 = 0;
    iVar11 = 0;
LAB_0040f254:
    uVar9 = (local_20 - 2 >> 1) + 1;
    local_34 = uVar9 * 2;
    uVar8 = 0;
    do {
      *(uint *)((int)&DAT_004cb7c0 + uVar8 * 4 + (iVar7 + uVar6) * 2) = CONCAT22(uVar5,uVar5);
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar9);
    iVar11 = iVar11 + local_34;
    if (local_34 == local_20) goto joined_r0x0040f1ce;
  }
  *(ushort *)((int)&DAT_004cb7c0 + (iVar7 + iVar11) * 2) = uVar5;
joined_r0x0040f1ce:
  if (param_3 == 0xffff) {
    *(undefined2 *)((int)&DAT_004cb7c0 + (uVar10 + local_30 + ~DAT_00479efc) * 2) = 0xff1f;
  }
  DAT_004cd840 = uVar1;
  return 0;
}

