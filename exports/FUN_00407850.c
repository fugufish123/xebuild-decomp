
void __cdecl FUN_00407850(char *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  void *_Memory;
  uint uVar3;
  int iVar4;
  uint local_20 [4];
  
  uVar2 = FUN_00421de0(param_2,0xffffffff);
  if (uVar2 == 0xffffffff) {
    FUN_00433690(0,
                 "\n\n***** ERROR: Invalid arguments specified, please provide hex only for start block and number of blocks!\n"
                );
    return;
  }
  _Memory = FUN_00422670(param_1,local_20);
  if ((_Memory != (void *)0x0) && (0 < (int)local_20[0])) {
    uVar1 = *(uint *)(DAT_0046f160 + 0x18);
    uVar3 = local_20[0] / uVar1;
    if (local_20[0] % uVar1 == 0) {
      if (*(uint *)(DAT_0046f160 + 0x14) / uVar1 < uVar2 + uVar3) {
        FUN_00433690(0,
                     "\n\n***** ERROR: This read command will exceed the system area size of 0x%x blocks!\n"
                    );
      }
      else {
        FUN_00433690(0,"Writing 0x%x (%d) blocks to console starting at block 0x%x (%d)...\n");
        iVar4 = FUN_00420200((int)_Memory,local_20[0],(ushort)uVar2,(ushort)uVar3);
        if (iVar4 == 0) {
          FUN_00433690(0,"\n\n***** ERROR: Writing data to console failed!\n");
        }
        else {
          FUN_00433690(0,"Done! Wrote 0x%x (%d) bytes to console flash!\n");
        }
      }
    }
    else {
      FUN_00433690(0,
                   "\n\n***** ERROR: File %s size (0x%x) is not a multiple of console block size (0x%x)!\n"
                  );
    }
    free(_Memory);
    return;
  }
  FUN_00433690(0,"\n\n***** ERROR: Unable to read file %s!\n");
  return;
}

