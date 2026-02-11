
bool FUN_00447880(void)

{
  int in_EAX;
  int *piVar1;
  
  piVar1 = (int *)(in_EAX + *(int *)(in_EAX + 0x3c));
  if (*piVar1 != 0x4550) {
    return false;
  }
  return (short)piVar1[6] == 0x10b;
}

