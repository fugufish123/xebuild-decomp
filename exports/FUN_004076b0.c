
void __cdecl FUN_004076b0(char *param_1,byte *param_2,byte *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined *_Memory;
  undefined3 extraout_var;
  size_t local_10 [2];
  
  uVar2 = FUN_00421de0(param_2,0xffffffff);
  uVar3 = FUN_00421de0(param_3,0xffffffff);
  if ((0xfffffffd < uVar3 - 1) || (uVar2 == 0xffffffff)) {
    FUN_00433690(0,
                 "\n\n***** ERROR: Invalid arguments specified, please provide hex only for start block and number of blocks!\n"
                );
    return;
  }
  if (*(uint *)(DAT_0046f160 + 0x14) / *(uint *)(DAT_0046f160 + 0x18) < uVar2 + uVar3) {
    FUN_00433690(0,
                 "\n\n***** ERROR: This read command will exceed the system area size of 0x%x blocks!\n"
                );
    return;
  }
  FUN_00433690(0,"Reading 0x%x (%d) blocks from console starting at block 0x%x (%d)...\n");
  _Memory = FUN_00420140(local_10,(ushort)uVar2,(ushort)uVar3);
  if ((_Memory != (undefined *)0x0) && (0 < (int)local_10[0])) {
    FUN_00433690(0,"Done!\nWriting 0x%x (%d) bytes to %s...\n");
    bVar1 = FUN_00420d00(param_1,_Memory,local_10[0]);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      FUN_00433690(0,"\n\n***** ERROR: Failed to write block data to file %s!\n");
    }
    else {
      FUN_00433690(0,"Done!\n");
    }
    free(_Memory);
    return;
  }
  FUN_00433690(0,"\n\n***** ERROR: Trying to read blocks from the console failed!\n");
  return;
}

