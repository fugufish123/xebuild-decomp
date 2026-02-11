
void __cdecl FUN_00412110(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0x2fe8000;
  if (param_1 != 1) {
    iVar3 = 0x2fec000;
  }
  FUN_00433690(1,"copying anchor block %d to offset 0x%x\n");
  puVar1 = (undefined4 *)(DAT_00479ed8 + iVar3);
  *puVar1 = 0;
  puVar1[0x3ff] = 0;
  uVar2 = (uint)((int)puVar1 + (0x1000 - (int)((uint)(puVar1 + 1) & 0xfffffffc))) >> 2;
  puVar1 = (undefined4 *)((uint)(puVar1 + 1) & 0xfffffffc);
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  puVar4 = (undefined4 *)(iVar3 + DAT_00479ed8);
  *puVar4 = DAT_004c9164;
  iVar3 = (int)puVar4 - (int)((uint)(puVar4 + 1) & 0xfffffffc);
  puVar4[0x7f] = DAT_004c9360;
  puVar1 = (undefined4 *)((int)&DAT_004c9164 - iVar3);
  puVar4 = (undefined4 *)((uint)(puVar4 + 1) & 0xfffffffc);
  for (uVar2 = iVar3 + 0x200U >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}

