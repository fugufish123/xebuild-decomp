
bool __cdecl
FUN_00402410(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  char *pcVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined3 extraout_var;
  int iVar5;
  uint uVar6;
  bool bVar7;
  int iStack_44;
  uint local_40 [12];
  
  if (param_2 == 0) {
    bVar7 = false;
  }
  else {
    iVar5 = 0;
    uVar6 = 0;
    do {
      pcVar1 = (char *)(param_1 + uVar6);
      if ((((*pcVar1 != 'D') || (*(char *)(param_1 + 1 + uVar6) != 'A')) ||
          (*(char *)(param_1 + 2 + uVar6) != 'E')) || (*(char *)(param_1 + 3 + uVar6) != 'P')) {
        FUN_00433690(1,"\n******* ERROR: dae segment does not have the expected header!\n");
        break;
      }
      iVar5 = iVar5 + 1;
      uVar2 = CONCAT11(*(undefined1 *)(param_1 + 4 + uVar6),*(undefined1 *)(param_1 + 5 + uVar6));
      uVar3 = (uint)uVar2;
      if ((DAT_0047a144 != (uint *)0x0) && (0x11f < uVar2)) {
        local_40[0] = 0;
        local_40[1] = 0;
        local_40[2] = 0;
        local_40[3] = 0;
        FUN_00434110(local_40,0x10,pcVar1,0x20,(void *)0x0,0,(void *)0x0,0,local_40 + 4,0x14);
        bVar7 = FUN_00435b00(&stack0xfffffff8,(uint *)(pcVar1 + 0x20),DAT_0047a144);
        if (CONCAT31(extraout_var,bVar7) == 0) {
          FUN_00433690(1,"\nsig %d FAIL! ");
        }
        else {
          FUN_00433690(1,"sig %d good! ");
        }
      }
      FUN_00402210(pcVar1,uVar3,1);
      iVar4 = FUN_0041db70((int)pcVar1,uVar3,0xc,0x14,0x150,(undefined4 *)0x0);
      if (iVar4 == 0) {
        iVar5 = 0;
        FUN_00433690(1,"\n******* ERROR: dae hash incorrect, could not decrypt!\n");
        uVar6 = param_5 + 1;
      }
      uVar6 = uVar6 + uVar3;
      param_1 = iStack_44;
    } while (uVar6 < param_5);
    bVar7 = iVar5 == 2;
  }
  return bVar7;
}

