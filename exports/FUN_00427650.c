
undefined4 __cdecl FUN_00427650(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (DAT_004c4f9c < 1) {
    return 0;
  }
  iVar2 = 0;
  piVar3 = &DAT_004bc580;
  if (param_1 == DAT_004bc154) {
    iVar2 = 0;
  }
  else {
    do {
      iVar2 = iVar2 + 1;
      if (iVar2 == DAT_004c4f9c) {
        return 0;
      }
      iVar1 = *piVar3;
      piVar3 = piVar3 + 0x10b;
    } while (iVar1 != param_1);
  }
  return (&DAT_004bc158)[iVar2 * 0x10b];
}

