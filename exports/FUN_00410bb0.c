
void __cdecl FUN_00410bb0(char *param_1,void *param_2,undefined4 *param_3,uint param_4)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  undefined1 local_44;
  undefined1 local_40;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_24;
  
  iVar5 = DAT_0046f9c4;
  uVar8 = DAT_004cd840;
  if ((DAT_004cd840 & 0x3fff) != 0) {
    uVar8 = (DAT_004cd840 + 0x4000) - (DAT_004cd840 & 0x3fff);
  }
  uVar3 = param_4 + uVar8;
  if ((uint)((DAT_00479ef8 + 0x3ffff) * 0x4000) < uVar3) {
    FUN_00433690(0,"\n******* ERROR: adding %s will exceed available flash space! Skipped!\n\n");
    return;
  }
  sVar2 = (short)(uVar8 >> 0xe);
  iVar10 = DAT_0046f9c4 * 0x20;
  *(ushort *)(&DAT_004c97d6 + iVar10) =
       (sVar2 - (short)DAT_00479efc) * 0x100 + ((ushort)(sVar2 - (short)DAT_00479efc) >> 8);
  *(uint *)(&DAT_004c97d8 + iVar10) =
       (param_4 & 0xff00) * 0x100 + param_4 * 0x1000000 + (param_4 >> 0x18) +
       (param_4 >> 8 & 0xff00);
  strcpy((char *)(&DAT_004c97c0 + iVar5 * 8),param_1);
  bVar12 = DAT_00479ef0 == 0;
  *(undefined4 *)(&DAT_004c97dc + iVar10) = *param_3;
  if (bVar12) {
    FUN_0040eef0(param_4,param_2,0xffff);
    iVar5 = DAT_0046f9c4;
    goto LAB_00410ecc;
  }
  if ((DAT_00479ee8 < uVar3) || (DAT_00479ee8 < uVar8)) goto LAB_00410ecc;
  local_30 = uVar8 >> 0xe;
  uVar6 = uVar8 & 0x3fff;
  local_24 = 0x4000 - uVar6;
  if (uVar6 == 0) {
    local_24 = 0;
  }
  if (local_24 < param_4) {
    local_24 = param_4 - local_24;
    uVar7 = local_24 & 0x3fff;
    if (local_24 < 0x4000) {
      uVar7 = local_24;
    }
    local_24 = local_24 >> 0xe;
    if (uVar7 != 0) {
      local_24 = local_24 + 1;
      if (uVar6 == 0) {
        memcpy((void *)(uVar8 + DAT_00479ed8),param_2,param_4);
        goto LAB_00410f3d;
      }
LAB_00410f12:
      local_24 = local_24 + 1;
      memcpy((void *)(uVar8 + DAT_00479ed8),param_2,param_4);
      if (uVar7 != 0) goto LAB_00410f3d;
      goto LAB_00410d06;
    }
    if (uVar6 != 0) goto LAB_00410f12;
    memcpy((void *)(uVar8 + DAT_00479ed8),param_2,param_4);
    uVar8 = DAT_00479efc;
    if (local_24 != 0) goto LAB_00410d06;
  }
  else {
    memcpy((void *)(uVar8 + DAT_00479ed8),param_2,param_4);
    local_24 = 1;
    if (param_4 != 0) {
LAB_00410f3d:
      memset((void *)(DAT_00479ed8 + uVar3),0,(uVar3 + 0x3fff & 0xffffc000) - uVar3);
    }
LAB_00410d06:
    uVar6 = param_4 >> 9;
    uVar7 = param_4 + 0x200 >> 9;
    if ((param_4 & 0x1ff) == 0) {
      uVar7 = uVar6;
    }
    if ((param_4 & 0x1ff) != 0) {
      uVar6 = uVar6 + 1;
    }
    local_34 = local_30 << 9;
    uVar11 = local_30 + local_24;
    local_38 = local_30;
    uVar9 = 0x20;
    if (param_4 < 0x4000) {
      uVar9 = uVar7;
    }
    do {
      if ((0x3fff < param_4) || (uVar7 != 0)) {
        uVar8 = 0;
        bVar1 = (byte)(local_38 >> 8) & 0xf;
        iVar5 = local_34;
        do {
          while( true ) {
            puVar4 = (undefined4 *)(DAT_00479ed0 + iVar5);
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
            puVar4[3] = 0;
            if (DAT_00479ef0 == 0) break;
            *(undefined1 *)puVar4 = 0xff;
            uVar8 = uVar8 + 1;
            iVar5 = iVar5 + 0x10;
            *(byte *)((int)puVar4 + 2) = *(byte *)((int)puVar4 + 2) & 0xf0 | bVar1;
            *(char *)((int)puVar4 + 1) = (char)local_38;
            *(byte *)(puVar4 + 3) = *(byte *)(puVar4 + 3) & 0xc0 | 0x2a;
            *(undefined1 *)((int)puVar4 + 9) = DAT_00479ecc;
            *(undefined1 *)(puVar4 + 2) = DAT_00479ecd;
            *(undefined1 *)((int)puVar4 + 7) = DAT_00479ece;
            if (uVar9 <= uVar8) goto LAB_00410e09;
          }
          uVar8 = uVar8 + 1;
          iVar5 = iVar5 + 0x10;
          *(undefined1 *)((int)puVar4 + 5) = 0xff;
          *(undefined1 *)((int)puVar4 + 2) = 1;
          *(byte *)((int)puVar4 + 1) = *(byte *)((int)puVar4 + 1) & 0xf0 | bVar1;
          *(char *)puVar4 = (char)local_38;
          *(byte *)(puVar4 + 3) = *(byte *)(puVar4 + 3) & 0xc0 | 0x2a;
          *(char *)((int)puVar4 + 9) = ' ' - (char)uVar6;
          local_40 = (undefined1)(param_4 >> 8);
          *(undefined1 *)(puVar4 + 2) = local_40;
          local_44 = (undefined1)param_4;
          *(undefined1 *)((int)puVar4 + 7) = local_44;
        } while (uVar8 < uVar9);
      }
LAB_00410e09:
      uVar8 = DAT_00479efc;
      local_38 = local_38 + 1;
      local_34 = local_34 + 0x200;
    } while (uVar11 != local_38);
    iVar5 = (local_30 - DAT_00479efc) + 1;
    uVar6 = ((local_30 - DAT_00479efc) + 1) * 0x100;
    iVar10 = local_24 + iVar5;
    do {
      sVar2 = (short)uVar6;
      uVar6 = (uint)(ushort)(sVar2 + 0x100);
      *(ushort *)(&DAT_004cb7be + iVar5 * 2) = ((ushort)((uint)iVar5 >> 8) & 0xff) + sVar2;
      iVar5 = iVar5 + 1;
      local_30 = uVar11;
    } while (iVar10 != iVar5);
  }
  *(undefined2 *)((int)&DAT_004cb7c0 + (local_30 + ~uVar8) * 2) = 0xff1f;
  iVar5 = DAT_0046f9c4;
  DAT_004cd840 = uVar3;
LAB_00410ecc:
  DAT_0046f9c4 = iVar5 + 1;
  return;
}

