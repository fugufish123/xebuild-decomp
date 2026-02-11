
undefined4 __cdecl FUN_00406980(char *param_1)

{
  short sVar1;
  undefined1 *_Memory;
  undefined4 uVar2;
  uint local_10 [2];
  
  FUN_0041ed50();
  FUN_00433690(0,"reading file %s...");
  _Memory = (undefined1 *)FUN_00422670(param_1,local_10);
  if (_Memory != (undefined1 *)0x0) {
    FUN_00433690(0,"success, read 0x%x bytes\n");
    sVar1 = FUN_00420ab0(_Memory);
    if (sVar1 == -0xb1) {
      if (*(uint *)(DAT_0046f160 + 0x14) == local_10[0]) {
        FUN_00433690(0,"sending data to console...\n");
        uVar2 = FUN_0041ffe0((int)_Memory,local_10[0]);
      }
      else {
        uVar2 = 0;
        FUN_00433690(0,"\n\n***** ERROR: file size should be 0x%x but its 0x%x bytes! Aborted!\n");
      }
    }
    else {
      uVar2 = 0;
      FUN_00420ab0(_Memory);
      FUN_00433690(0,"\n\n***** ERROR: image magic should be 0xFF4F but its 0x%x! Aborted!\n");
    }
    free(_Memory);
    return uVar2;
  }
  FUN_00433690(0,"\n\n***** ERROR: unable to read file to send\n");
  return 0;
}

