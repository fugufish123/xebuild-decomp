
undefined8 __cdecl FUN_004224d0(FILE *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (FILE *)0x0) {
    FUN_00448af0(param_1,0,0,2);
    uVar1 = FUN_00448ff0(param_1);
    rewind(param_1);
    return uVar1;
  }
  return 0;
}

