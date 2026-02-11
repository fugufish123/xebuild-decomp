
/* WARNING: Type propagation algorithm not settling */

undefined * FUN_0041e800(void)

{
  uint *in_EAX;
  int iVar1;
  uint _Count;
  undefined *_Memory;
  uint uVar2;
  uint local_12c;
  timeval local_128;
  fd_set local_120;
  
  local_120.fd_array[0] = DAT_0044a6c0;
  local_128.tv_sec = 0xf;
  local_128.tv_usec = 0;
  local_120.fd_count = 1;
  *in_EAX = 0;
  iVar1 = select(0,&local_120,(fd_set *)0x0,(fd_set *)0x0,&local_128);
  if (iVar1 + 1U < 2) {
    WSAGetLastError();
    FUN_00433690(0,"timeout waiting for data, %d\n");
  }
  else {
    iVar1 = recv(DAT_0044a6c0,(char *)&local_12c,4,0);
    if (1 < iVar1 + 1U) {
      _Count = FUN_00420ad0(&local_12c);
      if (_Count != 0xffffffff) {
        if (_Count == 0) {
          *in_EAX = 0;
          return &DAT_00479578;
        }
        uVar2 = 0;
        _Memory = (undefined *)calloc(_Count,1);
        if (0 < (int)_Count) {
          do {
            iVar1 = select(0,&local_120,(fd_set *)0x0,(fd_set *)0x0,&local_128);
            if (iVar1 + 1U < 2) {
              WSAGetLastError();
              FUN_00433690(0,"timeout waiting for data, error %d\n");
              goto joined_r0x0041e991;
            }
            iVar1 = recv(DAT_0044a6c0,_Memory + uVar2,_Count - uVar2,0);
            if (iVar1 == -1) {
              WSAGetLastError();
              FUN_00433690(0,"could not receive data on socket, error %d\n");
              goto joined_r0x0041e991;
            }
            uVar2 = uVar2 + iVar1;
          } while ((int)uVar2 < (int)_Count);
          if (_Count == uVar2) {
            *in_EAX = _Count;
            return _Memory;
          }
        }
        FUN_00433690(0,"received only %x of %x bytes! fail\n");
joined_r0x0041e991:
        if (_Memory != &DAT_00479578) {
          free(_Memory);
        }
      }
      return (undefined *)0x0;
    }
    WSAGetLastError();
    FUN_00433690(0,"unable to fetch first 4 bytes, %d\n");
  }
  return (undefined *)0x0;
}

