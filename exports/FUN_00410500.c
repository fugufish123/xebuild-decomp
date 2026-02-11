
undefined4 __cdecl
FUN_00410500(uint param_1,void *param_2,uint param_3,byte param_4,ushort param_5,int param_6)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  uint local_74;
  uint local_70;
  uint local_6c;
  undefined1 local_5c;
  uint local_4c;
  int local_44;
  uint local_28;
  
  if ((DAT_00479ee8 < param_1) || (uVar8 = param_3 + param_1, DAT_00479ee8 < uVar8)) {
    return 0xffffffff;
  }
  uVar3 = param_1 & 0x3fff;
  uVar4 = param_1 >> 0xe;
  uVar5 = 0x4000 - uVar3;
  if (uVar3 == 0) {
    uVar5 = 0;
  }
  if (uVar5 < param_3) {
    uVar5 = param_3 - uVar5;
    if (uVar5 < 0x4000) {
      local_28 = 0;
LAB_00410a3b:
      bVar16 = param_6 == 1;
      uVar5 = local_28 + 1;
      if (uVar3 != 0) {
        uVar5 = local_28 + 2;
      }
    }
    else {
      local_28 = uVar5 >> 0xe;
      if ((uVar5 & 0x3fff) != 0) goto LAB_00410a3b;
      if (uVar3 == 0) {
        memcpy((void *)(DAT_00479ed8 + param_1),param_2,param_3);
        goto LAB_00410628;
      }
      bVar16 = false;
      uVar5 = local_28 + 1;
    }
    local_28 = uVar5;
    memcpy((void *)(DAT_00479ed8 + param_1),param_2,param_3);
    if (bVar16) {
LAB_00410a69:
      memset((void *)(DAT_00479ed8 + uVar8),0,(uVar8 + 0x3fff & 0xffffc000) - uVar8);
    }
  }
  else {
    memcpy((void *)(DAT_00479ed8 + param_1),param_2,param_3);
    if ((param_6 == 1) && (param_3 != 0)) {
      local_28 = 1;
      goto LAB_00410a69;
    }
    local_28 = 1;
  }
LAB_00410628:
  uVar6 = param_3 >> 9;
  uVar9 = uVar6 + 1;
  uVar5 = param_3 + 0x200 >> 9;
  if ((param_3 & 0x1ff) == 0) {
    uVar9 = uVar6;
    uVar5 = uVar6;
  }
  uVar14 = param_1 & 0x1ffff;
  local_44 = uVar4 << 5;
  uVar6 = 0x20;
  if ((param_4 != 0 && param_4 != 0x30) && param_3 < 0x4000) {
    uVar6 = uVar5;
  }
  iVar12 = 0x100 - (uVar14 >> 9);
  if (uVar14 == 0) {
    iVar12 = 0x100;
  }
  uVar5 = uVar9 + 4 & 0xfffffffc;
  if ((uVar9 & 3) == 0) {
    uVar5 = uVar9;
  }
  local_4c = uVar4;
  do {
    if ((param_4 != 0 && param_4 != 0x30) && param_3 < 0x4000) {
      uVar11 = 0;
      if ((byte)(param_4 - 0x31) < 0xf) {
LAB_00410734:
        uVar11 = uVar3;
        if (DAT_00479ef0 != 0) {
          uVar11 = uVar14;
        }
        if (uVar11 != 0) {
          uVar11 = uVar11 >> 9;
        }
      }
      uVar15 = uVar11 + uVar6;
      if (uVar11 < uVar15) goto LAB_0041075e;
    }
    else {
      if ((byte)(param_4 - 0x31) < 0xf) goto LAB_00410734;
      uVar15 = 0x20;
      uVar11 = 0;
LAB_0041075e:
      bVar1 = (byte)(local_4c >> 8) & 0xf;
      iVar10 = (local_44 + uVar11) * 0x10;
      do {
        while( true ) {
          puVar7 = (undefined4 *)(DAT_00479ed0 + iVar10);
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          local_6c._0_1_ = (undefined1)(param_3 >> 8);
          if (DAT_00479ef0 == 0) break;
          *(undefined1 *)puVar7 = 0xff;
          *(byte *)((int)puVar7 + 2) = *(byte *)((int)puVar7 + 2) & 0xf0 | bVar1;
          *(char *)((int)puVar7 + 1) = (char)local_4c;
          if (1 < param_4) {
            *(byte *)(puVar7 + 3) = *(byte *)(puVar7 + 3) & 0xc0 | param_4 & 0x3f;
            if ((param_4 - 0x2a & 0xfd) == 0) {
              if (param_4 == 0x2c) {
                *(undefined1 *)((int)puVar7 + 5) = 1;
              }
              *(undefined1 *)((int)puVar7 + 9) = DAT_00479ecc;
              *(undefined1 *)(puVar7 + 2) = DAT_00479ecd;
              *(undefined1 *)((int)puVar7 + 7) = DAT_00479ece;
            }
            else {
              local_5c = (undefined1)(iVar12 - uVar5 >> 2);
              *(undefined1 *)((int)puVar7 + 5) = 1;
              *(undefined1 *)((int)puVar7 + 9) = local_5c;
              *(undefined1 *)(puVar7 + 2) = (undefined1)local_6c;
              *(undefined1 *)((int)puVar7 + 7) = (undefined1)param_3;
            }
          }
LAB_004107d3:
          uVar11 = uVar11 + 1;
          iVar10 = iVar10 + 0x10;
          if (uVar15 <= uVar11) goto LAB_0041086e;
        }
        *(undefined1 *)((int)puVar7 + 5) = 0xff;
        *(byte *)((int)puVar7 + 1) = *(byte *)((int)puVar7 + 1) & 0xf0 | bVar1;
        *(char *)puVar7 = (char)local_4c;
        if (param_4 < 2) goto LAB_004107d3;
        *(undefined1 *)((int)puVar7 + 2) = 1;
        *(byte *)(puVar7 + 3) = *(byte *)(puVar7 + 3) & 0xc0 | param_4 & 0x3f;
        *(char *)((int)puVar7 + 9) = ' ' - (char)uVar9;
        if (param_4 == 0x30) goto LAB_004107d3;
        uVar11 = uVar11 + 1;
        iVar10 = iVar10 + 0x10;
        *(undefined1 *)(puVar7 + 2) = (undefined1)local_6c;
        *(undefined1 *)((int)puVar7 + 7) = (undefined1)param_3;
      } while (uVar11 < uVar15);
    }
LAB_0041086e:
    uVar15 = DAT_00479efc;
    local_4c = local_4c + 1;
    local_44 = local_44 + 0x20;
  } while (local_28 + uVar4 != local_4c);
  if (param_5 == 0xf1f1) {
    DAT_004cd840 = uVar8;
    return 0;
  }
  uVar13 = param_5 << 8 | param_5 >> 8;
  iVar12 = uVar4 - DAT_00479efc;
  if (0xfffd < (ushort)(param_5 - 1)) {
    iVar12 = iVar12 + 1;
    uVar3 = ((uVar4 - DAT_00479efc) + 1) * 0x100;
    iVar10 = local_28 + iVar12;
    do {
      sVar2 = (short)uVar3;
      uVar3 = (uint)(ushort)(sVar2 + 0x100);
      *(ushort *)(&DAT_004cb7be + iVar12 * 2) = ((ushort)((uint)iVar12 >> 8) & 0xff) + sVar2;
      iVar12 = iVar12 + 1;
    } while (iVar10 != iVar12);
    goto joined_r0x00410a13;
  }
  if (local_28 < 7) {
    *(ushort *)((int)&DAT_004cb7c0 + iVar12 * 2) = uVar13;
    if (local_28 == 1) goto LAB_00410b4a;
    *(ushort *)((int)&DAT_004cb7c0 + iVar12 * 2 + 2) = uVar13;
    if (local_28 == 2) {
      uVar3 = 2;
      iVar10 = 2;
    }
    else {
      *(ushort *)((int)&DAT_004cb7c4 + iVar12 * 2) = uVar13;
      if (local_28 == 3) {
        uVar3 = 3;
        iVar10 = 3;
      }
      else {
        *(ushort *)((int)&DAT_004cb7c4 + iVar12 * 2 + 2) = uVar13;
        if (local_28 == 4) {
          uVar3 = 4;
          iVar10 = 4;
        }
        else {
          *(ushort *)((int)&DAT_004cb7c8 + iVar12 * 2) = uVar13;
          if (local_28 == 5) {
            uVar3 = 5;
            iVar10 = 5;
          }
          else {
            *(ushort *)((int)&DAT_004cb7c8 + iVar12 * 2 + 2) = uVar13;
            iVar10 = 6;
            uVar3 = local_28;
          }
        }
      }
    }
LAB_004109d6:
    if (local_28 == uVar3) goto joined_r0x00410a13;
    local_6c = local_28 - uVar3;
    if (local_6c != 1) goto LAB_00410ae8;
  }
  else {
    if (((uint)((int)&DAT_004cb7c0 + iVar12 * 2) >> 1 & 1) != 0) {
      *(ushort *)((int)&DAT_004cb7c0 + iVar12 * 2) = uVar13;
LAB_00410b4a:
      uVar3 = 1;
      iVar10 = 1;
      goto LAB_004109d6;
    }
    uVar3 = 0;
    local_6c = local_28;
    iVar10 = 0;
LAB_00410ae8:
    local_70 = (local_6c - 2 >> 1) + 1;
    local_74 = local_70 * 2;
    uVar5 = 0;
    do {
      *(uint *)((int)&DAT_004cb7c0 + uVar5 * 4 + (iVar12 + uVar3) * 2) = CONCAT22(uVar13,uVar13);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_70);
    iVar10 = iVar10 + local_74;
    if (local_74 == local_6c) goto joined_r0x00410a13;
  }
  *(ushort *)((int)&DAT_004cb7c0 + (iVar12 + iVar10) * 2) = uVar13;
joined_r0x00410a13:
  if (param_5 == 0xffff) {
    *(undefined2 *)((int)&DAT_004cb7c0 + (~uVar15 + local_28 + uVar4) * 2) = 0xff1f;
  }
  DAT_004cd840 = uVar8;
  return 0;
}

