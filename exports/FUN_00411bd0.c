
void FUN_00411bd0(uint param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 *_Src;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint local_40;
  uint local_3c;
  undefined1 local_38;
  uint local_34;
  uint local_2c;
  
  local_40 = param_1;
  local_2c = param_1 >> 0xe;
  if ((DAT_00479ef0 != 0) && ((param_1 & 0x1ffff) != 0)) {
    local_40 = param_1 + 0x20000 & 0xfffe0000;
    local_2c = local_40 >> 0xe;
  }
  *(undefined2 *)((int)&DAT_004cb7c0 + (local_2c - DAT_00479efc) * 2) = 0xfd1f;
  _Src = (undefined4 *)malloc(0x4000);
  puVar4 = _Src;
  puVar9 = &DAT_004cb7c0;
  puVar11 = &DAT_004c97c0;
  do {
    puVar10 = puVar9 + 0x80;
    puVar13 = puVar4;
    for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar13 = puVar13 + 1;
    }
    puVar9 = puVar11;
    puVar13 = puVar4 + 0x80;
    for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar13 = puVar13 + 1;
    }
    puVar4 = puVar4 + 0x100;
    puVar9 = puVar10;
    puVar11 = puVar11 + 0x80;
  } while (puVar10 != &DAT_004cd7c0);
  uVar3 = local_40 + 0x4000;
  FUN_00433690(1,"offset 0x%x len 0x4000 (end 0x%x)...");
  if (DAT_00479ef0 == 0) {
    if ((local_40 <= DAT_00479ee8) && (uVar3 <= DAT_00479ee8)) {
      uVar7 = local_40 >> 0xe;
      if ((local_40 & 0x3fff) == 0) {
        memcpy((void *)(local_40 + DAT_00479ed8),_Src,0x4000);
        local_34 = 1;
      }
      else {
        memcpy((void *)(local_40 + DAT_00479ed8),_Src,0x4000);
        local_34 = 2;
      }
      local_3c = 0;
      iVar6 = uVar7 << 9;
      uVar12 = uVar7;
      do {
        iVar5 = iVar6 + 0x200;
        uVar8 = (undefined1)uVar12;
        bVar2 = (byte)(uVar12 >> 8) & 0xf;
        if ((local_40 & 0x1ffff) == 0) {
          do {
            while( true ) {
              puVar4 = (undefined4 *)(DAT_00479ed0 + iVar6);
              *puVar4 = 0;
              puVar4[1] = 0;
              puVar4[2] = 0;
              puVar4[3] = 0;
              if (DAT_00479ef0 != 0) break;
              iVar6 = iVar6 + 0x10;
              *(undefined1 *)((int)puVar4 + 5) = 0xff;
              *(undefined1 *)((int)puVar4 + 9) = 0;
              *(undefined1 *)((int)puVar4 + 2) = 1;
              *(byte *)((int)puVar4 + 1) = *(byte *)((int)puVar4 + 1) & 0xf0 | bVar2;
              *(undefined1 *)puVar4 = uVar8;
              *(byte *)(puVar4 + 3) = *(byte *)(puVar4 + 3) & 0xc0 | 0x30;
              if (iVar6 == iVar5) goto LAB_00411db7;
            }
            iVar6 = iVar6 + 0x10;
            *(undefined1 *)puVar4 = 0xff;
            *(undefined1 *)((int)puVar4 + 9) = 0x38;
            *(undefined1 *)((int)puVar4 + 5) = 1;
            *(undefined1 *)(puVar4 + 2) = 0x40;
            *(undefined1 *)((int)puVar4 + 7) = 0;
            *(byte *)((int)puVar4 + 2) = *(byte *)((int)puVar4 + 2) & 0xf0 | bVar2;
            *(undefined1 *)((int)puVar4 + 1) = uVar8;
            *(byte *)(puVar4 + 3) = *(byte *)(puVar4 + 3) & 0xc0 | 0x30;
          } while (iVar6 != iVar5);
        }
        else {
          do {
            while( true ) {
              puVar4 = (undefined4 *)(DAT_00479ed0 + iVar6);
              *puVar4 = 0;
              puVar4[1] = 0;
              puVar4[2] = 0;
              puVar4[3] = 0;
              if (DAT_00479ef0 == 0) break;
              iVar6 = iVar6 + 0x10;
              *(undefined1 *)puVar4 = 0xff;
              *(undefined1 *)((int)puVar4 + 5) = 1;
              *(undefined1 *)(puVar4 + 2) = 0x40;
              *(undefined1 *)((int)puVar4 + 7) = 0;
              *(byte *)((int)puVar4 + 2) = *(byte *)((int)puVar4 + 2) & 0xf0 | bVar2;
              *(undefined1 *)((int)puVar4 + 1) = uVar8;
              *(byte *)(puVar4 + 3) = *(byte *)(puVar4 + 3) & 0xc0 | 0x30;
              local_38 = (undefined1)(0xe0 - ((local_40 & 0x1ffff) >> 9) >> 2);
              *(undefined1 *)((int)puVar4 + 9) = local_38;
              if (iVar6 == iVar5) goto LAB_00411db7;
            }
            iVar6 = iVar6 + 0x10;
            *(undefined1 *)((int)puVar4 + 5) = 0xff;
            *(undefined1 *)((int)puVar4 + 9) = 0;
            *(undefined1 *)((int)puVar4 + 2) = 1;
            *(byte *)((int)puVar4 + 1) = *(byte *)((int)puVar4 + 1) & 0xf0 | bVar2;
            *(undefined1 *)puVar4 = uVar8;
            *(byte *)(puVar4 + 3) = *(byte *)(puVar4 + 3) & 0xc0 | 0x30;
          } while (iVar6 != iVar5);
        }
LAB_00411db7:
        local_3c = local_3c + 1;
        uVar12 = uVar12 + 1;
        iVar6 = iVar5;
      } while (local_3c < local_34);
      iVar6 = uVar7 - DAT_00479efc;
      *(undefined2 *)((int)&DAT_004cb7c0 + iVar6 * 2) = 0xfd1f;
      DAT_004cd840 = uVar3;
      if (local_34 == 2) {
        *(undefined2 *)((int)&DAT_004cb7c0 + iVar6 * 2 + 2) = 0xfd1f;
      }
    }
  }
  else if ((local_40 <= DAT_00479ee8) && (uVar3 <= DAT_00479ee8)) {
    uVar12 = local_40 >> 0xe;
    iVar5 = ((local_40 & 0x3fff) != 0) + 1;
    memcpy((void *)(DAT_00479ed8 + local_40),_Src,0x4000);
    iVar6 = uVar12 << 9;
    uVar7 = uVar12;
    do {
      iVar1 = iVar6 + 0x200;
      bVar2 = (byte)(uVar7 >> 8) & 0xf;
      do {
        while( true ) {
          puVar4 = (undefined4 *)(DAT_00479ed0 + iVar6);
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
          if (DAT_00479ef0 == 0) break;
          *(undefined1 *)puVar4 = 0xff;
          iVar6 = iVar6 + 0x10;
          *(undefined1 *)((int)puVar4 + 5) = 1;
          *(byte *)((int)puVar4 + 2) = *(byte *)((int)puVar4 + 2) & 0xf0 | bVar2;
          *(char *)((int)puVar4 + 1) = (char)uVar7;
          *(byte *)(puVar4 + 3) = *(byte *)(puVar4 + 3) & 0xc0 | 0x2c;
          *(undefined1 *)((int)puVar4 + 9) = DAT_00479ecc;
          *(undefined1 *)(puVar4 + 2) = DAT_00479ecd;
          *(undefined1 *)((int)puVar4 + 7) = DAT_00479ece;
          if (iVar1 == iVar6) goto joined_r0x004120d5;
        }
        iVar6 = iVar6 + 0x10;
        *(undefined1 *)((int)puVar4 + 5) = 0xff;
        *(undefined1 *)((int)puVar4 + 9) = 0;
        *(undefined1 *)((int)puVar4 + 2) = 1;
        *(undefined1 *)(puVar4 + 2) = 0x40;
        *(undefined1 *)((int)puVar4 + 7) = 0;
        *(byte *)((int)puVar4 + 1) = *(byte *)((int)puVar4 + 1) & 0xf0 | bVar2;
        *(char *)puVar4 = (char)uVar7;
        *(byte *)(puVar4 + 3) = *(byte *)(puVar4 + 3) & 0xc0 | 0x2c;
      } while (iVar1 != iVar6);
joined_r0x004120d5:
      uVar7 = uVar7 + 1;
      iVar6 = iVar1;
    } while (uVar12 + iVar5 != uVar7);
    iVar6 = uVar12 - DAT_00479efc;
    *(undefined2 *)((int)&DAT_004cb7c0 + iVar6 * 2) = 0xfe1f;
    DAT_004cd840 = uVar3;
    if (iVar5 == 2) {
      *(undefined2 *)((int)&DAT_004cb7c0 + iVar6 * 2 + 2) = 0xfe1f;
    }
  }
  FUN_00420b00(local_2c & 0xffff,&DAT_004c9180);
  FUN_00420b00(0,&DAT_004c9182);
  free(_Src);
  return;
}

