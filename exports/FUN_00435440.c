
bool __cdecl FUN_00435440(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 local_20c [256];
  uint local_10c [64];
  
  uVar1 = *param_4;
  if ((uVar1 & 0xff00) * 0x100 + (uVar1 >> 0x18) + uVar1 * 0x1000000 + (uVar1 >> 8 & 0xff00) == 0x20
     ) {
    uVar1 = param_4[1];
    iVar2 = (uVar1 >> 8 & 0xff00) + (uVar1 & 0xff00) * 0x100 + (uVar1 >> 0x18) + uVar1 * 0x1000000;
    if ((iVar2 == 3) || (iVar2 == 0x10001)) {
      FUN_00435210(param_1,param_2,param_3,param_4,(int)local_20c,local_10c);
      iVar2 = memcmp(local_20c,local_10c,0x100);
      return iVar2 == 0;
    }
  }
  return false;
}

