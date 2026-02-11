
undefined4 __cdecl FUN_004288c0(char *param_1)

{
  FILE *_File;
  size_t _ElementSize;
  void *_DstBuf;
  char local_41c [1036];
  
  strcpy(local_41c,param_1);
  _File = fopen(local_41c,"rb");
  if (_File != (FILE *)0x0) {
    if (*(void **)(param_1 + 0x40c) != (void *)0x0) {
      free(*(void **)(param_1 + 0x40c));
    }
    _ElementSize = FUN_00422420(_File);
    if (_ElementSize == 0) {
      fclose(_File);
      FUN_00433690(0,"\n******WARNING: \'%s\' is a 0 byte file, loading skipped!\n");
    }
    else {
      *(size_t *)(param_1 + 0x410) = _ElementSize;
      FUN_00433690(1,"reading %s (0x%x bytes)");
      _DstBuf = calloc(*(int *)(param_1 + 0x410) + 0x10000,1);
      *(void **)(param_1 + 0x40c) = _DstBuf;
      if (_DstBuf != (void *)0x0) goto LAB_00428966;
    }
  }
  local_41c[0] = '.';
  local_41c[1] = '/';
  strcpy(local_41c + 2,param_1);
  _File = fopen(local_41c,"rb");
  if (_File == (FILE *)0x0) {
    return 0xffffffff;
  }
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
    return 0xfffffffe;
  }
LAB_00428966:
  fread(_DstBuf,_ElementSize,1,_File);
  fclose(_File);
  FUN_00433690(1,"\n");
  return 0;
}

