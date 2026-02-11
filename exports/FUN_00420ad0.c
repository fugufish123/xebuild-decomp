
uint __cdecl FUN_00420ad0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
}

