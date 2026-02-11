
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __cdecl FUN_0040e200(int param_1,int *param_2,undefined4 param_3,uint *param_4)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 auStack_40 [4];
  undefined4 uStack_30;
  int iStack_1c;
  uint *puStack_14;
  
  uStack_30 = 0x40e217;
  FUN_00433610("extract");
  uStack_30 = 0x40e22b;
  FUN_00433690(0,
               "***** NOTE: Most errors/warnings will be due to the fact extract mode does not process 1BL and CPU keys! *****\n\n"
              );
  if (0 < param_1) {
    iVar4 = 0;
    pcVar6 = (char *)0x0;
LAB_0040e260:
    do {
      uStack_30 = 0x40e27a;
      iVar3 = _strnicmp((char *)*param_2,"help",2);
      if (iVar3 == 0) {
LAB_0040e4b5:
        uStack_30 = 0x40e4c9;
        FUN_0040e020(0);
        goto LAB_0040e4c9;
      }
      uStack_30 = 0x40e29c;
      iVar3 = _strnicmp((char *)*param_2,"-?",2);
      if (iVar3 == 0) goto LAB_0040e4b5;
      uStack_30 = 0x40e2be;
      iVar3 = _strnicmp((char *)*param_2,"/?",2);
      if (iVar3 == 0) goto LAB_0040e4b5;
      pcVar5 = (char *)*param_2;
      if (*pcVar5 != '-') {
        if (*pcVar5 == '\0') goto LAB_0040e508;
        if (pcVar6 != (char *)0x0) goto LAB_0040e4f8;
LAB_0040e252:
        iVar4 = iVar4 + 1;
        param_2 = param_2 + 1;
        pcVar6 = pcVar5;
        if (param_1 == iVar4) break;
        goto LAB_0040e260;
      }
      uStack_30 = 0x40e2ec;
      iVar3 = _strnicmp(pcVar5,"-noenter",8);
      pcVar5 = pcVar6;
      if (iVar3 != 0) {
        uStack_30 = 0x40e49a;
        iVar3 = _strnicmp((char *)*param_2,"-v",2);
        if (iVar3 == 0) {
          uStack_30 = 0x40e4b0;
          FUN_004335a0(*(undefined1 *)(*param_2 + 2));
        }
        goto LAB_0040e252;
      }
      iVar4 = iVar4 + 1;
      uStack_30 = 0x40e30b;
      FUN_00433690(0,"<enter> key on completion suppressed\n");
      param_2 = param_2 + 1;
      DAT_0044a524 = 0;
    } while (param_1 != iVar4);
    if (pcVar5 != (char *)0x0) {
      _DAT_004c8fe4 = 0x2e6c7263;
      _DAT_004c8fe8 = 0x6e6962;
      _DAT_004c8ffa = 0x2e656164;
      _DAT_004c8ffe = 0x6e6962;
      _DAT_004c9010 = 0x65747865;
      _DAT_004c9014 = 0x6465646e;
      _DAT_004c9018 = 0x6e69622e;
      DAT_004c901c = 0;
      _DAT_004c9026 = 0x74726366;
      _DAT_004c902a = 0x6e69622e;
      DAT_004c902e = 0;
      _DAT_004c903c = 0x64636573;
      _DAT_004c9040 = 0x2e617461;
      _DAT_004c9044 = 0x6e6962;
      DAT_004c9160 = 5;
      uStack_30 = 0x40e3c0;
      iVar4 = FUN_00417680(pcVar5);
      if (iVar4 == 0) {
LAB_0040e4c9:
        FUN_00433690(0,"Loading dump failed!\n");
        uVar1 = 0xff;
      }
      else {
        uStack_30 = 0x40e3dc;
        FUN_00433690(0,"Dump load success!\n\n");
        uStack_30 = 0x40e3f0;
        FUN_00433690(1,s__________________________________0044a4e0);
        uStack_30 = 0x40e404;
        FUN_00433690(1,"flash fs file list:\n");
        uStack_30 = 0x40e418;
        FUN_00433690(1,s__________________________________0044a4e0);
        uStack_30 = 0x40e41d;
        FUN_00414650();
        uStack_30 = 0x40e431;
        FUN_00433690(1,s__________________________________0044a4e0);
        uStack_30 = 0x40e445;
        FUN_00433690(1,"checking boot image (update mode test):\n");
        uStack_30 = 0x40e459;
        FUN_00433690(1,s__________________________________0044a4e0);
        DAT_0047a080 = DAT_00479f4c;
        uStack_30 = 0x40e46f;
        FUN_00411800(0);
        uVar1 = 0;
      }
      return uVar1;
    }
  }
  uStack_30 = 0x40e4f8;
  FUN_0040e020(2);
LAB_0040e4f8:
  FUN_0040e020(5);
LAB_0040e508:
  FUN_0040e020(1);
  FUN_00434110(puStack_14,0x10,(void *)(iStack_1c + 0x1c),0xd4,(void *)(iStack_1c + 0x100),0x1cf8,
               (void *)(iStack_1c + 0x1ef8),0x2108,auStack_40,0x14);
  bVar2 = FUN_00435b00(auStack_40,(uint *)(iStack_1c + 0x1df8),param_4);
  return bVar2;
}

