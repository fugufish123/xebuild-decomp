
undefined4 __cdecl FUN_00420910(int param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  undefined *_Memory;
  undefined4 uVar3;
  uint uVar4;
  uint len;
  int local_20 [4];
  
  iVar2 = send(DAT_0044a6c0,"WBPT\n",5,0);
  if (iVar2 == 5) {
    FUN_00420b20(param_2,(undefined1 *)local_20);
    iVar2 = send(DAT_0044a6c0,(char *)local_20,4,0);
    if (iVar2 == -1) {
      WSAGetLastError();
      FUN_00433690(0,"socket error sending data size, %d\n");
    }
    else {
      uVar4 = 0;
      len = 0x5ac;
      if (param_2 != 0) {
        do {
          if (param_2 - uVar4 < 0x5ac) {
            len = param_2 - uVar4;
          }
          iVar2 = send(DAT_0044a6c0,(char *)(param_1 + uVar4),len,0);
          if (iVar2 == -1) {
            WSAGetLastError();
            FUN_00433690(0,"socket error sending data (1), %d\n");
            return 0;
          }
          uVar4 = uVar4 + iVar2;
        } while (uVar4 < param_2);
      }
      _Memory = FUN_0041e800();
      if (_Memory != (undefined *)0x0) {
        if ((local_20[0] == 2) && (sVar1 = FUN_00420ab0(_Memory), sVar1 == 0x4f4b)) {
          if (_Memory == &DAT_00479578) {
            return 1;
          }
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
          if (_Memory == &DAT_00479578) {
            return 0;
          }
        }
        free(_Memory);
        return uVar3;
      }
    }
  }
  return 0;
}

