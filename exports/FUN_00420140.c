
undefined * __cdecl FUN_00420140(uint *param_1,ushort param_2,ushort param_3)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined *puVar5;
  uint *puVar6;
  uint *puVar7;
  char *len;
  bool bVar8;
  uint local_2c [9];
  
  sprintf((char *)local_2c,"RBLK%04x%04x\n",(uint)param_2,(uint)param_3);
  puVar7 = local_2c;
  do {
    puVar6 = puVar7;
    uVar1 = *puVar6 + 0xfefefeff & ~*puVar6;
    uVar2 = uVar1 & 0x80808080;
    puVar7 = puVar6 + 1;
  } while (uVar2 == 0);
  bVar8 = (uVar1 & 0x8080) == 0;
  if (bVar8) {
    uVar2 = uVar2 >> 0x10;
  }
  if (bVar8) {
    puVar7 = (uint *)((int)puVar6 + 6);
  }
  len = (char *)((int)puVar7 + ((-3 - (uint)CARRY1((byte)uVar2,(byte)uVar2)) - (int)local_2c));
  pcVar3 = (char *)send(DAT_0044a6c0,(char *)local_2c,(int)len,0);
  if (len != pcVar3) {
    return (undefined *)0x0;
  }
  iVar4 = FUN_00433600();
  puVar5 = FUN_0041ee30(param_1,(uint)(iVar4 != 0));
  return puVar5;
}

