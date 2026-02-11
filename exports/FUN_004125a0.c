
undefined4 FUN_004125a0(void)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  uint *puVar5;
  char *pcVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  size_t _Size;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined4 *puVar18;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  uint local_24;
  
  if ((DAT_00479ea4 & 0x10000000) != 0) {
    return 0;
  }
  puVar5 = (uint *)malloc(DAT_00479ee8);
  DAT_00479ee0 = puVar5;
  if (puVar5 == (uint *)0x0) {
    return 0xffffffff;
  }
  if (DAT_00479ef0 == 0) {
    if (DAT_00479ef4 == 0) goto LAB_004125fd;
    FUN_00433690(1,"fixing up big block controller on small block NAND LBA numbers...");
    if ((DAT_00479ee4 & 0x7ffffff) != 0) {
      uVar17 = 0;
      iVar15 = 2;
      uVar13 = DAT_00479ee4;
      do {
        while( true ) {
          pcVar6 = (char *)(uVar17 * 0x10 + DAT_00479ed0);
          cVar2 = *pcVar6;
          if (cVar2 == -1) break;
          cVar7 = *(char *)(DAT_00479ed0 + iVar15);
LAB_00412cfa:
          iVar11 = iVar15 + -1;
          uVar17 = uVar17 + 1;
          *pcVar6 = cVar7;
          *(undefined1 *)(DAT_00479ed0 + iVar15) = *(undefined1 *)(DAT_00479ed0 + iVar11);
          iVar15 = iVar15 + 0x10;
          *(char *)(DAT_00479ed0 + iVar11) = cVar2;
          uVar13 = DAT_00479ee4;
          if (DAT_00479ee4 << 5 <= uVar17) goto LAB_00412d2d;
        }
        cVar7 = *(char *)(DAT_00479ed0 + iVar15);
        if (((*(char *)(DAT_00479ed0 + -1 + iVar15) != -1) || (cVar7 != -1)) ||
           (*(char *)(DAT_00479ed0 + 1 + iVar15) != -1)) goto LAB_00412cfa;
        if ((*(char *)(DAT_00479ed0 + 2 + iVar15) != -1) ||
           (*(char *)(DAT_00479ed0 + 3 + iVar15) != -1)) {
LAB_00412dc5:
          cVar7 = -1;
          goto LAB_00412cfa;
        }
        cVar7 = -1;
        if (*(char *)(DAT_00479ed0 + 4 + iVar15) != -1) goto LAB_00412cfa;
        if ((*(char *)(DAT_00479ed0 + 5 + iVar15) != -1) ||
           (*(char *)(DAT_00479ed0 + 6 + iVar15) != -1)) goto LAB_00412dc5;
        cVar7 = -1;
        if (*(char *)(DAT_00479ed0 + 7 + iVar15) != -1) goto LAB_00412cfa;
        if ((*(char *)(DAT_00479ed0 + 8 + iVar15) != -1) ||
           (*(char *)(DAT_00479ed0 + 9 + iVar15) != -1)) goto LAB_00412dc5;
        cVar7 = -1;
        if ((*(char *)(DAT_00479ed0 + 10 + iVar15) != -1) ||
           (*(char *)(DAT_00479ed0 + 0xb + iVar15) != -1)) goto LAB_00412cfa;
        if (*(char *)(DAT_00479ed0 + 0xc + iVar15) != -1) goto LAB_00412dc5;
        cVar7 = -1;
        if (*(char *)(DAT_00479ed0 + 0xd + iVar15) != -1) goto LAB_00412cfa;
        uVar17 = uVar17 + 1;
        iVar15 = iVar15 + 0x10;
      } while (uVar17 < uVar13 << 5);
    }
  }
  else {
    uVar13 = 0;
    FUN_00433690(1,"fixing up big block LBA numbers in spare...");
    uVar17 = DAT_00479ee4 >> 3;
    iVar15 = DAT_00479ed0;
    if (uVar17 != 0) {
      do {
        iVar11 = iVar15 + 0x1000;
        do {
          while (((*(byte *)(iVar15 + 2) & 0xf) != 0xf || (*(char *)(iVar15 + 1) != -1))) {
            *(char *)(iVar15 + 1) = (char)uVar13;
            iVar8 = iVar15 + 0x10;
            *(byte *)(iVar15 + 2) = *(byte *)(iVar15 + 2) & 0xf0 | (byte)(uVar13 >> 8) & 0xf;
            iVar15 = iVar8;
            if (iVar11 == iVar8) goto LAB_00412db3;
          }
          iVar15 = iVar15 + 0x10;
        } while (iVar11 != iVar15);
LAB_00412db3:
        uVar13 = uVar13 + 1;
        iVar15 = iVar11;
      } while (uVar17 != uVar13);
    }
  }
LAB_00412d2d:
  FUN_00433690(1,"done!\n");
LAB_004125fd:
  FUN_00433690(1,"calculating ECD bytes and assembling raw image...");
  if (DAT_00479ee4 != 0) {
    local_24 = 0;
    iVar15 = DAT_00479ed8;
    iVar11 = DAT_00479ed0;
    do {
      local_30 = local_24 << 9;
      puVar1 = puVar5 + 0x1080;
      local_34 = local_24 << 0xe;
      puVar12 = puVar5;
      do {
        iVar8 = 0;
        puVar10 = (uint *)(local_30 + iVar11);
        puVar14 = (uint *)(local_34 + iVar15);
        do {
          if (*(char *)((int)puVar14 + iVar8) != -1) goto LAB_00412685;
          iVar8 = iVar8 + 1;
        } while (iVar8 != 0x200);
        if ((((((((char)*puVar10 == -1) && (*(char *)((int)puVar10 + 1) == -1)) &&
               (*(char *)((int)puVar10 + 2) == -1)) &&
              ((*(char *)((int)puVar10 + 3) == -1 && ((char)puVar10[1] == -1)))) &&
             ((*(char *)((int)puVar10 + 5) == -1 &&
              ((*(char *)((int)puVar10 + 6) == -1 && (*(char *)((int)puVar10 + 7) == -1)))))) &&
            ((char)puVar10[2] == -1)) &&
           (((*(char *)((int)puVar10 + 9) == -1 && (*(char *)((int)puVar10 + 10) == -1)) &&
            (*(char *)((int)puVar10 + 0xb) == -1)))) {
          bVar4 = (byte)puVar10[3];
          if ((bVar4 != 0xff) || (*(char *)((int)puVar10 + 0xd) != -1)) goto LAB_0041268d;
          if (*(char *)((int)puVar10 + 0xe) != -1) {
            bVar4 = 0xff;
            goto LAB_0041268d;
          }
          if (*(char *)((int)puVar10 + 0xf) != -1) {
            bVar4 = 0xff;
            goto LAB_0041268d;
          }
        }
        else {
LAB_00412685:
          bVar4 = (byte)puVar10[3];
LAB_0041268d:
          uVar9 = 0;
          uVar13 = 0;
          uVar17 = 0;
          do {
            if ((uVar9 & 0x1f) == 0) {
              puVar5 = puVar14;
              if (uVar9 == 0x1000) {
                puVar5 = puVar10;
              }
              puVar14 = puVar5 + 1;
              uVar17 = ~*puVar5;
            }
            uVar13 = uVar17 & 1 ^ uVar13;
            if ((uVar13 & 1) != 0) {
              uVar13 = uVar13 ^ 0x6954559;
            }
            uVar9 = uVar9 + 1;
            uVar13 = uVar13 >> 1;
            uVar17 = uVar17 >> 1;
          } while (uVar9 != 0x1066);
          uVar13 = ~uVar13;
          *(byte *)(puVar10 + 3) = (bVar4 & 0x3f) + (char)(uVar13 << 6);
          *(char *)((int)puVar10 + 0xd) = (char)(uVar13 >> 2);
          *(char *)((int)puVar10 + 0xf) = (char)(uVar13 >> 0x12);
          *(char *)((int)puVar10 + 0xe) = (char)(uVar13 >> 10);
          puVar14 = (uint *)(DAT_00479ed8 + local_34);
          puVar10 = (uint *)(local_30 + DAT_00479ed0);
          iVar15 = DAT_00479ed8;
          iVar11 = DAT_00479ed0;
        }
        *puVar12 = *puVar14;
        puVar12[0x7f] = puVar14[0x7f];
        puVar5 = puVar12 + 0x84;
        iVar8 = (int)puVar12 - (int)((uint)(puVar12 + 1) & 0xfffffffc);
        puVar16 = (undefined4 *)((int)puVar14 - iVar8);
        puVar18 = (undefined4 *)((uint)(puVar12 + 1) & 0xfffffffc);
        for (uVar13 = iVar8 + 0x200U >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *puVar18 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar18 = puVar18 + 1;
        }
        uVar13 = puVar10[1];
        uVar17 = puVar10[2];
        uVar9 = puVar10[3];
        local_30 = local_30 + 0x10;
        local_34 = local_34 + 0x200;
        puVar12[0x80] = *puVar10;
        puVar12[0x81] = uVar13;
        puVar12[0x82] = uVar17;
        puVar12[0x83] = uVar9;
        puVar12 = puVar5;
      } while (puVar5 != puVar1);
      local_24 = local_24 + 1;
    } while (local_24 < DAT_00479ee4);
  }
  FUN_00433690(1,"done!\n");
  if ((DAT_00479f6c != 0) && ((DAT_00479f00._3_1_ & 0x10) != 0)) {
    FUN_00433690(1,"attempting to restore NAND MU data to big block unit from dump...");
    local_30 = (uint)DAT_00479ece;
    puVar5 = DAT_00479ee0 + local_30 * 0x8400;
    local_28 = local_30 << 0x11;
    local_2c = local_30 << 0xc;
    if (local_30 < DAT_00479ec8) {
      do {
        puVar1 = puVar5 + 0x8400;
        iVar15 = local_2c;
        iVar11 = local_28;
        puVar12 = puVar5;
        do {
          puVar14 = (uint *)(DAT_00479f4c + iVar11);
          iVar11 = iVar11 + 0x200;
          *puVar12 = *puVar14;
          puVar12[0x7f] = puVar14[0x7f];
          puVar5 = puVar12 + 0x84;
          iVar8 = (int)puVar12 - (int)((uint)(puVar12 + 1) & 0xfffffffc);
          puVar16 = (undefined4 *)((int)puVar14 - iVar8);
          puVar18 = (undefined4 *)((uint)(puVar12 + 1) & 0xfffffffc);
          for (uVar13 = iVar8 + 0x200U >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *puVar18 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar18 = puVar18 + 1;
          }
          puVar14 = (uint *)(DAT_00479f50 + iVar15);
          uVar13 = *(uint *)(DAT_00479f50 + 4 + iVar15);
          uVar17 = *(uint *)(DAT_00479f50 + 8 + iVar15);
          uVar9 = *(uint *)(DAT_00479f50 + 0xc + iVar15);
          iVar15 = iVar15 + 0x10;
          puVar12[0x80] = *puVar14;
          puVar12[0x81] = uVar13;
          puVar12[0x82] = uVar17;
          puVar12[0x83] = uVar9;
          puVar12 = puVar5;
        } while (puVar5 != puVar1);
        local_30 = local_30 + 1;
        local_28 = local_28 + 0x20000;
        local_2c = local_2c + 0x1000;
      } while (local_30 < DAT_00479ec8);
    }
    FUN_00433690(1,"done!\n");
  }
  if (DAT_00479f74 - 1 < 0x20) {
    if ((DAT_00479ef0 == DAT_00479f60) || (DAT_00479ea0 == 2)) {
      FUN_00433690(1,"remapping %d blocks\n");
      if (DAT_00479ef0 == 0) {
        _Size = 0x4200;
        uVar13 = (-(uint)((DAT_00479ea8 - 6U & 0xfffffffd) == 0) & 0xc00) + 0x400;
      }
      else {
        _Size = 0x21000;
        uVar13 = 0x200;
      }
      if (DAT_00479f74 != 0) {
        uVar17 = 0;
        do {
          uVar9 = (&DAT_00479f78)[uVar17];
          uVar3 = (&DAT_00479ff8)[uVar17];
          if ((uVar9 < uVar13) && (uVar3 < uVar13)) {
            iVar15 = uVar3 * _Size;
            FUN_00433690(1,"    copying 0x%x bytes of LBA 0x%x to block 0x%x...");
            memcpy((uint *)((int)DAT_00479ee0 + iVar15),(uint *)((int)DAT_00479ee0 + uVar9 * _Size),
                   _Size);
            FUN_00433690(1,"zero fill origin...");
            memset((uint *)(uVar9 * _Size + (int)DAT_00479ee0),0,_Size);
            puVar5 = (uint *)((int)DAT_00479ee0 + iVar15);
            do {
              if ((char)*puVar5 != -1) goto LAB_004129c6;
              puVar5 = (uint *)((int)puVar5 + 1);
            } while (puVar5 != (uint *)((int)DAT_00479ee0 +
                                       iVar15 + 0x21000 + (-(uint)(DAT_00479ef0 == 0) & 0xfffe3200))
                    );
            FUN_00433690(1,"\n        dest block is empty, fixing up LBA and ECD...");
            FUN_004100b0((int)(iVar15 + (int)DAT_00479ee0),(&DAT_00479f78)[uVar17],DAT_00479ef0);
LAB_004129c6:
            FUN_00433690(1,"done!\n");
          }
          else {
            if (uVar3 == 0xfffffffb) {
              FUN_00433690(1,"    Remapping block 0x%x is not required, zerofilling...");
              memset((uint *)((int)DAT_00479ee0 + uVar9 * _Size),0,_Size);
              goto LAB_004129c6;
            }
            FUN_00433690(1,
                         "\n\n***** ERROR: Remapping block 0x%x to block 0x%x is not sane on a NAND with 0x%x blocks!\n"
                        );
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < DAT_00479f74);
      }
    }
    else {
      FUN_00433690(1,
                   "\n\n***** ERROR: if you had given the same small/big block style NAND donor image I\'d be remapping %d bad blocks now...\n"
                  );
    }
  }
  FUN_00433690(1,"done remapping!\n");
  return 0;
}

