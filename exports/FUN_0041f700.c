
undefined4 __cdecl FUN_0041f700(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uStack_1c0;
  undefined1 auStack_1bc [4];
  int iStack_1b8;
  sockaddr sStack_1ac;
  WSADATA local_19c;
  
  iVar1 = WSAStartup(0x202,&local_19c);
  if (iVar1 != 0) {
    WSAGetLastError();
    FUN_00433690(0,"WSAStartup failed, error %d\n");
    return 0;
  }
  if (param_1 == 0) {
    FUN_00433690(0,"started, watching network for xbox...");
    iVar1 = FUN_0041ea90();
    if (iVar1 == 0) {
      FUN_00433690(0,"failed to find xbox beacon\n");
      return 0;
    }
    FUN_00433690(0,"success, found xbox beacon at %u.%u.%u.%u\n");
    FUN_00433690(1,"attempting to connect...");
    DAT_0044a6c0 = socket(2,1,6);
    if (DAT_0044a6c0 == 0xffffffff) goto LAB_0041f9c0;
    sStack_1ac.sa_family = 2;
    sStack_1ac.sa_data._0_2_ = htons(0x31);
    sStack_1ac.sa_data._2_4_ = iVar1;
    iVar1 = connect(DAT_0044a6c0,&sStack_1ac,0x10);
    if (iVar1 < 0) goto LAB_0041f8a4;
    pcVar3 = "success!\nGetting console info...";
    uVar2 = 1;
  }
  else {
    uStack_1c0 = 0x10;
    iVar1 = WSAStringToAddressA(param_1,2,0,auStack_1bc,&uStack_1c0);
    if (iVar1 != 0) {
      WSAGetLastError();
      FUN_00433690(0,"attempting to convert %s to an address failed, error %d\n");
      return 0;
    }
    FUN_00433690(0,"attempting forced connection to %u.%u.%u.%u...");
    DAT_0044a6c0 = socket(2,1,6);
    if (DAT_0044a6c0 == 0xffffffff) {
LAB_0041f9c0:
      WSAGetLastError();
      FUN_00433690(0,"could not create client socket, error %d\n");
      return 0;
    }
    sStack_1ac.sa_family = 2;
    sStack_1ac.sa_data._0_2_ = htons(0x31);
    sStack_1ac.sa_data[2] = (undefined1)iStack_1b8;
    sStack_1ac.sa_data[3] = iStack_1b8._1_1_;
    sStack_1ac.sa_data[4] = iStack_1b8._2_1_;
    sStack_1ac.sa_data[5] = iStack_1b8._3_1_;
    iVar1 = connect(DAT_0044a6c0,&sStack_1ac,0x10);
    if (iVar1 < 0) {
LAB_0041f8a4:
      WSAGetLastError();
      FUN_00433690(0,"could not connect, error %d\n");
      return 0;
    }
    pcVar3 = "success!\n";
    uVar2 = 0;
  }
  FUN_00433690(uVar2,pcVar3);
  iVar1 = FUN_0041f470();
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}

