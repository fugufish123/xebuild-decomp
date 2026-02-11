
undefined4 FUN_0040aef0(void)

{
  size_t _Size;
  uint uVar1;
  uint uVar2;
  FILE *_File;
  undefined4 uVar3;
  uint *puVar4;
  uint *puVar5;
  bool bVar6;
  uint local_40c [256];
  
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
  builtin_strncpy((char *)((int)puVar5 + (-3 - (uint)CARRY1((byte)uVar2,(byte)uVar2))),"options.ini"
                  ,0xc);
  FUN_00433690(1,"\n------ parsing user ini at \'%s\' ------\n");
  _File = fopen((char *)local_40c,"rb");
  if (_File != (FILE *)0x0) {
    DAT_004c97ac = FUN_00422420(_File);
    _Size = DAT_004c97ac + 1;
    DAT_004c93a4 = (char *)malloc(_Size);
    if (DAT_004c93a4 == (char *)0x0) {
      FUN_00433690(0,"******* ERROR loading %s, unable to allocate memory\n");
      fclose(_File);
      uVar3 = 0;
    }
    else {
      memset(DAT_004c93a4,0xff,_Size);
      FUN_00433690(1,"loading file...");
      fread(DAT_004c93a4,DAT_004c97ac,1,_File);
      fclose(_File);
      FUN_00433690(1,"done!\n");
      if ((*DAT_004c93a4 == -1) || (DAT_004c93a4[1] == -1)) {
        FUN_00433690(0,
                     "***** WARNING: User ini %s\nappears to be a multi byte file, not an ascii only file - ignoring it!\n"
                    );
        free(DAT_004c93a4);
        DAT_004c93a4 = (char *)0x0;
        DAT_004c97ac = 0;
        return 0;
      }
      DAT_004c93a4[DAT_004c97ac] = -1;
      FUN_00433690(1,"pre-parsing and sanitizing\n");
      DAT_004c97ac = FUN_00408fe0(DAT_004c93a4,DAT_004c97ac);
      FUN_00433690(1,"done!\n");
      DAT_004c93a4[DAT_004c97ac] = '\0';
      uVar3 = 1;
    }
    return uVar3;
  }
  FUN_00433690(1,"\n******* WARNING: could not open user ini at \'%s\', skipping\n");
  return 0;
}

