
undefined4 __cdecl FUN_0041fc30(undefined4 param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  undefined *_Memory;
  uint *puVar5;
  uint *puVar6;
  char *len;
  bool bVar7;
  int iStack_114;
  uint local_110 [66];
  
  sprintf((char *)local_110,"UMPT%s:\n",param_1);
  FUN_00433690(1,"unmounting %s:...");
  puVar6 = local_110;
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
  len = (char *)((int)puVar6 + ((-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)) - (int)local_110));
  pcVar4 = (char *)send(DAT_0044a6c0,(char *)local_110,(int)len,0);
  if ((len != pcVar4) || (_Memory = FUN_0041e800(), _Memory == (undefined *)0x0)) goto LAB_0041fcc8;
  if (iStack_114 == 2) {
    sVar1 = FUN_00420ab0(_Memory);
    bVar7 = sVar1 == 0x4f4b;
    if (_Memory != &DAT_00479578) goto LAB_0041fd10;
  }
  else {
    bVar7 = false;
    if (_Memory == &DAT_00479578) goto LAB_0041fcc8;
LAB_0041fd10:
    free(_Memory);
  }
  if (bVar7) {
    FUN_00433690(1,"success!\n");
    return 1;
  }
LAB_0041fcc8:
  FUN_00433690(1,"failed!\n");
  return 0;
}

