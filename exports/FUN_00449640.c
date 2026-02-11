
byte FUN_00449640(void)

{
  char *in_EAX;
  int iVar1;
  byte bVar2;
  
  iVar1 = _strnicmp(in_EAX,"wirelessx",9);
  bVar2 = 0x55;
  if (iVar1 != 0) {
    iVar1 = _strnicmp(in_EAX,"wiredx",6);
    if (iVar1 == 0) {
      iVar1 = _strnicmp(in_EAX,"wiredxb1",8);
      bVar2 = 0x59;
      if (iVar1 != 0) {
        iVar1 = _strnicmp(in_EAX,"wiredxb2",8);
        bVar2 = 0x58;
        if (iVar1 != 0) {
          iVar1 = _strnicmp(in_EAX,"wiredxb3",8);
          if (iVar1 != 0) {
            iVar1 = _strnicmp(in_EAX,"wiredxf1",8);
            if (iVar1 == 0) {
              return 0x56;
            }
            iVar1 = _strnicmp(in_EAX,"wiredxf2",8);
            if (iVar1 == 0) {
              return 0x57;
            }
          }
          bVar2 = 0x5a;
        }
      }
    }
    else {
      iVar1 = _strnicmp(in_EAX,"eject",5);
      bVar2 = 0x12;
      if (iVar1 != 0) {
        iVar1 = _strnicmp(in_EAX,"kiosk",5);
        bVar2 = -(iVar1 == 0) & 0x41;
      }
    }
  }
  return bVar2;
}

