
int __cdecl FUN_004276f0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((DAT_004c4f98 < 1) || (param_1 == DAT_004bc154)) {
LAB_00427725:
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    piVar3 = &DAT_004bc580;
    do {
      iVar2 = iVar2 + 1;
      if (iVar2 == DAT_004c4f98) goto LAB_00427725;
      iVar1 = *piVar3;
      piVar3 = piVar3 + 0x10b;
    } while (iVar1 != param_1);
  }
  return iVar2;
}

