
long __cdecl FUN_00422420(FILE *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != (FILE *)0x0) {
    fseek(param_1,0,2);
    lVar1 = ftell(param_1);
    rewind(param_1);
  }
  return lVar1;
}

