
void FUN_0041fa40(void)

{
  int iVar1;
  
  FUN_00433690(0,"\ndisconnecting from server...");
  iVar1 = send(DAT_0044a6c0,"QUIT\n",5,0);
  if (iVar1 == 5) {
    FUN_00433690(0,"OK\n");
  }
  else {
    FUN_00433690(0,"failed\n");
  }
  if ((DAT_00479574 != &DAT_00479578) && (DAT_00479574 != (undefined *)0x0)) {
    free(DAT_00479574);
  }
  if (DAT_0044a6c0 != 0xffffffff) {
    closesocket(DAT_0044a6c0);
  }
  return;
}

