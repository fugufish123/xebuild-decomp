
void __cdecl FUN_00406740(char *param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  char *pcVar7;
  bool bVar8;
  int local_420;
  uint local_41c [259];
  
  if (param_1 == (char *)0x0) {
LAB_00406879:
    FUN_00431a60(0,(char *)0x0,(char *)0x0,(undefined4 *)0x0);
    puVar2 = FUN_00420420();
    if (puVar2 == (undefined *)0x0) {
      return;
    }
    if (local_420 == 0) {
      return;
    }
    FUN_00433690(0,"Bad Block list  : ");
    iVar1 = local_420 + -2;
    if (iVar1 < 0) {
      return;
    }
    pcVar7 = (char *)0x0;
  }
  else {
    FUN_00433690(0,"creating mydata folder output at %s\n");
    iVar1 = FUN_00423650(param_1);
    if (iVar1 == 0) {
      FUN_00433690(0,"unable to dump details to %s, disabling\n");
      goto LAB_00406879;
    }
    FUN_00431a60(0,param_1,param_1,(undefined4 *)0x0);
    puVar2 = FUN_00420420();
    if ((puVar2 == (undefined *)0x0) || (local_420 == 0)) goto LAB_004067bb;
    FUN_00433690(0,"Bad Block list  : ");
    iVar1 = local_420 + -2;
    pcVar7 = param_1;
    if (iVar1 < 0) goto LAB_004067bb;
  }
  do {
    FUN_00420ab0(puVar2 + iVar1);
    FUN_00433690(0,"0x%x");
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -2;
    FUN_00433690(0,",");
  } while (iVar1 != -1);
  if (pcVar7 == (char *)0x0) {
    return;
  }
LAB_004067bb:
  strcpy((char *)local_41c,param_1);
  puVar6 = local_41c;
  do {
    puVar5 = puVar6;
    uVar3 = *puVar5 + 0xfefefeff & ~*puVar5;
    uVar4 = uVar3 & 0x80808080;
    puVar6 = puVar5 + 1;
  } while (uVar4 == 0);
  bVar8 = (uVar3 & 0x8080) == 0;
  if (bVar8) {
    uVar4 = uVar4 >> 0x10;
  }
  if (bVar8) {
    puVar6 = (uint *)((int)puVar5 + 6);
  }
  builtin_strncpy((char *)((int)puVar6 + (-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4))),
                  "/nanddump.bin",0xe);
  FUN_00433690(0,"dumping console flash to %s\n");
  iVar1 = FUN_0041fe20((char *)local_41c);
  if (iVar1 != 0) {
    FUN_00433690(0,"success!\n");
    return;
  }
  FUN_00433690(0,"failed!\n");
  return;
}

