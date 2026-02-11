
undefined4 __cdecl FUN_00428780(char *param_1)

{
  FILE *_File;
  size_t _ElementSize;
  void *_DstBuf;
  undefined4 uVar1;
  char local_41c [1036];
  
  strcpy(local_41c,&DAT_0047a54c);
  strcat(local_41c,param_1);
  _File = fopen(local_41c,"rb");
  if (_File == (FILE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (*(void **)(param_1 + 0x40c) != (void *)0x0) {
      free(*(void **)(param_1 + 0x40c));
    }
    _ElementSize = FUN_00422420(_File);
    if (_ElementSize == 0) {
      fclose(_File);
      FUN_00433690(0,"\n******WARNING: \'%s\' is a 0 byte file, loading skipped!\n");
      return 1;
    }
    *(size_t *)(param_1 + 0x410) = _ElementSize;
    FUN_00433690(1,"reading %s (0x%x bytes)");
    _DstBuf = calloc(*(int *)(param_1 + 0x410) + 0x10000,1);
    *(void **)(param_1 + 0x40c) = _DstBuf;
    if (_DstBuf == (void *)0x0) {
      uVar1 = 0xfffffffe;
    }
    else {
      fread(_DstBuf,_ElementSize,1,_File);
      fclose(_File);
      FUN_00433690(1,"\n");
      uVar1 = 0;
    }
  }
  return uVar1;
}

