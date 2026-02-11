
undefined4 __cdecl FUN_0040ca30(char *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  bool bVar6;
  
  strcpy((char *)&DAT_0046f5c0,param_1);
  strcpy((char *)&DAT_0046f1c0,param_1);
  puVar4 = &DAT_0046f5c0;
  do {
    puVar3 = puVar4;
    uVar1 = *puVar3 + 0xfefefeff & ~*puVar3;
    uVar2 = uVar1 & 0x80808080;
    puVar4 = puVar3 + 1;
  } while (uVar2 == 0);
  bVar6 = (uVar1 & 0x8080) == 0;
  if (bVar6) {
    uVar2 = uVar2 >> 0x10;
  }
  if (bVar6) {
    puVar4 = (uint *)((int)puVar3 + 6);
  }
  iVar5 = (int)puVar4 + (-0x46f5c3 - (uint)CARRY1((byte)uVar2,(byte)uVar2));
  *(undefined4 *)(iVar5 + 0x46f5c0) = 0x30327573;
  *(undefined4 *)(iVar5 + 0x46f5c4) = 0x30363730;
  *(undefined4 *)(&DAT_0046f5c8 + iVar5) = 0x305f3030;
  *(undefined4 *)(&DAT_0046f5cc + iVar5) = 0x30303030;
  *(undefined4 *)(&DAT_0046f5d0 + iVar5) = 0x303030;
  bVar6 = FUN_004225a0((char *)&DAT_0046f5c0);
  FUN_00433690(1,"\n------ loading system update container ------\n");
  if (CONCAT31(extraout_var,bVar6) == 0) {
    FUN_00433690(1,"system update container not found at %s, trying alt\n");
    strcpy((char *)&DAT_0046f5c0,param_1);
    puVar4 = &DAT_0046f5c0;
    do {
      puVar3 = puVar4;
      uVar1 = *puVar3 + 0xfefefeff & ~*puVar3;
      uVar2 = uVar1 & 0x80808080;
      puVar4 = puVar3 + 1;
    } while (uVar2 == 0);
    bVar6 = (uVar1 & 0x8080) == 0;
    if (bVar6) {
      uVar2 = uVar2 >> 0x10;
    }
    if (bVar6) {
      puVar4 = (uint *)((int)puVar3 + 6);
    }
    iVar5 = (int)puVar4 + (-0x46f5c3 - (uint)CARRY1((byte)uVar2,(byte)uVar2));
    *(undefined2 *)(&DAT_0046f5cc + iVar5) = 0x2f65;
    *(undefined4 *)(iVar5 + 0x46f5c0) = 0x73795324;
    *(undefined4 *)(iVar5 + 0x46f5c4) = 0x556d6574;
    *(undefined4 *)(&DAT_0046f5c8 + iVar5) = 0x74616470;
    (&DAT_0046f5ce)[iVar5] = 0;
    memcpy(&DAT_0046f1c0,&DAT_0046f5c0,iVar5 + 0xf);
    *(undefined4 *)(&DAT_0046f5ce + iVar5) = 0x30327573;
    *(undefined4 *)(&DAT_0046f5d2 + iVar5) = 0x30363730;
    *(undefined4 *)(&DAT_0046f5d6 + iVar5) = 0x305f3030;
    *(undefined4 *)(&DAT_0046f5da + iVar5) = 0x30303030;
    *(undefined4 *)(&DAT_0046f5de + iVar5) = 0x303030;
    bVar6 = FUN_004225a0((char *)&DAT_0046f5c0);
    if (CONCAT31(extraout_var_00,bVar6) == 0) {
      FUN_00433690(1,"system update container not found at %s, skipping load\n");
      return 0;
    }
  }
  FUN_00405f20((undefined4 *)&DAT_0046f194);
  iVar5 = FUN_00405fa0((int *)&DAT_0046f194,(char *)&DAT_0046f5c0,0x53555044,0xb0000,-0x1f82f,
                       (char *)0x0,1);
  if (iVar5 == 0) {
    return 0;
  }
  DAT_0046f190 = 1;
  FUN_0040c2e0();
  return 1;
}

