
/* WARNING: Type propagation algorithm not settling */

int __cdecl FUN_00432b10(char *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  bool bVar9;
  undefined1 local_80c [5];
  char acStack_807 [4];
  char acStack_803 [1015];
  uint local_40c [2];
  char acStack_401 [4];
  char acStack_3fd [4];
  char acStack_3f9 [4];
  char acStack_3f5 [1001];
  
  strcpy((char *)local_40c,param_1);
  strcpy(local_80c,(char *)local_40c);
  puVar4 = local_40c;
  do {
    puVar3 = puVar4;
    uVar1 = *puVar3 + 0xfefefeff & ~*puVar3;
    uVar2 = uVar1 & 0x80808080;
    puVar4 = puVar3 + 1;
  } while (uVar2 == 0);
  bVar9 = (uVar1 & 0x8080) == 0;
  if (bVar9) {
    uVar2 = uVar2 >> 0x10;
  }
  if (bVar9) {
    puVar4 = (uint *)((int)puVar3 + 6);
  }
  builtin_strncpy((char *)((int)puVar4 + (-3 - (uint)CARRY1((byte)uVar2,(byte)uVar2))),
                  "system.manifest",0x10);
  memset(&DAT_004cdc60,0,0x40c0c);
  bVar9 = FUN_004225a0((char *)local_40c);
  if (CONCAT31(extraout_var,bVar9) == 0) {
    FUN_00433690(1,"manifest not found at %s\n");
    puVar4 = (uint *)local_80c;
    do {
      puVar3 = puVar4;
      uVar1 = *puVar3 + 0xfefefeff & ~*puVar3;
      uVar2 = uVar1 & 0x80808080;
      puVar4 = puVar3 + 1;
    } while (uVar2 == 0);
    bVar9 = (uVar1 & 0x8080) == 0;
    if (bVar9) {
      uVar2 = uVar2 >> 0x10;
    }
    if (bVar9) {
      puVar4 = (uint *)((int)puVar3 + 6);
    }
    pcVar8 = (char *)((int)puVar4 + ((-3 - (uint)CARRY1((byte)uVar2,(byte)uVar2)) - (int)local_80c))
    ;
    (acStack_803 + (int)(pcVar8 + 3))[0] = 'e';
    (acStack_803 + (int)(pcVar8 + 3))[1] = '/';
    builtin_strncpy((char *)((int)local_80c + (int)pcVar8),"$Sys",4);
    *(undefined4 *)((int)local_80c + (int)(pcVar8 + 4)) = 0x556d6574;
    builtin_strncpy(acStack_807 + (int)(pcVar8 + 3),"pdat",4);
    pcVar8[(int)(acStack_803 + 5)] = '\0';
    memcpy(local_40c,local_80c,(size_t)(pcVar8 + 0xf));
    builtin_strncpy(acStack_401 + (int)(pcVar8 + 3),"syst",4);
    builtin_strncpy(pcVar8 + (int)(acStack_401 + 7),"em.m",4);
    builtin_strncpy(pcVar8 + (int)(acStack_401 + 0xb),"anif",4);
    builtin_strncpy(pcVar8 + (int)(acStack_401 + 0xf),"est",4);
    bVar9 = FUN_004225a0((char *)local_40c);
    if (CONCAT31(extraout_var_00,bVar9) == 0) {
      FUN_00433690(1,"manifest not found at %s\n");
      FUN_00433690(0,"***** WARNING: could not find manifest data for sysex!\n");
      return 0;
    }
  }
  FUN_00433690(1,"loading manifest %s\n");
  DAT_004cdc60 = (uint *)FUN_00422670((char *)local_40c,(size_t *)&DAT_004ce064);
  if ((DAT_004cdc60 == (uint *)0x0) || (DAT_004ce064 == 0)) {
    iVar7 = 0;
    FUN_00433690(0,"***** WARNING: could not read manifest data for sysex!\n");
  }
  else {
    FUN_00433690(1,"loaded system.manifest, 0x%x bytes\n");
    iVar7 = FUN_004327a0(local_80c,DAT_004cdc60,DAT_004ce064,param_2);
    sprintf(&DAT_004cdc64,"%s:\\system.manifest",&DAT_0045bdb4);
    if (iVar7 == 0) {
      if (DAT_004cdc60 != (uint *)0x0) {
        free(DAT_004cdc60);
      }
      if (0 < DAT_004ce068) {
        puVar5 = &DAT_004ce06c;
        iVar6 = 0;
        iVar7 = DAT_004ce068;
        do {
          if ((void *)*puVar5 != (void *)0x0) {
            free((void *)*puVar5);
            iVar7 = DAT_004ce068;
          }
          iVar6 = iVar6 + 1;
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5 = puVar5 + 0x102;
        } while (iVar6 < iVar7);
        return 0;
      }
    }
  }
  return iVar7;
}

