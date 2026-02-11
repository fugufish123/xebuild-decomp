
int __cdecl FUN_00422ae0(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  if (param_2 != 0) {
    iVar2 = 0;
    pbVar3 = param_1 + param_2;
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar2 = iVar2 + (uint)bVar1;
    } while (pbVar3 != param_1);
    return iVar2;
  }
  return 0;
}

