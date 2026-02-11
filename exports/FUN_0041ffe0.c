
undefined4 __cdecl FUN_0041ffe0(int param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  undefined *_Memory;
  int aiStack_10 [2];
  
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = send(DAT_0044a6c0,"WRFL\n",5,0);
  if (iVar2 != 5) {
    return 0;
  }
  iVar2 = FUN_00433600();
  iVar2 = FUN_0041f1a0(param_1,param_2,(uint)(iVar2 != 0));
  if (iVar2 == 0) {
    FUN_00433690(0,"failed!\n");
    return 0;
  }
  FUN_00433690(0,"file sent OK, awaiting result...");
  _Memory = FUN_0041e800();
  if (_Memory != (undefined *)0x0) {
    if ((aiStack_10[0] == 2) && (sVar1 = FUN_00420ab0(_Memory), sVar1 == 0x4f4b)) {
      if (_Memory != &DAT_00479578) {
        free(_Memory);
      }
      FUN_00433690(0,"success!\n");
      goto LAB_004200a0;
    }
    if (_Memory != &DAT_00479578) {
      free(_Memory);
    }
  }
  FUN_00433690(0,"failed!\n");
LAB_004200a0:
  time((time_t *)aiStack_10);
  FUN_00448190(aiStack_10[0],DAT_004cd844);
  FUN_00433690(0,"Completed in %.0fs\n");
  return 1;
}

