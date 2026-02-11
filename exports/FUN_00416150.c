
undefined4 __cdecl FUN_00416150(uint *param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint local_40;
  uint *local_34;
  uint *local_30;
  
  uVar7 = (-(uint)(DAT_00479f60 == 0) & 0xffffff20) + 0x100;
  uVar3 = DAT_00479f5c / uVar7;
  if (DAT_00479f5c % uVar7 != 0) {
    FUN_00433690(0,"UNEXPECTED DUMP PARSE ERROR: %d pages cannot divide by %d!\n");
    return 0;
  }
  FUN_00433690(1,"parsing dump into user and spare...\n");
  if (uVar3 != 0) {
    local_40 = 0;
    local_30 = param_1;
    local_34 = param_1;
    do {
      uVar4 = FUN_00415b00(local_34,local_40,uVar3);
      if (uVar4 != 0xfffffffe) {
        if (uVar4 == 0xffffffff) {
          uVar10 = 0;
          FUN_00433690(1,"bad block at 0x%x (raw offset 0x%x), block ignored\n");
          bVar2 = false;
          uVar4 = DAT_00479f74;
          if (DAT_00479f74 != 0) {
            do {
              while (((&DAT_00479f78)[uVar10] == local_40 && ((&DAT_00479ff8)[uVar10] == -1))) {
                FUN_00433690(1,"block 0x%x was remapped to block 0x%x at remap instance %d\n");
                (&DAT_00479ff8)[uVar10] = 0xffffffff;
                uVar10 = uVar10 + 1;
                bVar2 = true;
                uVar4 = DAT_00479f74;
                if (DAT_00479f74 <= uVar10) goto LAB_00416520;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar4);
LAB_00416520:
            if (bVar2) goto LAB_004163d0;
            if (uVar4 == 0x20) goto LAB_004165ba;
          }
          (&DAT_00479ff8)[uVar4] = 0xffffffff;
          (&DAT_00479f78)[uVar4] = local_40;
          DAT_00479f74 = uVar4 + 1;
        }
        else if (uVar4 == 0xfffffffd) {
          FUN_00433690(0,
                       "***** WARNING: nanddump.bin has a bad LBA at block 0x%x (raw offset 0x%x), block LBA ignored\n"
                      );
        }
        else if (uVar4 == 0xfffffffa) {
          FUN_00433690(0,
                       "***** WARNING: nanddump.bin has a mixed controller LBA at block 0x%x (raw offset 0x%x), block ignored\n"
                      );
          FUN_00433690(0,
                       "               this is likely caused by previously using jaspersb on a jasper type console!\n"
                      );
        }
        else {
          if (uVar4 == 0xfffffffc) {
            uVar4 = 0;
            FUN_00433690(1,"ECD error at block 0x%x (raw offset 0x%x), block will be remapped\n");
            bVar2 = false;
            uVar10 = DAT_00479f74;
            if (DAT_00479f74 == 0) {
              uVar4 = 1;
            }
            else {
              do {
                while (((&DAT_00479f78)[uVar4] == local_40 && ((&DAT_00479ff8)[uVar4] == -1))) {
                  FUN_00433690(1,"block 0x%x was remapped to block 0x%x at remap instance %d\n");
                  (&DAT_00479ff8)[uVar4] = 0xffffffff;
                  uVar4 = uVar4 + 1;
                  bVar2 = true;
                  uVar10 = DAT_00479f74;
                  if (DAT_00479f74 <= uVar4) goto LAB_0041666a;
                }
                uVar4 = uVar4 + 1;
              } while (uVar4 < uVar10);
LAB_0041666a:
              uVar4 = local_40;
              if (bVar2) goto LAB_00416251;
              if (uVar10 == 0x20) goto LAB_004165ba;
              uVar4 = uVar10 + 1;
            }
            (&DAT_00479ff8)[uVar10] = 0xffffffff;
            DAT_00479f74 = uVar4;
            (&DAT_00479f78)[uVar10] = local_40;
            uVar4 = local_40;
          }
          else if (local_40 != uVar4) {
            if ((int)local_40 < (int)(uVar3 - 0x20)) {
              FUN_00433690(0,"***** WARNING: ignoring possible remap of block 0x%x to block 0x%x\n")
              ;
              FUN_00433690(0,"               this dump may have some bad data!\n");
              uVar4 = local_40;
            }
            else {
              FUN_00433690(1,
                           "copying nanddump data from block 0x%x to block 0x%x for file extraction integrity\n"
                          );
            }
          }
LAB_00416251:
          iVar9 = DAT_00479f4c;
          if (local_40 == 0) {
            iVar5 = memcmp(s_zeropair_image_0044a5c0,(void *)(DAT_00479f4c + 0x10),0xe);
            if (iVar5 == 0) {
              FUN_00433690(0,"\n\n***** ERROR: nanddump.bin is a ZEROPAIR/XELL image, discarding\n")
              ;
              return 0;
            }
            iVar5 = FUN_00416070(uVar7);
            if (iVar5 == 0) {
              FUN_00433690(0,
                           "\n\n***** ERROR: nanddump.bin has mixed LBA in the same block which usually occurs\n"
                          );
              FUN_00433690(0,"             due to an improper nandpro write method, discarding\n");
              return 0;
            }
          }
          iVar5 = uVar7 * uVar4;
          iVar12 = iVar5 * 0x200;
          iVar11 = iVar5 * 0x10;
          puVar6 = local_30;
          do {
            puVar8 = (uint *)(iVar9 + iVar12);
            iVar12 = iVar12 + 0x200;
            *puVar8 = *puVar6;
            puVar8[0x7f] = puVar6[0x7f];
            iVar9 = (int)puVar8 - (int)((uint)(puVar8 + 1) & 0xfffffffc);
            puVar14 = (undefined4 *)((int)puVar6 - iVar9);
            puVar15 = (undefined4 *)((uint)(puVar8 + 1) & 0xfffffffc);
            for (uVar10 = iVar9 + 0x200U >> 2; iVar9 = DAT_00479f50, uVar10 != 0;
                uVar10 = uVar10 - 1) {
              *puVar15 = *puVar14;
              puVar14 = puVar14 + 1;
              puVar15 = puVar15 + 1;
            }
            uVar10 = puVar6[0x83];
            uVar13 = puVar6[0x81];
            uVar1 = puVar6[0x80];
            *(uint *)(DAT_00479f50 + 8 + iVar11) = puVar6[0x82];
            *(uint *)(iVar9 + 4 + iVar11) = uVar13;
            *(uint *)(iVar9 + iVar11) = uVar1;
            *(uint *)(iVar9 + 0xc + iVar11) = uVar10;
            iVar11 = iVar11 + 0x10;
            puVar6 = puVar6 + 0x84;
            iVar9 = DAT_00479f4c;
          } while ((iVar5 + uVar7) * 0x10 != iVar11);
          if (uVar4 != local_40) {
            bVar2 = false;
            uVar13 = 0;
            uVar10 = DAT_00479f74;
            if (DAT_00479f74 != 0) {
              do {
                while (((&DAT_00479f78)[uVar13] == uVar4 && ((&DAT_00479ff8)[uVar13] == -1))) {
                  FUN_00433690(1,"block 0x%x was remapped to block 0x%x at remap instance %d\n");
                  (&DAT_00479ff8)[uVar13] = local_40;
                  uVar13 = uVar13 + 1;
                  bVar2 = true;
                  uVar10 = DAT_00479f74;
                  if (DAT_00479f74 <= uVar13) goto LAB_00416380;
                }
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar10);
LAB_00416380:
              if (bVar2) goto LAB_004163d0;
              if (uVar10 == 0x20) {
LAB_004165ba:
                FUN_00433690(1,
                             "MAX REMAPS of 32 exceeded, remapping disabled and image rejected as faulty!\n"
                            );
                return 0;
              }
            }
            FUN_00433690(1,"block 0x%x was remapped to block 0x%x, entering remap instance %d\n");
            (&DAT_00479f78)[DAT_00479f74] = uVar4;
            (&DAT_00479ff8)[DAT_00479f74] = local_40;
            DAT_00479f74 = DAT_00479f74 + 1;
          }
        }
      }
LAB_004163d0:
      local_40 = local_40 + 1;
      local_34 = local_34 + uVar7 * 0x84;
      local_30 = local_30 + uVar7 * 0x84;
    } while (uVar3 != local_40);
  }
  FUN_00433690(1,"done!\n");
  if ((DAT_00479f00._3_1_ & 0x40) == 0) {
    if (DAT_00479f74 != 0) {
      FUN_00415ef0(uVar3);
      FUN_00433690(1,"--remap summary--\n");
      if (DAT_00479f74 != 0) {
        uVar3 = 0;
        do {
          while ((&DAT_00479ff8)[uVar3] != -5) {
            uVar3 = uVar3 + 1;
            FUN_00433690(1,"%d: source: 0x%04x dest: 0x%04x\n");
            if (DAT_00479f74 <= uVar3) goto LAB_00416741;
          }
          uVar3 = uVar3 + 1;
          FUN_00433690(1,"%d: source: 0x%04x dest: (NONE/BAD)\n");
        } while (uVar3 < DAT_00479f74);
      }
LAB_00416741:
      FUN_00433690(1,"-----------------\n");
      return 1;
    }
  }
  else if (DAT_00479f74 != 0) {
    FUN_00433690(1,"Discarding remap data as NOREMAP was specified!\n");
    DAT_00479f74 = 0;
  }
  return 1;
}

