
void __cdecl FUN_00430460(char *param_1)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  uint *puVar5;
  uint *puVar6;
  bool bVar7;
  uint local_110 [66];
  
  if (param_1 != (char *)0x0) {
    strcpy((char *)local_110,param_1);
    sVar1 = strlen(param_1);
    puVar6 = local_110;
    if (*(char *)((int)local_110 + sVar1) != '/') {
      do {
        puVar5 = puVar6;
        uVar2 = *puVar5 + 0xfefefeff & ~*puVar5;
        uVar3 = uVar2 & 0x80808080;
        puVar6 = puVar5 + 1;
      } while (uVar3 == 0);
      bVar7 = (uVar2 & 0x8080) == 0;
      if (bVar7) {
        uVar3 = uVar3 >> 0x10;
      }
      if (bVar7) {
        puVar6 = (uint *)((int)puVar5 + 6);
      }
      pcVar4 = (char *)((int)puVar6 + (-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)));
      pcVar4[0] = '/';
      pcVar4[1] = '\0';
      puVar6 = local_110;
    }
    do {
      puVar5 = puVar6;
      uVar2 = *puVar5 + 0xfefefeff & ~*puVar5;
      uVar3 = uVar2 & 0x80808080;
      puVar6 = puVar5 + 1;
    } while (uVar3 == 0);
    bVar7 = (uVar2 & 0x8080) == 0;
    if (bVar7) {
      uVar3 = uVar3 >> 0x10;
    }
    if (bVar7) {
      puVar6 = (uint *)((int)puVar5 + 6);
    }
    builtin_strncpy((char *)((int)puVar6 + (-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3))),
                    "options.ini",0xc);
    DAT_0047957c = fopen((char *)local_110,"wb");
  }
  return;
}

