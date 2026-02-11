
void __cdecl FUN_0040fbb0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar1 = 0;
  uVar3 = 0;
  uVar2 = 0;
  do {
    if ((uVar3 & 0x1f) == 0) {
      puVar4 = param_1;
      if (uVar3 == 0x1000) {
        puVar4 = param_2;
      }
      param_1 = puVar4 + 1;
      uVar2 = ~*puVar4;
    }
    uVar1 = uVar1 ^ uVar2 & 1;
    if ((uVar1 & 1) != 0) {
      uVar1 = uVar1 ^ 0x6954559;
    }
    uVar3 = uVar3 + 1;
    uVar1 = uVar1 >> 1;
    uVar2 = uVar2 >> 1;
  } while (uVar3 != 0x1066);
  uVar1 = ~uVar1;
  *(byte *)(param_2 + 3) = ((byte)param_2[3] & 0x3f) + (char)(uVar1 << 6);
  *(char *)((int)param_2 + 0xd) = (char)(uVar1 >> 2);
  *(char *)((int)param_2 + 0xf) = (char)(uVar1 >> 0x12);
  *(char *)((int)param_2 + 0xe) = (char)(uVar1 >> 10);
  return;
}

