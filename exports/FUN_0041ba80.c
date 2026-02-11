
undefined4 __cdecl FUN_0041ba80(void *param_1,undefined4 param_2,byte *param_3,undefined1 *param_4)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  undefined3 extraout_var;
  byte bVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint local_30;
  uint *puStack_28;
  byte abStack_18 [8];
  
  pbVar4 = (byte *)malloc((size_t)param_3);
  memcpy(pbVar4,param_1,(size_t)param_3);
  iVar5 = FUN_004223b0((char *)(pbVar4 + -4 + (int)param_3),4);
  if (iVar5 == 0) {
    FUN_00433690(1,"SMC binary appears to be encrypted, attempting to decrypt...");
    iVar5 = FUN_00401730(pbVar4,(int)param_3);
    if (iVar5 == 0) {
      FUN_00433690(1,"failed!");
      FUN_00433690(0,
                   "\n******* ERROR: please make sure your provided a valid/decryptable SMC binary!\n\n"
                  );
      if ((DAT_00479f00 & 0x200000) == 0) {
        return 1;
      }
      memcpy(puStack_28,param_3,(size_t)param_3);
    }
    else {
      memcpy(param_3,pbVar4,(size_t)param_3);
      FUN_00433690(1,"success!");
    }
  }
  iVar5 = FUN_004223b0((char *)(pbVar4 + -4 + (int)param_3),4);
  if (iVar5 == 0) goto LAB_0041bb2d;
  bVar2 = FUN_0040bd80((int)param_3,(int)param_3,DAT_00479ea8);
  iVar5 = CONCAT31(extraout_var,bVar2);
  if (DAT_00479ea8 == 1) {
    if (iVar5 == 0) {
      FUN_00433690(1,"known/clean SMC binary found! type 0x%x\n");
    }
    else {
      FUN_00433690(0,
                   "\n******* ERROR: hacked or unknown SMC binary found? you should use a clean SMC binary for a retail image!\n\n"
                  );
      if ((DAT_00479f00 & 0x200000) == 0) {
        return 1;
      }
    }
LAB_0041bcb2:
    DAT_00479f00 = DAT_00479f00 & 0xf73fffff;
  }
  else {
    if (5 < DAT_00479ea8) {
      if (iVar5 == 0) {
        FUN_00433690(1,"known/clean SMC binary found!\n");
      }
      else {
        FUN_00433690(0,
                     "\n******* WARNING: hacked or unknown SMC binary found? Just a warning, there are a lot of different SMC binaries for devkits!\n\n"
                    );
      }
      goto LAB_0041bcb2;
    }
    if (iVar5 == 0) {
      if (DAT_00479ea8 == 3) {
        if ((DAT_00479f00 & 0x8000000) == 0) {
          FUN_00433690(0,
                       "\n******* ERROR: clean SMC binary found? you should use a hacked SMC binary for glitch images.\n\n"
                      );
        }
      }
      else if (DAT_00479ea8 - 4 < 2) {
        FUN_00433690(1,"known/clean SMC binary found!\n");
      }
      else {
        FUN_00433690(0,
                     "\n******* ERROR: clean SMC binary found? you should use a hacked SMC binary for JTAG images.\n\n"
                    );
        if ((DAT_00479f00 & 0x200000) == 0) {
          return 1;
        }
      }
    }
    else if (DAT_00479ea8 == 3) {
      FUN_00433690(1,"glitch hack found in SMC binary!\n");
      DAT_00479f00 = DAT_00479f00 & 0xf7ffffff;
    }
    else if (DAT_00479ea8 - 4 < 2) {
      FUN_00433690(1,"\n******* WARNING: hacked or unknown SMC binary found!\n");
    }
    else {
      FUN_00433690(1,"jtag hack found in SMC binary!\n");
    }
  }
  if ((DAT_00479f00 & 0x8c00000) != 0) {
    FUN_0040c020((int)param_3,(int)param_3,DAT_00479f00 & 0x8c00000);
  }
  abStack_18[0] = 0x42;
  abStack_18[1] = 0x75;
  abStack_18[2] = 0x4e;
  abStack_18[3] = 0x79;
  *(undefined4 *)param_3 = DAT_0044a640;
  if (param_3 != (byte *)0x0) {
    bVar7 = 0x42;
    uVar6 = 1;
    bVar3 = 0x75;
    pbVar4 = param_3;
    while( true ) {
      bVar1 = *pbVar4;
      uVar8 = uVar6 & 3;
      *pbVar4 = bVar7 ^ bVar1;
      iVar5 = (uint)(bVar7 ^ bVar1) * 0xfb;
      abStack_18[uVar8] = bVar3 + (char)iVar5;
      uVar6 = uVar8 + 1;
      bVar3 = (char)((uint)iVar5 >> 8) + abStack_18[uVar6 & 3];
      abStack_18[uVar6 & 3] = bVar3;
      if ((byte *)((int)param_3 * 2) == pbVar4 + 1) break;
      bVar7 = abStack_18[uVar8];
      pbVar4 = pbVar4 + 1;
    }
  }
LAB_0041bb2d:
  memcpy(puStack_28,param_3,(size_t)param_3);
  if ((uint)param_3 >> 2 == 0) {
    uStack_34 = 0;
    local_30 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
  }
  else {
    uStack_34 = 0;
    local_30 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    puVar9 = puStack_28;
    do {
      uVar6 = *puVar9;
      uVar6 = (uVar6 >> 8 & 0xff00) + uVar6 * 0x1000000 + (uVar6 >> 0x18) + (uVar6 & 0xff00) * 0x100
      ;
      uVar10 = uStack_38 + CARRY4(uStack_3c,uVar6);
      uVar8 = local_30 - (uStack_34 < uVar6);
      uStack_38 = uVar10 * 0x20000000 | uStack_3c + uVar6 >> 3;
      puVar9 = puVar9 + 1;
      uStack_3c = uVar10 >> 3 | (uStack_3c + uVar6) * 0x20000000;
      local_30 = uVar8 * -0x80000000 | uStack_34 - uVar6 >> 1;
      uStack_34 = uVar8 >> 1 | (uStack_34 - uVar6) * -0x80000000;
    } while (puVar9 != puStack_28 + ((uint)param_3 >> 2));
  }
  FUN_00420b50(uStack_3c,uStack_38,param_4);
  FUN_00420b50(uStack_34,local_30,param_4 + 8);
  free(puStack_28);
  return 0;
}

