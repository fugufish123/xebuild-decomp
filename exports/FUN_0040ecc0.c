
undefined4 __fastcall FUN_0040ecc0(ushort param_1,undefined4 *param_2)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  ushort uVar4;
  uint in_EAX;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int local_28;
  int local_20;
  
  if ((DAT_00479ee8 < in_EAX) || (DAT_00479ee8 < in_EAX + 0x1000)) {
    uVar8 = 0xffffffff;
  }
  else {
    local_20 = 1;
    uVar10 = in_EAX >> 0xe;
    if ((in_EAX & 0x3fff) != 0) {
      local_20 = (0x4000 - (in_EAX & 0x3fff) < 0x1000) + 1;
    }
    puVar5 = (undefined4 *)(in_EAX + DAT_00479ed8);
    *puVar5 = *param_2;
    puVar5[0x3ff] = param_2[0x3ff];
    iVar6 = (int)puVar5 - (int)((uint)(puVar5 + 1) & 0xfffffffc);
    puVar7 = (undefined4 *)((int)param_2 - iVar6);
    puVar5 = (undefined4 *)((uint)(puVar5 + 1) & 0xfffffffc);
    for (uVar9 = iVar6 + 0x1000U >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar5 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar5 = puVar5 + 1;
    }
    local_28 = uVar10 << 9;
    uVar9 = uVar10;
    do {
      bVar1 = (byte)(uVar9 >> 8) & 0xf;
      iVar6 = local_28;
      do {
        while( true ) {
          puVar7 = (undefined4 *)(DAT_00479ed0 + iVar6);
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          if (DAT_00479ef0 == 0) break;
          iVar6 = iVar6 + 0x10;
          *(undefined1 *)puVar7 = 0xff;
          *(byte *)((int)puVar7 + 2) = *(byte *)((int)puVar7 + 2) & 0xf0 | bVar1;
          *(char *)((int)puVar7 + 1) = (char)uVar9;
          uVar3 = DAT_00479efc;
          if (iVar6 == local_28 + 0x80) goto joined_r0x0040ee8d;
        }
        iVar6 = iVar6 + 0x10;
        *(undefined1 *)((int)puVar7 + 5) = 0xff;
        *(byte *)((int)puVar7 + 1) = *(byte *)((int)puVar7 + 1) & 0xf0 | bVar1;
        *(char *)puVar7 = (char)uVar9;
        uVar3 = DAT_00479efc;
      } while (iVar6 != local_28 + 0x80);
joined_r0x0040ee8d:
      local_28 = local_28 + 0x200;
      uVar9 = uVar9 + 1;
      DAT_00479efc = uVar3;
    } while (local_20 + uVar10 != uVar9);
    if (param_1 != 0xf1f1) {
      uVar4 = param_1 << 8 | param_1 >> 8;
      iVar6 = uVar10 - uVar3;
      if ((ushort)(param_1 - 1) < 0xfffe) {
        *(ushort *)((int)&DAT_004cb7c0 + iVar6 * 2) = uVar4;
        if (local_20 == 2) {
          *(ushort *)((int)&DAT_004cb7c0 + iVar6 * 2 + 2) = uVar4;
        }
      }
      else {
        sVar2 = (short)uVar10 - (short)uVar3;
        *(ushort *)((int)&DAT_004cb7c0 + iVar6 * 2) =
             ((ushort)((uint)(iVar6 + 1) >> 8) & 0xff) + (sVar2 + 1) * 0x100;
        if (local_20 == 2) {
          *(ushort *)(iVar6 + 0x4cb7c1 + iVar6 + 1) =
               (sVar2 + 2) * 0x100 + ((ushort)((short)iVar6 + 2U) >> 8);
        }
        if (param_1 == 0xffff) {
          *(undefined2 *)((int)&DAT_004cb7c0 + (~uVar3 + local_20 + uVar10) * 2) = 0xff1f;
        }
      }
    }
    uVar8 = 0;
    DAT_004cd840 = in_EAX + 0x1000;
  }
  return uVar8;
}

