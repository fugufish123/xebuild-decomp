
void __cdecl
FUN_00418fd0(undefined4 param_1,char *param_2,undefined4 *param_3,size_t param_4,int param_5,
            int param_6)

{
  bool bVar1;
  undefined3 extraout_var;
  byte *_Memory;
  int iVar2;
  undefined4 *puVar3;
  size_t local_420;
  char local_41c [4];
  undefined4 local_418;
  undefined1 local_414;
  char local_413 [1027];
  
  local_41c[0] = '.';
  local_41c[1] = '/';
  local_41c[2] = '\0';
  local_41c[3] = '\0';
  puVar3 = &local_418;
  for (iVar2 = 0xff; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  strcpy(local_41c + 2,param_2);
  bVar1 = FUN_004225a0(local_41c);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    builtin_strncpy(local_41c,"./co",4);
    local_418 = 0x6e6f6d6d;
    local_414 = 0x2f;
    strcpy(local_413,param_2);
  }
  _Memory = (byte *)FUN_00422670(local_41c,&local_420);
  *param_3 = _Memory;
  if (_Memory == (byte *)0x0) {
    if (param_6 == 0) {
      FUN_00433690(1,"%s (%s) not available, signature checks will not be performed\n");
    }
  }
  else {
    if (local_420 == param_4) {
      iVar2 = FUN_00422ae0(_Memory,param_4);
      if (iVar2 == param_5) {
        FUN_00433690(1,"loaded %s from file %s\n");
        return;
      }
      FUN_00433690(1,"loaded %s from file %s but sum 0x%x is not expected sum of 0x%x, discarding\n"
                  );
      _Memory = (byte *)*param_3;
    }
    free(_Memory);
    *param_3 = 0;
  }
  return;
}

