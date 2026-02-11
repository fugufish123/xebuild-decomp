
int __cdecl FUN_00448470(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = _errno();
  *piVar1 = 0;
  if (param_1 == (void *)0x0) {
    piVar1 = _errno();
    iVar2 = -1;
    *piVar1 = 0xe;
  }
  else {
    iVar2 = 0;
    if (*(int *)((int)param_1 + 0x224) != -1) {
      iVar2 = _findclose(*(int *)((int)param_1 + 0x224));
    }
    free(param_1);
  }
  return iVar2;
}

