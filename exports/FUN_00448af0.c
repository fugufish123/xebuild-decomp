
int __cdecl FUN_00448af0(FILE *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 local_24;
  
  if (param_4 == 1) {
    iVar1 = fgetpos(param_1,&local_24);
    if (iVar1 != 0) {
      return -1;
    }
    local_24 = CONCAT44(local_24._4_4_ + param_3 + (uint)CARRY4((uint)local_24,param_2),
                        (uint)local_24 + param_2);
  }
  else if (param_4 == 2) {
    fflush(param_1);
    iVar1 = _fileno(param_1);
    local_24 = _filelengthi64(iVar1);
    local_24 = local_24 + CONCAT44(param_3,param_2);
  }
  else {
    if (param_4 != 0) {
      piVar2 = _errno();
      *piVar2 = 0x16;
      return -1;
    }
    local_24 = CONCAT44(param_3,param_2);
  }
  iVar1 = fsetpos(param_1,&local_24);
  return iVar1;
}

