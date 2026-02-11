
int FUN_00415230(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  
  FUN_00433690(1,"Scanning for mobile data and fsroot...");
  if (DAT_00479f68 == 0) {
    iVar3 = FUN_00414e90();
  }
  else {
    iVar3 = FUN_00414960();
    if (iVar3 == 0) goto LAB_00415262;
    puVar10 = &DAT_00474b3c;
    iVar8 = 0;
    puVar4 = &DAT_00474a20;
    do {
      while( true ) {
        uVar1 = FUN_00420ab0(puVar10);
        if (uVar1 == 0) break;
        uVar2 = FUN_00420ab0(puVar10 + 2);
        if ((uVar2 != 0) || (uVar6 = 0x4000, iVar8 != 0)) {
          if (uVar2 == 0) break;
          uVar6 = (uint)uVar2;
        }
        puVar4[2] = iVar8;
        iVar8 = iVar8 + 1;
        *puVar4 = 1;
        puVar4[1] = 1;
        puVar10 = puVar10 + 4;
        puVar4[4] = (uint)uVar1 << 0xe;
        puVar4[5] = 0;
        puVar4[3] = uVar6;
        iVar3 = DAT_00474a20;
        puVar4 = puVar4 + 6;
        if (iVar8 == 10) goto LAB_00415289;
      }
      iVar8 = iVar8 + 1;
      puVar10 = puVar10 + 4;
      puVar4 = puVar4 + 6;
      iVar3 = DAT_00474a20;
    } while (iVar8 != 10);
  }
LAB_00415289:
  if (iVar3 != 0) {
    puts("done! fsroot found ok!");
    DAT_00474d20 = 0;
    if (DAT_00479f60 != 0) {
      DAT_00474d20 = ((uint)*(byte *)(DAT_00479f50 + 8 + DAT_00474a34) * -0x20 + 0xee0) * 0x4000;
      FUN_00433690(1,"bigblock file system offset set to 0x%x fsb: %x meta: %x lbaend: %x\n");
    }
    piVar7 = &DAT_00474a20;
    FUN_00433690(1,"Mobiles found:\n");
    iVar8 = 1;
    do {
      if (*piVar7 == 0) {
LAB_0041531d:
        if (iVar8 == 10) {
          puVar4 = &DAT_00474d40;
          puVar5 = (undefined4 *)(DAT_00474a30 + DAT_00479f4c);
          do {
            puVar9 = puVar5;
            puVar11 = puVar4;
            for (iVar8 = 0x80; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar11 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar11 = puVar11 + 1;
            }
            puVar4[0x800] = puVar5[0x80];
            puVar4[0x87f] = puVar5[0xff];
            puVar11 = puVar4 + 0x80;
            iVar8 = (int)puVar4 + (0x2000 - (int)(puVar4 + 0x801));
            puVar9 = (undefined4 *)((int)puVar5 + (0x200 - iVar8));
            puVar4 = puVar4 + 0x801;
            for (uVar6 = iVar8 + 0x200U >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar4 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar4 = puVar4 + 1;
            }
            puVar4 = puVar11;
            puVar5 = puVar5 + 0x100;
          } while (puVar11 != (undefined4 *)&DAT_00476d40);
          DAT_00474d24 = 1;
          return iVar3;
        }
      }
      else {
        if (iVar8 != 1) {
          FUN_00433690(1,
                       "    mobile%c.dat version %02d found at offset 0x%08x len 0x%04x page 0x%08x\n"
                      );
          goto LAB_0041531d;
        }
        FUN_00433690(1,
                     "    fsroot      version %02d found at offset 0x%08x len 0x%04x page 0x%08x\n")
        ;
      }
      piVar7 = piVar7 + 6;
      iVar8 = iVar8 + 1;
    } while( true );
  }
LAB_00415262:
  FUN_00433690(1,"\n\n***** ERROR! Could not find fsroot!\n");
  return 0;
}

