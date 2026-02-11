
void __cdecl FUN_00411600(undefined4 *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = &DAT_0046f9e0;
  for (iVar2 = 0x400; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xffffffff;
    puVar3 = puVar3 + 1;
  }
  puVar3 = &DAT_0046f9e0;
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00433690(1,"adding smc config to offset 0x%08x, len 0x%x\n");
  uVar1 = 0xf1f1;
  if (DAT_00479ef0 == 0) {
    uVar1 = 0x1ffb;
  }
  FUN_0040ecc0(uVar1,&DAT_0046f9e0);
  return;
}

