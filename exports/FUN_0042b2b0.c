
void FUN_0042b2b0(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = DAT_00479ed8;
  *(undefined1 *)(DAT_00479ed8 + 0x4b) = 1;
  bVar3 = (DAT_00479f00 & 9) != 0;
  if ((bool)bVar3) {
    FUN_00433690(1,"\tPatching header for slower demon/cygnos UART speed\n");
    iVar2 = DAT_00479ed8;
  }
  if (DAT_00479ea8 == 2) {
    bVar3 = bVar3 | (byte)DAT_00479f00 & 7;
    if ((DAT_00479f00 & 8) != 0) {
      bVar3 = bVar3 | 1;
    }
    if ((DAT_00479f10 != DAT_00479f08) && (DAT_00479f10 != DAT_00479f0c)) goto LAB_0042b2e5;
  }
  DAT_00479f10 = 0;
LAB_0042b2e5:
  iVar1 = DAT_00479f10;
  *(byte *)(iVar2 + 0x4d) = bVar3;
  *(char *)(iVar2 + 0x4c) = (char)iVar1;
  FUN_00433690(1,"\tPatching header for xell power reason\n");
  iVar2 = DAT_00479ed8;
  if (DAT_00479f08 == DAT_00479f0c) {
    DAT_00479f0c = 0;
  }
  *(char *)(DAT_00479ed8 + 0x4f) = (char)DAT_00479f08;
  if (DAT_00479f0c != 0) {
    FUN_00433690(1,"\tPatching header for xell alt power reason\n");
    iVar2 = DAT_00479ed8;
  }
  *(char *)(iVar2 + 0x4e) = (char)DAT_00479f0c;
  return;
}

