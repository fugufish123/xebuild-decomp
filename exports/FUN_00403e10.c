
undefined4 __cdecl FUN_00403e10(char *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined3 extraout_var;
  byte *_Dst;
  int iVar4;
  char *_Str1;
  size_t sVar5;
  size_t *psVar6;
  uint uVar7;
  
  uVar7 = 0;
  psVar6 = &DAT_004c90e8;
  _Str1 = &DAT_004c8fe4;
  FUN_00433690(1,"\n------ getting security files ------\n");
  uVar2 = DAT_004c9160;
  if (DAT_004c9160 != 0) {
    do {
      while (*_Str1 == '\0') {
LAB_00403ec0:
        uVar7 = uVar7 + 1;
        _Str1 = _Str1 + 0x16;
        psVar6 = psVar6 + 1;
        if (uVar2 <= uVar7) goto LAB_00403f22;
      }
      if ((DAT_0046f150 == 0) ||
         (((iVar4 = _stricmp(_Str1,"extended.bin"), iVar4 != 0 &&
           (iVar4 = _stricmp(_Str1,"secdata.bin"), iVar4 != 0)) &&
          (iVar4 = _stricmp(_Str1,"Statistics.settings"), iVar4 != 0)))) {
        sprintf(&DAT_0046f040,"usv:\\%s",_Str1);
        FUN_00433690(1,"retrieving USVR\\%s...");
        puVar3 = FUN_0041fd60(&DAT_0046f040);
        psVar6[-10] = (size_t)puVar3;
        if ((puVar3 == (undefined *)0x0) || (*psVar6 == 0)) {
          FUN_00433690(1,"not available\n");
          uVar2 = DAT_004c9160;
        }
        else {
          FUN_00433690(1,"OK, received 0x%x bytes\n        ");
          FUN_0040d120(uVar7);
          uVar2 = DAT_004c9160;
          if (param_1 != (char *)0x0) {
            FUN_00420d80(param_1,_Str1,(void *)psVar6[-10],*psVar6);
            uVar2 = DAT_004c9160;
          }
        }
        goto LAB_00403ec0;
      }
      uVar7 = uVar7 + 1;
      _Str1 = _Str1 + 0x16;
      psVar6 = psVar6 + 1;
      FUN_00433690(1,"skipping %s, -clean flag");
      uVar2 = DAT_004c9160;
    } while (uVar7 < DAT_004c9160);
  }
LAB_00403f22:
  if (DAT_0047a088 == 0) {
    FUN_00433690(1,"retrieving USVR\\kv_enc...");
    DAT_0047a0ec = FUN_0041fd60("kv_enc");
    if (DAT_0047a0ec == (undefined *)0x0) goto LAB_00403f6d;
  }
  else {
    FUN_00433690(1,"extracting BLDR\\kv_enc...");
    iVar4 = DAT_0047a080;
    uVar2 = *(uint *)(DAT_0047a080 + 0x60);
    sVar5 = (uVar2 & 0xff00) * 0x100 + (uVar2 >> 0x18) + uVar2 * 0x1000000 + (uVar2 >> 8 & 0xff00);
    puVar3 = (undefined *)calloc(sVar5,1);
    uVar2 = *(uint *)(iVar4 + 0x6c);
    memcpy(puVar3,(void *)(iVar4 + (uVar2 >> 8 & 0xff00) +
                                   (uVar2 & 0xff00) * 0x100 + uVar2 * 0x1000000 + (uVar2 >> 0x18)),
           sVar5);
    DAT_0047a0f0 = sVar5;
    DAT_0047a0ec = puVar3;
  }
  if ((int)DAT_0047a0f0 < 0x4000) {
LAB_00403f6d:
    FUN_00433690(0,"\n***** ERROR: could not retrieve keyvault from console!\n");
    return 0;
  }
  FUN_00433690(1,"OK, received 0x%x bytes\n        decrypt and verify...");
  bVar1 = FUN_00401630(DAT_0047a0ec);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    FUN_00433690(0,"\n***** ERROR: could not decrypt keyvault from console!\n");
    return 0;
  }
  FUN_00433690(1,"keyvault is good!\n");
  FUN_0041ad90((undefined4 *)(DAT_0047a0ec + 0x10));
  if (param_1 != (char *)0x0) {
    FUN_00420d80(param_1,"kv.bin",DAT_0047a0ec,DAT_0047a0f0);
  }
  if (DAT_0047a088 == 0) {
    FUN_00433690(1,"retrieving USVR\\smc_enc...");
    DAT_0047a0e4 = FUN_0041fd60("smc_enc");
    if (DAT_0047a0e4 == (byte *)0x0) goto LAB_00404106;
  }
  else {
    FUN_00433690(1,"extracting BLDR\\smc_enc...");
    iVar4 = DAT_0047a080;
    uVar2 = *(uint *)(DAT_0047a080 + 0x78);
    sVar5 = (uVar2 & 0xff00) * 0x100 + (uVar2 >> 0x18) + uVar2 * 0x1000000 + (uVar2 >> 8 & 0xff00);
    _Dst = (byte *)calloc(sVar5,1);
    uVar2 = *(uint *)(iVar4 + 0x7c);
    memcpy(_Dst,(void *)(iVar4 + (uVar2 >> 8 & 0xff00) +
                                 (uVar2 & 0xff00) * 0x100 + uVar2 * 0x1000000 + (uVar2 >> 0x18)),
           sVar5);
    DAT_0047a0e8 = sVar5;
    DAT_0047a0e4 = _Dst;
  }
  if (0x2fff < (int)DAT_0047a0e8) {
    FUN_00433690(1,"OK, received 0x%x bytes\n        decrypt and verify...");
    iVar4 = FUN_00401730(DAT_0047a0e4,DAT_0047a0e8);
    if (iVar4 == 0) {
      FUN_00433690(0,"\n***** ERROR: could not decrypt smc.bin from console!\n");
      return 0;
    }
    FUN_00433690(1,"smc is good!\n");
    FUN_0041add0((undefined4 *)DAT_0047a0e4);
    if (param_1 == (char *)0x0) {
      return 1;
    }
    FUN_00420d80(param_1,"smc.bin",DAT_0047a0e4,DAT_0047a0e8);
    return 1;
  }
LAB_00404106:
  FUN_00433690(0,"\n***** ERROR: could not retrieve smc.bin from console!\n");
  return 0;
}

