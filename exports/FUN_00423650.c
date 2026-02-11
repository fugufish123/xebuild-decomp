
undefined4 __cdecl FUN_00423650(char *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != (char *)0x0) {
    iVar1 = _mkdir(param_1);
    if (iVar1 != 0) {
      piVar2 = _errno();
      if (*piVar2 != 0x11) {
        FUN_00433690(0,"\n\n***** ERROR: cannot create %s! (error %d)\n");
        return 0;
      }
      FUN_00433690(0,"***** WARNING: reusing folder %s!\n");
    }
  }
  return 1;
}

