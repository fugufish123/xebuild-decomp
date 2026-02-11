
undefined4 __cdecl FUN_00420840(int param_1)

{
  int iVar1;
  char *buf;
  
  if (param_1 == 1) {
    FUN_00433690(0,"sending shutdown command...");
    buf = "SHDN\n";
  }
  else {
    if (param_1 != 2) {
      return 1;
    }
    FUN_00433690(0,"sending reboot command...");
    buf = "REEB\n";
  }
  iVar1 = send(DAT_0044a6c0,buf,5,0);
  if (iVar1 != 5) {
    FUN_00433690(0,"failed\n");
    return 1;
  }
  FUN_00433690(0,"OK\n");
  return 1;
}

