
bool __cdecl FUN_0040c210(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  bVar1 = *param_1;
  bVar2 = param_1[1];
  uVar3 = FUN_00422aa0((int)param_1);
  return ((uint)bVar1 << 0x18 | (uint)bVar2 << 0x10) == uVar3;
}

