
int __cdecl FUN_00422aa0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = 0;
  pbVar2 = (byte *)(param_1 + 0x10);
  do {
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
    uVar3 = uVar3 + bVar1;
  } while ((byte *)(param_1 + 0x10c) != pbVar2);
  return ~uVar3 * 0x1000000 + (~uVar3 & 0xff00) * 0x100;
}

