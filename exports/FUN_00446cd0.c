
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00446cd0(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  _FILETIME local_2c;
  LARGE_INTEGER aLStack_24 [2];
  
  local_2c.dwLowDateTime = 0;
  local_2c.dwHighDateTime = 0;
  if (DAT_0044b6cc != 0xbb40e64e) {
    _DAT_0044b6d0 = ~DAT_0044b6cc;
    return;
  }
  GetSystemTimeAsFileTime(&local_2c);
  uVar4 = local_2c.dwLowDateTime ^ local_2c.dwHighDateTime;
  DVar1 = GetCurrentProcessId();
  DVar2 = GetCurrentThreadId();
  DVar3 = GetTickCount();
  QueryPerformanceCounter(aLStack_24);
  DAT_0044b6cc = aLStack_24[0].s.LowPart ^ uVar4 ^ aLStack_24[0].s.HighPart ^ DVar1 ^ DVar2 ^ DVar3;
  if (DAT_0044b6cc == 0xbb40e64e) {
    _DAT_0044b6d0 = 0x44bf19b0;
    DAT_0044b6cc = 0xbb40e64f;
  }
  else {
    _DAT_0044b6d0 = ~DAT_0044b6cc;
  }
  return;
}

