
undefined * __cdecl FUN_0041fd60(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  undefined *puVar4;
  uint *puVar5;
  uint *puVar6;
  char *len;
  bool bVar7;
  uint local_110 [66];
  
  sprintf((char *)local_110,"GETF%s\n",param_1);
  puVar6 = local_110;
  do {
    puVar5 = puVar6;
    uVar1 = *puVar5 + 0xfefefeff & ~*puVar5;
    uVar2 = uVar1 & 0x80808080;
    puVar6 = puVar5 + 1;
  } while (uVar2 == 0);
  bVar7 = (uVar1 & 0x8080) == 0;
  if (bVar7) {
    uVar2 = uVar2 >> 0x10;
  }
  if (bVar7) {
    puVar6 = (uint *)((int)puVar5 + 6);
  }
  len = (char *)((int)puVar6 + ((-3 - (uint)CARRY1((byte)uVar2,(byte)uVar2)) - (int)local_110));
  pcVar3 = (char *)send(DAT_0044a6c0,(char *)local_110,(int)len,0);
  if (len != pcVar3) {
    return (undefined *)0x0;
  }
  puVar4 = FUN_0041e800();
  return puVar4;
}

