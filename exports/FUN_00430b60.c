
undefined4 __cdecl FUN_00430b60(uint param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  
  iVar2 = FUN_004276f0(0x16);
  FUN_00433690(1,"retrieving USVR\\freeboot_bin...");
  pcVar3 = FUN_0041fd60("freeboot_bin");
  (&DAT_004bc15c)[iVar2 * 0x10b] = pcVar3;
  if (pcVar3 == (char *)0x0) {
    return 0;
  }
  if ((&DAT_004bc160)[iVar2 * 0x10b] == 0) {
    return 0;
  }
  pcVar3 = FUN_00421000(pcVar3,(&DAT_004bc160)[iVar2 * 0x10b],&stack0xffffffc8,0x1b);
  if (pcVar3 == (char *)0x0) {
    FUN_00433690(0,
                 "\n*****WARNING: unrecognized freeboot binary on console! Using default options for xell/uart speed!\n"
                );
    DAT_00479f08 = 0x12;
  }
  else {
    FUN_00433690(param_1,"parsing freeboot 0.08 core for opts\n");
    iVar1 = (&DAT_004bc15c)[iVar2 * 0x10b];
    DAT_00479f08 = (uint)*(byte *)(iVar1 + 0x9a7);
    DAT_00479f10 = (uint)*(byte *)(iVar1 + 0x9ab);
    DAT_00479f0c = (uint)*(byte *)(iVar1 + 0x9af);
    uVar4 = FUN_00420ad0((uint *)(iVar1 + 0x9a0));
    FUN_00433690(param_1,"Xell Reason     : ");
    FUN_0040d370(param_1,DAT_00479f08);
    FUN_00430660("xellbutton",DAT_00479f08);
    if (DAT_00479f0c != 0) {
      FUN_00433690(param_1,"Xell Alt Reason : ");
      FUN_0040d370(param_1,DAT_00479f0c);
      FUN_00430660("xellbutton2",DAT_00479f0c);
    }
    if ((uVar4 & 9) != 0) {
      FUN_00433690(param_1,"UART speed      : cygnos/demon speed set\n");
      if (DAT_0047957c != (FILE *)0x0) {
        fprintf(DAT_0047957c,"%s = %s;\n\n");
      }
    }
    if (DAT_00479f10 != 0) {
      FUN_00433690(param_1,"DualBoot Reason :");
      FUN_0040d370(param_1,DAT_00479f10);
      FUN_00430660("dualboot",DAT_00479f10);
    }
  }
  FUN_0041ea70((undefined *)(&DAT_004bc15c)[iVar2 * 0x10b]);
  (&DAT_004bc160)[iVar2 * 0x10b] = 0;
  return 1;
}

