
undefined * __cdecl FUN_0041ee30(uint *param_1,int param_2)

{
  int iVar1;
  uint _Count;
  undefined *_Memory;
  uint uVar2;
  uint local_12c;
  timeval local_128;
  fd_set local_120;
  
  local_128.tv_sec = 0xf;
  local_128.tv_usec = 0;
  local_120.fd_count = 1;
  local_120.fd_array[0] = DAT_0044a6c0;
  *param_1 = 0;
  iVar1 = select(0,&local_120,(fd_set *)0x0,(fd_set *)0x0,&local_128);
  if (iVar1 + 1U < 2) {
    WSAGetLastError();
    FUN_00433690(0,"timeout waiting for data, %d\n");
    return (undefined *)0x0;
  }
  iVar1 = recv(DAT_0044a6c0,(char *)&local_12c,4,0);
  if (iVar1 + 1U < 2) {
    WSAGetLastError();
    FUN_00433690(0,"unable to fetch first 4 bytes, %d\n");
    return (undefined *)0x0;
  }
  _Count = FUN_00420ad0(&local_12c);
  if (_Count == 0xffffffff) {
    return (undefined *)0x0;
  }
  if (_Count == 0) {
    *param_1 = 0;
    return &DAT_00479578;
  }
  _Memory = (undefined *)calloc(_Count,1);
  if (param_2 == 0) {
    uVar2 = 0;
    if (0 < (int)_Count) {
      do {
        iVar1 = select(0,&local_120,(fd_set *)0x0,(fd_set *)0x0,&local_128);
        if (iVar1 + 1U < 2) goto LAB_0041efbb;
        iVar1 = recv(DAT_0044a6c0,_Memory + uVar2,_Count - uVar2,0);
        if (iVar1 == -1) goto LAB_0041f0ac;
        uVar2 = uVar2 + iVar1;
      } while ((int)uVar2 < (int)_Count);
      if (_Count == uVar2) {
LAB_0041f132:
        *param_1 = uVar2;
        return _Memory;
      }
    }
  }
  else {
    uVar2 = 0;
    printf("waiting for 0x%x bytes\n",_Count);
    if ((int)_Count < 1) {
      putchar(10);
    }
    else {
      do {
        iVar1 = select(0,&local_120,(fd_set *)0x0,(fd_set *)0x0,&local_128);
        if (iVar1 + 1U < 2) goto LAB_0041efbb;
        iVar1 = recv(DAT_0044a6c0,_Memory + uVar2,_Count - uVar2,0);
        if (iVar1 == -1) {
          putchar(10);
          goto LAB_0041f0ac;
        }
        uVar2 = uVar2 + iVar1;
        printf("received 0x%08x of 0x%08x\r",uVar2,_Count);
      } while ((int)uVar2 < (int)_Count);
      putchar(10);
      if (_Count == uVar2) goto LAB_0041f132;
    }
    putchar(10);
  }
  FUN_00433690(0,"received only %x of %x bytes! fail\n");
joined_r0x0041f0d0:
  if (_Memory != &DAT_00479578) {
LAB_0041efe1:
    free(_Memory);
  }
  return (undefined *)0x0;
LAB_0041efbb:
  WSAGetLastError();
  FUN_00433690(0,"timeout waiting for data, error %d\n");
  if (_Memory == &DAT_00479578) {
    return (undefined *)0x0;
  }
  goto LAB_0041efe1;
LAB_0041f0ac:
  WSAGetLastError();
  FUN_00433690(0,"could not receive data on socket, error %d\n");
  goto joined_r0x0041f0d0;
}

