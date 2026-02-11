
bool __cdecl FUN_00423750(char *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  bool bVar6;
  uint local_81c [256];
  char local_41c [1036];
  
  strcpy((char *)local_81c,param_1);
  puVar5 = local_81c;
  do {
    puVar4 = puVar5;
    uVar2 = *puVar4 + 0xfefefeff & ~*puVar4;
    uVar3 = uVar2 & 0x80808080;
    puVar5 = puVar4 + 1;
  } while (uVar3 == 0);
  bVar6 = (uVar2 & 0x8080) == 0;
  if (bVar6) {
    uVar3 = uVar3 >> 0x10;
  }
  if (bVar6) {
    puVar5 = (uint *)((int)puVar4 + 6);
  }
  bVar6 = false;
  builtin_strncpy((char *)((int)puVar5 + (-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3))),".txt",5);
  if (DAT_0047ad4c != '\0') {
    strcpy(local_41c,&DAT_0047ad4c);
    strcat(local_41c,param_1);
    bVar6 = FUN_004225a0(local_41c);
    if (DAT_0047ad4c != '\0') {
      strcpy(local_41c,&DAT_0047ad4c);
      strcat(local_41c,(char *)local_81c);
      bVar1 = FUN_004225a0(local_41c);
      return bVar6 || bVar1;
    }
  }
  return bVar6;
}

