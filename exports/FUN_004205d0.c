
undefined4 FUN_004205d0(void)

{
  short sVar1;
  int iVar2;
  undefined *_Memory;
  undefined4 uVar3;
  int iStack_10;
  
  iVar2 = send(DAT_0044a6c0,"FMEX\n",5,0);
  if ((iVar2 == 5) && (_Memory = FUN_0041e800(), _Memory != (undefined *)0x0)) {
    if ((iStack_10 == 2) && (sVar1 = FUN_00420ab0(_Memory), sVar1 == 0x4f4b)) {
      if (_Memory == &DAT_00479578) {
        return 1;
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
      if (_Memory == &DAT_00479578) {
        return 0;
      }
    }
    free(_Memory);
    return uVar3;
  }
  return 0;
}

