
int __cdecl FUN_00434090(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  
  if (param_2 < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    pbVar1 = param_1 + param_2;
    do {
      bVar2 = *param_1;
      param_1 = param_1 + 1;
      iVar3 = (bVar2 >> 6 & 1) +
              (bVar2 >> 4 & 1) +
              (bVar2 >> 3 & 1) + (bVar2 >> 1 & 1) + iVar3 + (bVar2 & 1) + (bVar2 >> 2 & 1) +
              (bVar2 >> 5 & 1) + (uint)(bVar2 >> 7);
    } while (pbVar1 != param_1);
  }
  return iVar3;
}

