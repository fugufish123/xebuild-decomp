
void __cdecl FUN_00433610(char *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  
  if (param_1 != (char *)0x0) {
    strcpy(&DAT_004796a0,param_1);
    puVar4 = (uint *)&DAT_004796a0;
    do {
      puVar3 = puVar4;
      uVar1 = *puVar3 + 0xfefefeff & ~*puVar3;
      uVar2 = uVar1 & 0x80808080;
      puVar4 = puVar3 + 1;
    } while (uVar2 == 0);
    bVar6 = (uVar1 & 0x8080) == 0;
    if (bVar6) {
      uVar2 = uVar2 >> 0x10;
    }
    if (bVar6) {
      puVar4 = (uint *)((int)puVar3 + 6);
    }
    puVar5 = (undefined1 *)((int)puVar4 + (-0x4796a3 - (uint)CARRY1((byte)uVar2,(byte)uVar2)));
    *(undefined4 *)(&DAT_004796a0 + (int)puVar5) = 0x676f6c2e;
    puVar5[0x4796a4] = 0;
    remove(&DAT_004796a0);
    return;
  }
  return;
}

