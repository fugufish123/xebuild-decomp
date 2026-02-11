
void __cdecl FUN_004417d0(int param_1,int param_2)

{
  do {
    if (param_2 == 0) {
      return;
    }
    param_2 = param_2 + -1;
  } while (*(int *)(param_1 + param_2 * 4) == 0);
  return;
}

