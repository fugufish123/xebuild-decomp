
int __cdecl FUN_0040c860(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = DAT_0046f190;
  if (DAT_0046f190 != 0) {
    iVar4 = 0;
    if (*param_2 != -1) {
      iVar2 = FUN_004223b0((char *)(*param_2 * 0x40 + DAT_0046f1a4),0x40);
      if (iVar2 == 0) {
        puVar3 = (undefined4 *)(*param_2 * 0x40 + DAT_0046f1a4);
        *param_1 = *puVar3;
        param_1[1] = puVar3[1];
        param_1[2] = puVar3[2];
        param_1[3] = puVar3[3];
        param_1[4] = puVar3[4];
        param_1[5] = puVar3[5];
        param_1[6] = puVar3[6];
        param_1[7] = puVar3[7];
        param_1[8] = puVar3[8];
        param_1[9] = puVar3[9];
        uVar1 = *(uint *)(*param_2 * 0x40 + DAT_0046f1a4 + 0x34);
        param_1[10] = (uVar1 >> 8 & 0xff00) +
                      (uVar1 & 0xff00) * 0x100 + (uVar1 >> 0x18) + uVar1 * 0x1000000;
        *param_2 = *param_2 + 1;
        return 1;
      }
      *param_2 = -1;
    }
  }
  return iVar4;
}

