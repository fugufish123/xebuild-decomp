
byte __cdecl FUN_00424a70(char *param_1)

{
  byte bVar1;
  int iVar2;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  iVar2 = _strnicmp(param_1,"power",5);
  bVar1 = 0x11;
  if (iVar2 != 0) {
    iVar2 = _strnicmp(param_1,"remopower",9);
    bVar1 = 0x20;
    if (iVar2 != 0) {
      iVar2 = _strnicmp(param_1,"remox",5);
      bVar1 = 0x22;
      if (iVar2 != 0) {
        iVar2 = _strnicmp(param_1,"winbutton",9);
        bVar1 = 0x24;
        if (iVar2 != 0) {
          bVar1 = FUN_00449640();
          return bVar1;
        }
      }
    }
  }
  return bVar1;
}

