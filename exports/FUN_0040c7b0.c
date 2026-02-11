
void __cdecl FUN_0040c7b0(char *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  char local_34 [8];
  undefined4 auStack_2c [10];
  
  if (DAT_0046f190 == 0) {
    return;
  }
  iVar1 = FUN_00405d50((int *)&DAT_0046f194,param_1,param_2,param_3);
  if (iVar1 == 0) {
    builtin_strncpy(local_34,"$flash_",8);
    uVar2 = 0;
    do {
      *(undefined4 *)((int)auStack_2c + uVar2) = 0;
      uVar2 = uVar2 + 4;
    } while (uVar2 < 0x20);
    strncat(local_34,param_1,0x28);
    FUN_00405d50((int *)&DAT_0046f194,local_34,param_2,param_3);
  }
  return;
}

