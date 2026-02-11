
undefined4 __cdecl FUN_00422350(byte *param_1)

{
  size_t sVar1;
  byte *pbVar2;
  
  if (((param_1 != (byte *)0x0) && (sVar1 = strlen((char *)param_1), *param_1 != 0)) && (sVar1 != 0)
     ) {
    if (0 < (int)sVar1) {
      pbVar2 = param_1 + sVar1;
      do {
        if ((9 < (byte)(*param_1 - 0x30)) && (5 < (byte)((*param_1 & 0xdf) + 0xbf))) {
          return 0;
        }
        param_1 = param_1 + 1;
      } while (pbVar2 != param_1);
    }
    return 1;
  }
  return 0;
}

