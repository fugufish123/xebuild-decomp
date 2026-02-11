
undefined4 FUN_0041ea90(void)

{
  u_short uVar1;
  SOCKET s;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  char local_158 [4];
  int iStack_154;
  timeval tStack_150;
  uint auStack_148 [2];
  sockaddr sStack_140;
  sockaddr sStack_130;
  fd_set fStack_120;
  
  local_158[0] = '\x01';
  local_158[1] = '\0';
  local_158[2] = '\0';
  local_158[3] = '\0';
  s = socket(2,2,0x11);
  if (s == 0xffffffff) {
    WSAGetLastError();
    FUN_00433690(0,"unable to open socket, error %d\n");
    return 0;
  }
  iVar2 = setsockopt(s,0xffff,0x20,local_158,4);
  if (iVar2 == -1) {
    WSAGetLastError();
    pcVar5 = "unable to set bcast socket option, error %d\n";
  }
  else {
    sStack_140.sa_data[2] = '\0';
    sStack_140.sa_data[3] = '\0';
    sStack_140.sa_data[4] = '\0';
    sStack_140.sa_data[5] = '\0';
    sStack_140.sa_data[6] = '\0';
    sStack_140.sa_data[7] = '\0';
    sStack_140.sa_data[8] = '\0';
    sStack_140.sa_data[9] = '\0';
    sStack_140.sa_data[10] = '\0';
    sStack_140.sa_data[0xb] = '\0';
    sStack_140.sa_data[0xc] = '\0';
    sStack_140.sa_data[0xd] = '\0';
    sStack_140.sa_family = 2;
    sStack_140.sa_data[0] = '\0';
    sStack_140.sa_data[1] = '\0';
    uVar1 = htons(0x30);
    sStack_140.sa_data._0_2_ = uVar1;
    sStack_140.sa_data[2] = '\0';
    sStack_140.sa_data[3] = '\0';
    sStack_140.sa_data[4] = '\0';
    sStack_140.sa_data[5] = '\0';
    iVar2 = bind(s,&sStack_140,0x10);
    if (iVar2 == -1) {
      WSAGetLastError();
      pcVar5 = "unable to set bind socket, error %d\n";
    }
    else {
      while( true ) {
        auStack_148[0] = 0;
        auStack_148[1] = 0;
        iStack_154 = 0x10;
        fStack_120.fd_count = 1;
        tStack_150.tv_sec = 0x1e;
        tStack_150.tv_usec = 0;
        fStack_120.fd_array[0] = s;
        iVar2 = select(0,&fStack_120,(fd_set *)0x0,(fd_set *)0x0,&tStack_150);
        if (iVar2 == -1) break;
        if (iVar2 == 0) {
          FUN_00433690(0,"UDP wait timeout!\n");
          closesocket(s);
          return 0;
        }
        recvfrom(s,(char *)auStack_148,8,0,&sStack_130,&iStack_154);
        uVar3 = FUN_00420ad0(auStack_148);
        if (uVar3 == 0x4e537672) {
          uVar4 = FUN_00420af0(auStack_148 + 1);
          closesocket(s);
          return uVar4;
        }
        FUN_00420ad0(auStack_148);
        FUN_00433690(0,"Beacon received, but the beacon magic %X was not %X!\n");
      }
      WSAGetLastError();
      pcVar5 = "Socket error! %d\n";
    }
  }
  FUN_00433690(0,pcVar5);
  closesocket(s);
  return 0;
}

