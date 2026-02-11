
void __cdecl FUN_004346c0(byte *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  time_t tVar7;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c [3];
  
  local_30 = param_2 & 0xfffffff0;
  uVar4 = param_2 & 0xf;
  if (DAT_00479ac0 == 0) {
    tVar7 = time((time_t *)0x0);
    srand((uint)tVar7);
    puVar2 = &local_2c;
    do {
      iVar6 = rand();
      puVar3 = (undefined4 *)((int)puVar2 + 1);
      *(char *)puVar2 = (char)iVar6;
      puVar2 = puVar3;
    } while (puVar3 != local_1c);
    FUN_004429d0((undefined4 *)&DAT_0050e880,0x10,(int)&local_2c);
    DAT_00479ac0 = 1;
  }
  memset(param_1,0,param_2);
  FUN_00442630((uint *)&DAT_0050e880,local_30,param_1,param_1);
  if (uVar4 != 0) {
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    FUN_00442630((uint *)&DAT_0050e880,0x10,(byte *)&local_2c,(byte *)&local_2c);
    pbVar5 = param_1 + local_30;
    if (uVar4 < 4) {
      if (uVar4 != 0) {
        *pbVar5 = (byte)local_2c;
        if ((param_2 & 2) != 0) {
          *(undefined2 *)(pbVar5 + (uVar4 - 2)) = *(undefined2 *)((int)&local_30 + uVar4 + 2);
        }
      }
    }
    else {
      *(undefined4 *)pbVar5 = local_2c;
      *(undefined4 *)(pbVar5 + (uVar4 - 4)) = *(undefined4 *)((int)&local_30 + uVar4);
      iVar6 = (int)pbVar5 - ((uint)(pbVar5 + 4) & 0xfffffffc);
      uVar4 = uVar4 + iVar6 & 0xfffffffc;
      if (3 < uVar4) {
        uVar1 = 0;
        do {
          *(undefined4 *)(((uint)(pbVar5 + 4) & 0xfffffffc) + uVar1) =
               *(undefined4 *)((int)&local_2c + (uVar1 - iVar6));
          uVar1 = uVar1 + 4;
        } while (uVar1 < uVar4);
      }
    }
  }
  return;
}

