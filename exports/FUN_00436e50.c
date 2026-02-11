
void __cdecl FUN_00436e50(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int local_20;
  undefined1 local_1c;
  
  local_20 = 0;
  puVar5 = param_1 + param_2 * 2 + -2;
  if (0 < param_2 / 2) {
    do {
      uVar1 = param_1[1];
      uVar2 = *param_1;
      local_20 = local_20 + 1;
      uVar3 = *puVar5;
      *(char *)((int)puVar5 + 3) = (char)((uint)uVar2 >> 0x18);
      uVar4 = puVar5[1];
      *(char *)((int)puVar5 + 7) = (char)((uint)uVar1 >> 0x18);
      *(char *)((int)puVar5 + 6) = (char)((uint)uVar1 >> 0x10);
      *(char *)((int)puVar5 + 5) = (char)((uint)uVar1 >> 8);
      *(char *)((int)puVar5 + 2) = (char)((uint)uVar2 >> 0x10);
      *(char *)(puVar5 + 1) = (char)uVar1;
      *(char *)((int)puVar5 + 1) = (char)((uint)uVar2 >> 8);
      *(char *)puVar5 = (char)uVar2;
      *(char *)((int)param_1 + 7) = (char)((uint)uVar4 >> 0x18);
      *(char *)((int)param_1 + 6) = (char)((uint)uVar4 >> 0x10);
      *(char *)((int)param_1 + 5) = (char)((uint)uVar4 >> 8);
      *(char *)(param_1 + 1) = (char)uVar4;
      local_1c = (undefined1)((uint)uVar3 >> 0x18);
      *(undefined1 *)((int)param_1 + 3) = local_1c;
      *(char *)((int)param_1 + 2) = (char)((uint)uVar3 >> 0x10);
      *(char *)((int)param_1 + 1) = (char)((uint)uVar3 >> 8);
      *(char *)param_1 = (char)uVar3;
      param_1 = param_1 + 2;
      puVar5 = puVar5 + -2;
    } while (local_20 != param_2 / 2);
  }
  return;
}

