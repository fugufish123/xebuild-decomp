
undefined8 __cdecl FUN_00448ff0(FILE *param_1)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = fgetpos(param_1,(fpos_t *)&local_14);
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = 0xffffffff;
  }
  return CONCAT44(local_10,local_14);
}

