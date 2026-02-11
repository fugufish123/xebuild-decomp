
undefined4 __cdecl FUN_00416840(FILE *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  FILE *_File;
  int iVar3;
  void *_DstBuf;
  uint *puVar4;
  uint *puVar5;
  bool bVar6;
  char *pcVar7;
  uint local_40c [256];
  
  if (DAT_00478d40 != (DAT_00478d40 / 0x4200000) * 0x4200000) {
    FUN_00433690(0,"size is not a multiple of %d bytes, not copying data..\n");
    return 0;
  }
  if (DAT_00478d40 < 0x4200001) {
    FUN_00433690(0,"no data to copy..\n");
  }
  else {
    strcpy((char *)local_40c,&DAT_0047ad4c);
    puVar5 = local_40c;
    do {
      puVar4 = puVar5;
      uVar1 = *puVar4 + 0xfefefeff & ~*puVar4;
      uVar2 = uVar1 & 0x80808080;
      puVar5 = puVar4 + 1;
    } while (uVar2 == 0);
    bVar6 = (uVar1 & 0x8080) == 0;
    if (bVar6) {
      uVar2 = uVar2 >> 0x10;
    }
    if (bVar6) {
      puVar5 = (uint *)((int)puVar4 + 6);
    }
    builtin_strncpy((char *)((int)puVar5 + (-3 - (uint)CARRY1((byte)uVar2,(byte)uVar2))),
                    "nanddump.bin",0xd);
    _File = fopen((char *)local_40c,"rb");
    if (_File != (FILE *)0x0) {
      iVar3 = fseek(_File,0x4200000,2);
      if (iVar3 == 0) {
        _DstBuf = malloc(DAT_00478d40 + 0xfbe00000);
        if (_DstBuf != (void *)0x0) {
          FUN_00433690(1,"reading nanddump.bin...\n");
          fread(_DstBuf,DAT_00478d40 + 0xfbe00000,1,_File);
          fclose(_File);
          FUN_00433690(1,"writing nanddump.bin MU area to output file...");
          if (param_2 != (uint *)0x0) {
            FUN_00434960(param_2,_DstBuf,DAT_00478d40 + 0xfbe00000);
          }
          fwrite(_DstBuf,DAT_00478d40 + 0xfbe00000,1,param_1);
          free(_DstBuf);
          return 1;
        }
        pcVar7 = "could not allocate 0x%x byte buffer, not copying data..\n";
      }
      else {
        pcVar7 = "could not seek to 0x%x, not copying data..\n";
      }
      FUN_00433690(0,pcVar7);
      fclose(_File);
      return 0;
    }
    FUN_00433690(0,"could not re-open \'%s\' for reading, not copying data..\n");
  }
  return 0;
}

