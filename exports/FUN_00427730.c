
undefined4 __cdecl FUN_00427730(char *param_1,int param_2,int param_3,int param_4,uint param_5)

{
  FILE *_File;
  uint uVar1;
  uint uVar2;
  void *_DstBuf;
  undefined4 uVar3;
  
  _File = fopen(param_1,"rb");
  if (_File == (FILE *)0x0) {
    return 0xffffffff;
  }
  if (*(void **)(param_2 + 0x40c) != (void *)0x0) {
    free(*(void **)(param_2 + 0x40c));
  }
  uVar1 = FUN_00422420(_File);
  if (uVar1 == 0) {
    fclose(_File);
    FUN_00433690(0,"\n******WARNING: \'%s\' is a 0 byte file, loading skipped!\n");
    return 1;
  }
  *(uint *)(param_2 + 0x410) = uVar1;
  if ((param_4 == 0) || ((uVar1 & 0xf) == 0)) {
    uVar2 = uVar1;
    if (param_3 == 0) goto LAB_004277ee;
  }
  else {
    uVar2 = uVar1 + 0xf & 0xfffffff0;
    *(uint *)(param_2 + 0x410) = uVar2;
    if (param_3 == 0) goto LAB_004277ee;
    if (uVar1 != uVar2) {
      FUN_00433690(1,"reading %s (0x%x b pad 0x%x b)");
      uVar2 = *(uint *)(param_2 + 0x410);
      goto LAB_004277ee;
    }
  }
  FUN_00433690(1,"reading %s (0x%x bytes)");
  uVar2 = *(uint *)(param_2 + 0x410);
LAB_004277ee:
  _DstBuf = calloc(uVar2 + 0x10000,1);
  *(void **)(param_2 + 0x40c) = _DstBuf;
  if (_DstBuf == (void *)0x0) {
    uVar3 = 0xfffffffe;
  }
  else {
    fread(_DstBuf,uVar1,1,_File);
    fclose(_File);
    if (param_5 == 0) {
      FUN_00433690(1,"\n");
      return 0;
    }
    uVar1 = FUN_00433800(*(byte **)(param_2 + 0x40c),uVar1);
    FUN_00433690(1," (crc32: 0x%08x ini: 0x%08x)\n");
    uVar3 = 0;
    if (param_5 != uVar1) {
      FUN_00433690(0,"\n******WARNING: \'%s\' crc32: 0x%08x expected: 0x%08x\n");
      uVar3 = 1;
    }
  }
  return uVar3;
}

