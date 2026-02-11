
uint __cdecl FUN_004017d0(byte *param_1)

{
  uint uVar1;
  void *_Dst;
  int iVar2;
  uint uVar3;
  int unaff_EDI;
  undefined4 local_2c [7];
  
  uVar3 = 0;
  if (((*param_1 & 0x43) == 0x43) && (param_1[1] == 0x42)) {
    uVar1 = FUN_00420ad0((uint *)(param_1 + 0xc));
    uVar1 = uVar1 + 0xf & 0xfffffff0;
    _Dst = malloc(uVar1);
    memcpy(_Dst,param_1,uVar1);
    FUN_00434110((uint *)&DAT_0047a10c,0x10,param_1 + 0x10,0x10,(void *)0x0,0,(void *)0x0,0,local_2c
                 ,0x10);
    FUN_004345b0(unaff_EDI,0x10,(byte *)((int)_Dst + 0x20),uVar1 - 0x20);
    iVar2 = FUN_004223b0((char *)((int)_Dst + 0x270),0x120);
    if (iVar2 == 0) {
      FUN_00433690(0,"***** WARNING: CB decrypt failed! Unable to get pairing data!\n");
    }
    else {
      uVar3 = FUN_00420ad0((uint *)((int)_Dst + 0x20));
      uVar3 = uVar3 & 0xffffff00;
      FUN_00433690(1,"CB decrypted OK, pairing bytes extracted as: 0x%08x\n");
    }
    free(_Dst);
  }
  return uVar3;
}

