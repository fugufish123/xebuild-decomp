
void __cdecl
FUN_0041c370(undefined4 param_1,int param_2,uint *param_3,int param_4,undefined4 *param_5)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  void *in_stack_0000002c;
  void *in_stack_0000003c;
  int in_stack_00000044;
  int in_stack_00000064;
  int in_stack_00000068;
  undefined1 *puVar5;
  size_t sVar6;
  
  uVar1 = FUN_00420ab0((undefined1 *)(param_4 + 6));
  uVar2 = (uint)uVar1;
  *(undefined4 *)(param_2 + 0x10) = DAT_0044a694;
  *(undefined4 *)(param_2 + 0x14) = DAT_0044a698;
  *(undefined4 *)(param_2 + 0x18) = DAT_0044a69c;
  *(undefined4 *)(param_2 + 0x1c) = DAT_0044a6a0;
  puVar4 = &DAT_0047a11c;
  if ((uVar1 & 1) != 0) {
    puVar4 = &DAT_00479560;
  }
  if ((uVar1 & 0x800) != 0) {
    FUN_00433690(1,"\t**dual CB flag detected!**\n");
  }
  if ((uVar2 & 0x1000) == 0) {
    sVar6 = 0;
    puVar5 = (undefined1 *)0x0;
  }
  else {
    FUN_00433690(1,"\t**15572+ CBB crypto method detected!**\n");
    sVar6 = 0x10;
    puVar5 = &stack0xffffffd4;
  }
  FUN_00434110(param_3,0x10,(void *)(param_2 + 0x10),0x10,puVar4,0x10,puVar5,sVar6,param_5,0x10);
  if (in_stack_00000044 == 0) {
    *(undefined2 *)(param_2 + 0x20) = DAT_00479570;
    *(undefined1 *)(param_2 + 0x22) = DAT_00479572;
    *(undefined1 *)(param_2 + 0x23) = DAT_00479f14;
    if ((uVar1 & 1) == 0) {
      FUN_00434110((uint *)&DAT_0047a11c,0x10,in_stack_0000003c,0x10,(void *)(param_2 + 0x20),0x10,
                   in_stack_0000002c,0x10,(undefined4 *)(param_2 + 0x30),0x10);
    }
    else {
      FUN_00433690(1,"\t** CBB crypto method set to work with mfg CBA!**\n");
    }
  }
  else {
    DAT_00479572 = 0;
    DAT_00479570 = 0;
    *(undefined4 *)(param_2 + 0x20) = 0;
    uVar3 = param_2 + 0x24U & 0xfffffffc;
    *(undefined4 *)(param_2 + 0x3c) = 0;
    uVar2 = 0;
    do {
      *(undefined4 *)(uVar3 + uVar2) = 0;
      uVar2 = uVar2 + 4;
    } while (uVar2 < ((param_2 - uVar3) + 0x40 & 0xfffffffc));
  }
  FUN_004345b0(in_stack_00000064,0x10,(byte *)(param_2 + 0x20),in_stack_00000068 - 0x20);
  return;
}

