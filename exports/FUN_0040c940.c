
bool __cdecl FUN_0040c940(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  
  if (DAT_0046f190 == 0) {
    return false;
  }
  *param_2 = 0;
  iVar2 = FUN_004223b0(DAT_0046f1a4,0x40);
  if (iVar2 == 0) {
    pcVar3 = DAT_0046f1a4 + *param_2 * 0x40;
    *param_1 = *(undefined4 *)pcVar3;
    param_1[1] = *(undefined4 *)(pcVar3 + 4);
    param_1[2] = *(undefined4 *)(pcVar3 + 8);
    param_1[3] = *(undefined4 *)(pcVar3 + 0xc);
    param_1[4] = *(undefined4 *)(pcVar3 + 0x10);
    param_1[5] = *(undefined4 *)(pcVar3 + 0x14);
    param_1[6] = *(undefined4 *)(pcVar3 + 0x18);
    param_1[7] = *(undefined4 *)(pcVar3 + 0x1c);
    param_1[8] = *(undefined4 *)(pcVar3 + 0x20);
    param_1[9] = *(undefined4 *)(pcVar3 + 0x24);
    uVar1 = *(uint *)(DAT_0046f1a4 + *param_2 * 0x40 + 0x34);
    param_1[10] = (uVar1 >> 8 & 0xff00) +
                  (uVar1 & 0xff00) * 0x100 + (uVar1 >> 0x18) + uVar1 * 0x1000000;
    *param_2 = *param_2 + 1;
  }
  else {
    *param_2 = -1;
  }
  return iVar2 == 0;
}

