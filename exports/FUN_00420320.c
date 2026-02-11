
undefined4 __cdecl FUN_00420320(ushort param_1,ushort param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  undefined *_Memory;
  undefined4 uVar5;
  uint *puVar6;
  uint *puVar7;
  char *len;
  bool bVar8;
  int iStack_30;
  uint local_2c [9];
  
  sprintf((char *)local_2c,"ERBL%04x%04x\n",(uint)param_1,(uint)param_2);
  puVar7 = local_2c;
  do {
    puVar6 = puVar7;
    uVar2 = *puVar6 + 0xfefefeff & ~*puVar6;
    uVar3 = uVar2 & 0x80808080;
    puVar7 = puVar6 + 1;
  } while (uVar3 == 0);
  bVar8 = (uVar2 & 0x8080) == 0;
  if (bVar8) {
    uVar3 = uVar3 >> 0x10;
  }
  if (bVar8) {
    puVar7 = (uint *)((int)puVar6 + 6);
  }
  len = (char *)((int)puVar7 + ((-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)) - (int)local_2c));
  pcVar4 = (char *)send(DAT_0044a6c0,(char *)local_2c,(int)len,0);
  if ((len == pcVar4) && (_Memory = FUN_0041e800(), _Memory != (undefined *)0x0)) {
    if ((iStack_30 == 2) && (sVar1 = FUN_00420ab0(_Memory), sVar1 == 0x4f4b)) {
      if (_Memory == &DAT_00479578) {
        return 1;
      }
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
      if (_Memory == &DAT_00479578) {
        return 0;
      }
    }
    free(_Memory);
    return uVar5;
  }
  return 0;
}

