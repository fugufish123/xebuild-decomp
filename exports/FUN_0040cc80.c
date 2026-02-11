
undefined4 __cdecl FUN_0040cc80(char *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  char *pcVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  
  strcpy((char *)&DAT_0046f5c0,param_1);
  strcpy((char *)&DAT_0046f1c0,(char *)&DAT_0046f5c0);
  bVar1 = FUN_004225a0((char *)&DAT_0046f5c0);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    sVar2 = strlen(param_1);
    if (((&DAT_0046f5bf)[sVar2] != '\\') && ((&DAT_0046f5bf)[sVar2] != '/')) {
      puVar7 = &DAT_0046f5c0;
      do {
        puVar6 = puVar7;
        uVar3 = *puVar6 + 0xfefefeff & ~*puVar6;
        uVar4 = uVar3 & 0x80808080;
        puVar7 = puVar6 + 1;
      } while (uVar4 == 0);
      bVar1 = (uVar3 & 0x8080) == 0;
      if (bVar1) {
        uVar4 = uVar4 >> 0x10;
      }
      if (bVar1) {
        puVar7 = (uint *)((int)puVar6 + 6);
      }
      *(undefined2 *)((int)puVar7 + (-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4))) = 0x2f;
    }
    strcpy((char *)&DAT_0046f1c0,(char *)&DAT_0046f5c0);
    puVar7 = &DAT_0046f5c0;
    do {
      puVar6 = puVar7;
      uVar3 = *puVar6 + 0xfefefeff & ~*puVar6;
      uVar4 = uVar3 & 0x80808080;
      puVar7 = puVar6 + 1;
    } while (uVar4 == 0);
    bVar1 = (uVar3 & 0x8080) == 0;
    if (bVar1) {
      uVar4 = uVar4 >> 0x10;
    }
    if (bVar1) {
      puVar7 = (uint *)((int)puVar6 + 6);
    }
    iVar8 = (int)puVar7 + (-0x46f5c3 - (uint)CARRY1((byte)uVar4,(byte)uVar4));
    *(undefined4 *)(iVar8 + 0x46f5c0) = 0x30327573;
    *(undefined4 *)(iVar8 + 0x46f5c4) = 0x30363730;
    *(undefined4 *)(&DAT_0046f5c8 + iVar8) = 0x305f3030;
    *(undefined4 *)(&DAT_0046f5cc + iVar8) = 0x30303030;
    *(undefined4 *)(&DAT_0046f5d0 + iVar8) = 0x303030;
    bVar1 = FUN_004225a0((char *)&DAT_0046f5c0);
    if (CONCAT31(extraout_var_00,bVar1) == 0) {
      puVar7 = &DAT_0046f1c0;
      do {
        puVar6 = puVar7;
        uVar3 = *puVar6 + 0xfefefeff & ~*puVar6;
        uVar4 = uVar3 & 0x80808080;
        puVar7 = puVar6 + 1;
      } while (uVar4 == 0);
      bVar1 = (uVar3 & 0x8080) == 0;
      if (bVar1) {
        uVar4 = uVar4 >> 0x10;
      }
      if (bVar1) {
        puVar7 = (uint *)((int)puVar6 + 6);
      }
      iVar8 = (int)puVar7 + (-0x46f1c3 - (uint)CARRY1((byte)uVar4,(byte)uVar4));
      *(undefined2 *)(&DAT_0046f1cc + iVar8) = 0x2f65;
      *(undefined4 *)(iVar8 + 0x46f1c0) = 0x73795324;
      *(undefined4 *)(iVar8 + 0x46f1c4) = 0x556d6574;
      *(undefined4 *)(&DAT_0046f1c8 + iVar8) = 0x74616470;
      (&DAT_0046f1ce)[iVar8] = 0;
      memcpy(&DAT_0046f5c0,&DAT_0046f1c0,iVar8 + 0xf);
      *(undefined4 *)(&DAT_0046f5ce + iVar8) = 0x30327573;
      *(undefined4 *)(&DAT_0046f5d2 + iVar8) = 0x30363730;
      *(undefined4 *)(&DAT_0046f5d6 + iVar8) = 0x305f3030;
      *(undefined4 *)(&DAT_0046f5da + iVar8) = 0x30303030;
      *(undefined4 *)(&DAT_0046f5de + iVar8) = 0x303030;
      bVar1 = FUN_004225a0((char *)&DAT_0046f5c0);
      if (CONCAT31(extraout_var_01,bVar1) == 0) {
        FUN_00433690(1,"system update container not found at or near %s!!\n");
        return 0;
      }
    }
  }
  else {
    pcVar5 = strrchr((char *)&DAT_0046f1c0,0x2f);
    if ((pcVar5 != (char *)0x0) ||
       (pcVar5 = strrchr((char *)&DAT_0046f1c0,0x5c), pcVar5 != (char *)0x0)) {
      pcVar5[1] = '\0';
    }
  }
  FUN_00433690(0,"\n------ loading system update container ------\n");
  FUN_00433690(0,"SU container found! Loading \'%s\'\n");
  FUN_00405f20((undefined4 *)&DAT_0046f194);
  iVar8 = FUN_00405fa0((int *)&DAT_0046f194,(char *)&DAT_0046f5c0,0x53555044,0xb0000,-0x1f82f,
                       (char *)0x0,1);
  if (iVar8 == 0) {
    FUN_00433690(0,"\n***** ERROR could not load container \'%s\'!\n");
    return 0;
  }
  DAT_0046f190 = 1;
  FUN_0040c2e0();
  return 1;
}

