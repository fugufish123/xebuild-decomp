
undefined4 __cdecl FUN_0041f1a0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint len;
  char local_20 [16];
  
  FUN_00420b20(param_2,local_20);
  iVar1 = send(DAT_0044a6c0,local_20,4,0);
  if (iVar1 == -1) {
    WSAGetLastError();
    FUN_00433690(0,"socket error sending data size, %d\n");
    return 0;
  }
  if (param_2 == 0) {
    if (param_3 == 0) {
      return 1;
    }
  }
  else {
    uVar2 = 0;
    len = 0x5ac;
    if (param_3 == 0) {
      while( true ) {
        if (param_2 - uVar2 < 0x5ac) {
          len = param_2 - uVar2;
        }
        iVar1 = send(DAT_0044a6c0,(char *)(param_1 + uVar2),len,0);
        if (iVar1 == -1) break;
        uVar2 = uVar2 + iVar1;
        if (param_2 <= uVar2) {
          return 1;
        }
      }
LAB_0041f24e:
      WSAGetLastError();
      FUN_00433690(0,"socket error sending data (1), %d\n");
      return 0;
    }
    do {
      if (param_2 - uVar2 < 0x5ac) {
        len = param_2 - uVar2;
      }
      iVar1 = send(DAT_0044a6c0,(char *)(param_1 + uVar2),len,0);
      if (iVar1 == -1) {
        putchar(10);
        goto LAB_0041f24e;
      }
      uVar2 = uVar2 + iVar1;
      printf("sent 0x%08x of 0x%08x\r",uVar2,param_2);
    } while (uVar2 < param_2);
  }
  putchar(10);
  return 1;
}

