
uint __cdecl FUN_00433800(byte *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  if (param_2 != 0) {
    pbVar3 = param_1 + param_2;
    uVar2 = 0xffffffff;
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_0045c7e0 + (uint)(byte)((byte)uVar2 ^ bVar1) * 4);
    } while (param_1 != pbVar3);
    return ~uVar2;
  }
  return 0;
}

