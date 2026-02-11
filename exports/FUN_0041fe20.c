
undefined4 __cdecl FUN_0041fe20(char *param_1)

{
  bool bVar1;
  int iVar2;
  undefined *_Memory;
  undefined3 extraout_var;
  size_t sStack_14;
  int aiStack_10 [3];
  
  time((time_t *)&DAT_004cd844);
  FUN_00433690(0,"reading flash image from console...");
  iVar2 = send(DAT_0044a6c0,"GTFL\n",5,0);
  if (iVar2 == 5) {
    iVar2 = FUN_00433600();
    _Memory = FUN_0041ee30(&sStack_14,(uint)(iVar2 != 0));
    if (_Memory != (undefined *)0x0) {
      FUN_00433690(1,"received 0x%x bytes data OK, writing to file %s...");
      bVar1 = FUN_00420d00(param_1,_Memory,sStack_14);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        FUN_00433690(0,"failed!\n");
      }
      else {
        FUN_00433690(0,"success!\n");
      }
      time((time_t *)aiStack_10);
      FUN_00448190(aiStack_10[0],DAT_004cd844);
      FUN_00433690(0,"Completed in %.0fs\n");
      if (_Memory == &DAT_00479578) {
        return 1;
      }
      free(_Memory);
      return 1;
    }
  }
  FUN_00433690(0,"failed!\n");
  return 0;
}

