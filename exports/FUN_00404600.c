
undefined4 __cdecl FUN_00404600(char *param_1,undefined4 *param_2,int *param_3)

{
  char *pcVar1;
  undefined *_Memory;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  int local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118 [66];
  
  bVar4 = DAT_0046f158 == 0;
  *param_3 = 0;
  *param_2 = 0;
  if (bVar4) {
    return 0;
  }
  local_120 = 0x3a767375;
  local_11c = 0x5c;
  puVar3 = local_118;
  for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  pcVar1 = strrchr(param_1,0x2f);
  if ((pcVar1 == (char *)0x0) && (pcVar1 = strrchr(param_1,0x5c), pcVar1 == (char *)0x0)) {
    strcpy((char *)((int)&local_11c + 1),param_1);
  }
  else {
    strcpy((char *)((int)&local_11c + 1),pcVar1 + 1);
  }
  FUN_00433690(1,"retrieving USVR\\%s...");
  _Memory = FUN_0041fd60(&local_120);
  if (_Memory == (undefined *)0x0) {
    FUN_00433690(1,"failed! file not found on console\n");
  }
  else {
    if (local_124 != 0) {
      FUN_00433690(1,"OK, received 0x%x bytes\n");
      *param_2 = _Memory;
      *param_3 = local_124;
      return 1;
    }
    FUN_00433690(1,"failed! received 0 bytes\n");
    free(_Memory);
  }
  return 0;
}

