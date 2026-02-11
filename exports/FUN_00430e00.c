
undefined4 __cdecl FUN_00430e00(uint param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int local_10;
  
  puVar2 = FUN_0041fd60("flash_hdr");
  if (puVar2 == (undefined *)0x0) {
    return 0;
  }
  if (local_10 == 0) {
    return 0;
  }
  bVar1 = puVar2[0x4d];
  DAT_00479f00 = DAT_00479f00 | bVar1 & 7;
  if (DAT_00479ea8 == 2) {
    if (puVar2[0x4b] != '\x01') {
      uVar3 = FUN_00430b60(param_1);
      FUN_0041ea70(puVar2);
      return uVar3;
    }
    DAT_00479f10 = (uint)(byte)puVar2[0x4c];
  }
  DAT_00479f08 = (uint)(byte)puVar2[0x4f];
  DAT_00479f0c = (uint)(byte)puVar2[0x4e];
  FUN_00433690(param_1,"Xell Reason     : ");
  FUN_0040d370(param_1,DAT_00479f08);
  FUN_00430660("xellbutton",DAT_00479f08);
  if (DAT_00479f0c != 0) {
    FUN_00433690(param_1,"Xell Alt Reason : ");
    FUN_0040d370(param_1,DAT_00479f0c);
    FUN_00430660("xellbutton2",DAT_00479f0c);
  }
  if ((bVar1 & 1) != 0) {
    FUN_00433690(param_1,"UART speed      : cygnos/demon speed set\n");
    if (DAT_0047957c == (FILE *)0x0) goto LAB_00430edf;
    fprintf(DAT_0047957c,"%s = %s;\n\n","cygnos",&DAT_0045ba2e);
  }
  if (((bVar1 & 2) != 0) && (DAT_0047957c != (FILE *)0x0)) {
    fprintf(DAT_0047957c,"%s = %s;\n\n","nodvd",&DAT_0045ba2e);
  }
LAB_00430edf:
  if (DAT_00479f10 != 0) {
    FUN_00430660("dualboot",DAT_00479f10);
  }
  FUN_0041ea70(puVar2);
  return 1;
}

