
undefined4 __cdecl FUN_00433130(char *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  void *_Memory;
  char *pcVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  uint local_948;
  undefined4 local_944;
  ushort local_93e;
  char acStack_923 [3];
  uint local_920 [65];
  uint local_81c [255];
  char acStack_41f [3];
  uint local_41c [259];
  
  strcpy((char *)local_81c,param_1);
  puVar8 = local_81c;
  do {
    puVar7 = puVar8;
    uVar1 = *puVar7 + 0xfefefeff & ~*puVar7;
    uVar2 = uVar1 & 0x80808080;
    puVar8 = puVar7 + 1;
  } while (uVar2 == 0);
  bVar9 = (uVar1 & 0x8080) == 0;
  if (bVar9) {
    uVar2 = uVar2 >> 0x10;
  }
  if (bVar9) {
    puVar8 = (uint *)((int)puVar7 + 6);
  }
  pcVar6 = (char *)((int)puVar8 + (-3 - (uint)CARRY1((byte)uVar2,(byte)uVar2)));
  pcVar6[0] = '/';
  pcVar6[1] = '/';
  pcVar6[2] = '\0';
  pvVar3 = FUN_004481c0((LPCSTR)local_81c);
  if (pvVar3 != (void *)0x0) {
    while( true ) {
      do {
        do {
          while( true ) {
            do {
              iVar4 = FUN_00448360((int)pvVar3);
              if (iVar4 == 0) {
                FUN_00448470(pvVar3);
                return 1;
              }
              strcpy((char *)local_920,param_2);
              puVar8 = local_920;
              do {
                puVar7 = puVar8;
                uVar1 = *puVar7 + 0xfefefeff & ~*puVar7;
                uVar2 = uVar1 & 0x80808080;
                puVar8 = puVar7 + 1;
              } while (uVar2 == 0);
              bVar9 = (uVar1 & 0x8080) == 0;
              if (bVar9) {
                uVar2 = uVar2 >> 0x10;
              }
              if (bVar9) {
                puVar8 = (uint *)((int)puVar7 + 6);
              }
              pcVar6 = (char *)((int)puVar8 +
                               ((-3 - (uint)CARRY1((byte)uVar2,(byte)uVar2)) - (int)local_920));
              *(char *)((int)local_920 + (int)pcVar6) = '\\';
              strcpy(acStack_923 + (int)(pcVar6 + 4),(char *)(iVar4 + 8));
              strcpy((char *)local_41c,param_1);
              puVar8 = local_41c;
              do {
                puVar7 = puVar8;
                uVar1 = *puVar7 + 0xfefefeff & ~*puVar7;
                uVar2 = uVar1 & 0x80808080;
                puVar8 = puVar7 + 1;
              } while (uVar2 == 0);
              bVar9 = (uVar1 & 0x8080) == 0;
              if (bVar9) {
                uVar2 = uVar2 >> 0x10;
              }
              if (bVar9) {
                puVar8 = (uint *)((int)puVar7 + 6);
              }
              pcVar6 = (char *)((int)puVar8 +
                               ((-3 - (uint)CARRY1((byte)uVar2,(byte)uVar2)) - (int)local_41c));
              *(char *)((int)local_41c + (int)pcVar6) = '\\';
              strcpy(acStack_41f + (int)(pcVar6 + 4),(char *)(iVar4 + 8));
              iVar5 = FUN_00448820((char *)local_41c,&local_944);
            } while (iVar5 < 0);
            if ((local_93e & 0x4000) == 0) break;
            if (*(char *)(iVar4 + 8) != '.') {
              FUN_00433690(1,"creating directory %s...");
              iVar4 = FUN_00420710((char *)local_920);
              if (iVar4 == 0) {
                FUN_00433690(1,"FAILED!\n");
                FUN_00448470(pvVar3);
                return 0;
              }
              FUN_00433690(1,"success!\n");
              FUN_00433130((char *)local_41c,(char *)local_920);
            }
          }
        } while (-1 < (short)local_93e);
        FUN_00433690(1,"reading file from %s...");
        _Memory = FUN_00422670((char *)local_41c,&local_948);
      } while (_Memory == (void *)0x0);
      FUN_00433690(1,"OK! read 0x%x (%d) bytes!\n");
      FUN_00433690(1,"    sending file %s...\n");
      iVar4 = FUN_00420470((char *)local_920,(int)_Memory,local_948);
      if (iVar4 == 0) break;
      FUN_00433690(1,"    sent 0x%x bytes to file %s OK!\n");
      free(_Memory);
    }
    free(_Memory);
    FUN_00433690(1,"FAILED sending file %s!\n");
    FUN_00448470(pvVar3);
  }
  return 0;
}

