
undefined4 __cdecl FUN_00420470(char *param_1,int param_2,uint param_3)

{
  short sVar1;
  uint *puVar2;
  uint *puVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *_Memory;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined4 uStack_118;
  uint local_114;
  char local_110 [4];
  undefined4 local_10c [65];
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    local_114 = 0x46444e53;
    local_110[0] = '\0';
    local_110[1] = '\0';
    local_110[2] = '\0';
    local_110[3] = '\0';
    puVar10 = local_10c;
    for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    strcpy(local_110,param_1);
    puVar3 = &local_114;
    do {
      puVar2 = puVar3;
      uVar8 = *puVar2 + 0xfefefeff & ~*puVar2;
      uVar9 = uVar8 & 0x80808080;
      puVar3 = puVar2 + 1;
    } while (uVar9 == 0);
    bVar11 = (uVar8 & 0x8080) == 0;
    if (bVar11) {
      uVar9 = uVar9 >> 0x10;
    }
    if (bVar11) {
      puVar3 = (uint *)((int)puVar2 + 6);
    }
    pcVar4 = (char *)((int)puVar3 + ((-3 - (uint)CARRY1((byte)uVar9,(byte)uVar9)) - (int)&local_114)
                     );
    pcVar5 = (char *)((int)&local_114 + (int)pcVar4);
    pcVar5[0] = '\n';
    pcVar5[1] = '\0';
    pcVar4 = pcVar4 + 1;
    pcVar5 = (char *)send(DAT_0044a6c0,(char *)&local_114,(int)pcVar4,0);
    if (pcVar4 == pcVar5) {
      iVar7 = FUN_00433600();
      iVar7 = FUN_0041f1a0(param_2,param_3,(uint)(iVar7 != 0));
      if ((iVar7 != 0) && (_Memory = FUN_0041e800(), _Memory != (undefined *)0x0)) {
        if ((uStack_118 == 2) && (sVar1 = FUN_00420ab0(_Memory), sVar1 == 0x4f4b)) {
          if (_Memory == &DAT_00479578) {
            return 1;
          }
          uVar6 = 1;
        }
        else {
          uVar6 = 0;
          if (_Memory == &DAT_00479578) {
            return 0;
          }
        }
        free(_Memory);
        return uVar6;
      }
    }
  }
  return 0;
}

