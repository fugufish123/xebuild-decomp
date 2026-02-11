
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00403820(char *param_1)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  undefined3 extraout_var;
  int iVar5;
  char cVar6;
  size_t *psVar7;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  cVar6 = '\x01';
  psVar7 = &DAT_0047a090;
  iVar5 = 0;
  FUN_00433690(1,"\n------ getting mobile settings ------\n");
  _DAT_0046f040 = 0x3a767375;
  _DAT_0046f044 = 0x626f4d5c;
  _DAT_0046f048 = 0x42656c69;
  _DAT_0046f04c = 0x7461642e;
  DAT_0046f050 = 0;
  do {
    if (iVar5 == 9) {
      local_5c = 0x74617453;
      local_58 = 0x69747369;
      local_54 = 0x732e7363;
      local_50 = 0x69747465;
      local_4c = 0x73676e;
    }
    else if ((char)iVar5 == '\n') {
      local_5c = 0x756e614d;
      local_58 = 0x74636166;
      local_54 = 0x6e697275;
      local_50 = 0x61642e67;
      local_4c = CONCAT13(local_4c._3_1_,0x6174);
    }
    else {
      sprintf((char *)&local_5c,"Mobile%c.dat",iVar5 + 0x42);
    }
    if ((DAT_0046f150 == 0) ||
       (((iVar4 = _stricmp((char *)&local_5c,"extended.bin"), iVar4 != 0 &&
         (iVar4 = _stricmp((char *)&local_5c,"secdata.bin"), iVar4 != 0)) &&
        (iVar4 = _stricmp((char *)&local_5c,"Statistics.settings"), iVar4 != 0)))) {
      sprintf(&DAT_0046f040,"usv:\\%s",&local_5c);
      FUN_00433690(1,"retrieving USVR\\%s...");
      puVar3 = FUN_0041fd60(&DAT_0046f040);
      psVar7[-1] = (size_t)puVar3;
      if ((puVar3 == (undefined *)0x0) || (*psVar7 == 0)) {
        FUN_00433690(1,"not available\n");
        goto joined_r0x00403930;
      }
      if (iVar5 != 9) {
        if ((char)iVar5 == '\n') {
          _DAT_0047a0e0 = 0x80;
          FUN_00433690(1,"OK, received 0x%x bytes\n");
          if (param_1 == (char *)0x0) {
LAB_004039ab:
            if ((*(byte *)(DAT_0046f15c + 8) & 2) == 0) {
              FUN_00433690(1,"console has no available blmod\n");
              bVar1 = *(byte *)(DAT_0046f15c + 8);
            }
            else {
              FUN_00433690(1,"retrieving USVR\\blmod...");
              DAT_0047a078 = FUN_0041fd60("blmod");
              if ((DAT_0047a078 == (undefined *)0x0) || (DAT_0047a07c == 0)) {
                FUN_00433690(0,
                             "\n\n***** WARNING: Unable to retrieve blmod.bin data from console!\n")
                ;
              }
              else {
                FUN_00433690(1,"OK, received 0x%x bytes\n");
              }
              FUN_0041ea70(DAT_0047a078);
              DAT_0047a07c = 0;
              DAT_0047a078 = (undefined *)0x0;
              bVar1 = *(byte *)(DAT_0046f15c + 8);
            }
            if ((bVar1 & 4) == 0) {
              FUN_00433690(1,"console has no available addons\n");
            }
            else if (DAT_0044a008 == 1) {
              FUN_00433690(1,"retrieving USVR\\addons...");
              FUN_00403700();
            }
            else {
              FUN_00433690(1,"skipping USVR\\addons, addons have been specified on command line\n");
            }
            FUN_00433690(1,"retrieving USVR\\Static.settings (smc_config.bin)...");
            DAT_0047a0fc = FUN_0041fd60("usv:\\Static.settings");
            if ((DAT_0047a0fc != (byte *)0x0) && (0x3ff < DAT_0047a100)) {
              FUN_00433690(1,"OK, received 0x%x bytes\n        verifying...");
              bVar2 = FUN_0040c210(DAT_0047a0fc);
              if (CONCAT31(extraout_var,bVar2) != 0) {
                FUN_00433690(1,"smc_config is good!\n");
                DAT_0047a100 = 0x400;
                if (param_1 != (char *)0x0) {
                  FUN_00420d80(param_1,"smc_config.bin",DAT_0047a0fc,0x400);
                  return 1;
                }
                DAT_0047a100 = 0x400;
                return 1;
              }
            }
            FUN_00433690(0,"\n***** ERROR: could not retrieve smc_config from console!\n");
            return 0;
          }
        }
        else {
          FUN_00433690(1,"OK, received 0x%x bytes\n");
          if (param_1 == (char *)0x0) goto joined_r0x00403930;
        }
LAB_0040390c:
        FUN_00420d80(param_1,(char *)&local_5c,(void *)psVar7[-1],*psVar7);
        goto joined_r0x00403930;
      }
      _DAT_0047a0d8 = 0x400;
      FUN_00433690(1,"OK, received 0x%x bytes\n");
      if (param_1 != (char *)0x0) goto LAB_0040390c;
    }
    else {
      FUN_00433690(1,"skipping %s, -clean flag");
joined_r0x00403930:
      if (cVar6 == '\v') goto LAB_004039ab;
    }
    iVar5 = iVar5 + 1;
    cVar6 = cVar6 + '\x01';
    psVar7 = psVar7 + 2;
  } while( true );
}

