
bool __cdecl FUN_004225a0(char *param_1)

{
  FILE *_File;
  
  _File = fopen(param_1,"rb");
  if (_File != (FILE *)0x0) {
    fclose(_File);
  }
  return _File != (FILE *)0x0;
}

