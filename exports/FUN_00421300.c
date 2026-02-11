
int __cdecl FUN_00421300(byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  bVar1 = *param_1;
  uVar3 = (uint)bVar1;
  if ((byte)(bVar1 + 0x9f) < 6) {
    iVar4 = (uVar3 - 0x57) * 0x10;
  }
  else {
    if ((byte)(uVar3 - 0x30) < 10) {
      bVar1 = param_1[1];
      iVar4 = (uVar3 - 0x30) * 0x10;
      goto joined_r0x00421355;
    }
    iVar4 = (uVar3 - 0x37) * 0x10;
    if (5 < (byte)(bVar1 + 0xbf)) {
      iVar4 = -0x10;
    }
  }
  bVar1 = param_1[1];
joined_r0x00421355:
  uVar3 = (uint)bVar1;
  if ((byte)(bVar1 + 0x9f) < 6) {
    return iVar4 + (uVar3 - 0x57);
  }
  if (9 < (byte)(uVar3 - 0x30)) {
    iVar2 = uVar3 - 0x37;
    if (5 < (byte)(bVar1 + 0xbf)) {
      iVar2 = 0xf;
    }
    return iVar4 + iVar2;
  }
  return iVar4 + (uVar3 - 0x30);
}

