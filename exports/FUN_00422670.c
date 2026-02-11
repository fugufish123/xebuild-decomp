
void * __cdecl FUN_00422670(char *param_1,size_t *param_2)

{
  FILE *_File;
  size_t _Size;
  void *_DstBuf;
  
  if (param_1 == (char *)0x0) {
    _DstBuf = (void *)0x0;
  }
  else {
    _File = fopen(param_1,"rb");
    if (_File == (FILE *)0x0) {
      _Size = 0;
      _DstBuf = (void *)0x0;
    }
    else {
      fseek(_File,0,2);
      _Size = ftell(_File);
      rewind(_File);
      _DstBuf = malloc(_Size);
      if (_DstBuf == (void *)0x0) {
        _Size = 0;
        FUN_00433690(1,"unable to allocate file buffer of 0x%x size!\n");
      }
      else {
        fread(_DstBuf,_Size,1,_File);
      }
      fclose(_File);
    }
    if (param_2 != (size_t *)0x0) {
      *param_2 = _Size;
    }
  }
  return _DstBuf;
}

