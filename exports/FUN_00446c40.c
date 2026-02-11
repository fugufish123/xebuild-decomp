
void FUN_00446c40(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_004497a0;
  if (DAT_004497a0 == -1) {
    iVar1 = 0;
    do {
      iVar2 = iVar1;
      iVar1 = iVar2 + 1;
    } while ((&DAT_004497a0)[iVar2 + 1] != 0);
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    (*(code *)(&DAT_004497a0)[iVar2])();
  }
  FUN_00446bf0((_onexit_t)&LAB_00446c10);
  return;
}

