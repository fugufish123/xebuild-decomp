
bool __cdecl FUN_00435530(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int local_31c;
  int local_318;
  undefined4 local_21c;
  undefined4 local_218;
  
  uVar1 = *param_4;
  if ((uVar1 >> 8 & 0xff00) + (uVar1 & 0xff00) * 0x100 + (uVar1 >> 0x18) + uVar1 * 0x1000000 == 0x20
     ) {
    uVar1 = param_4[1];
    iVar8 = (uVar1 & 0xff00) * 0x100 + (uVar1 >> 0x18) + uVar1 * 0x1000000 + (uVar1 >> 8 & 0xff00);
    if ((iVar8 == 3) || (iVar8 == 0x10001)) {
      puVar7 = param_4 + 4;
      FUN_00435020(param_1,param_2,param_3);
      iVar4 = FUN_00438620((int)param_1,(int)puVar7,0x20);
      if (iVar4 == -1) {
        FUN_00436df0(&local_21c,0x40);
        FUN_00436df0(&local_31c,0x20);
        uVar9 = iVar8 - 1;
        local_21c = 0;
        local_218 = 0x2000000;
        uVar1 = ((iVar8 != 0) - 1) * 0x800;
        uVar2 = (uVar9 >> 0x15) * 0x1000000;
        uVar10 = (uVar1 >> 0x18) + uVar2;
        uVar3 = ((uVar1 | uVar9 >> 0x15) & 0xff00) * 0x100;
        uVar5 = uVar3 + uVar10;
        uVar6 = (uVar1 & 0xff0000) >> 8;
        local_31c = uVar5 + uVar6;
        local_318 = (uVar9 >> 0xd & 0xff) + (uVar9 * 8 & 0xff00) + (uVar9 & 0x1f) * 0x80000 +
                    (uint)CARRY4(uVar1 >> 0x18,uVar2) + (uint)CARRY4(uVar3,uVar10) +
                    (uint)CARRY4(uVar5,uVar6);
        iVar8 = FUN_004380f0(&local_31c,(undefined1 *)&local_21c,(int)&local_31c,(int)puVar7,0x20);
        if (iVar8 == 0) {
          return false;
        }
        FUN_004382c0(&local_21c,(undefined1 *)&local_31c,(int)param_1,0x20);
        iVar8 = FUN_00438460(&local_21c,(int)puVar7,(int)param_1,(undefined1 *)0x40,0x20);
        return iVar8 != 0;
      }
    }
  }
  return false;
}

