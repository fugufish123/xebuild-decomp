
undefined4 __cdecl FUN_00401ce0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (((*param_1 & 0x43) == 0x43) && (param_1[1] == 0x46)) {
    uVar1 = FUN_00420ad0((uint *)(param_1 + 0xc));
    uVar1 = uVar1 + 0xf & 0xfffffff0;
    if (uVar1 <= param_2) {
      FUN_00434110((uint *)&DAT_0047a10c,0x10,param_1 + 0x20,0x10,(void *)0x0,0,(void *)0x0,0,
                   (undefined4 *)&stack0xffffffe4,0x10);
      FUN_004345b0((int)&stack0xffffffe4,0x10,param_1 + 0x30,uVar1 - 0x30);
      iVar2 = FUN_004223b0((char *)(param_1 + 0x1f0),0x20);
      if (iVar2 == 0) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

