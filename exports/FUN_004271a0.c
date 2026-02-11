
undefined4 __cdecl FUN_004271a0(char *param_1)

{
  char cVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  bool bVar9;
  uint local_21c [131];
  
  sVar2 = strlen(param_1);
  if (-1 < (int)sVar2) {
    iVar5 = 0;
    iVar8 = 0;
    do {
      while ((cVar1 = param_1[iVar8], cVar1 == ';' || (cVar1 == '\0'))) {
        *(undefined1 *)((int)local_21c + iVar5) = 0;
        puVar7 = local_21c;
        do {
          puVar6 = puVar7;
          uVar3 = *puVar6 + 0xfefefeff & ~*puVar6;
          uVar4 = uVar3 & 0x80808080;
          puVar7 = puVar6 + 1;
        } while (uVar4 == 0);
        bVar9 = (uVar3 & 0x8080) == 0;
        if (bVar9) {
          uVar4 = uVar4 >> 0x10;
        }
        if (bVar9) {
          puVar7 = (uint *)((int)puVar6 + 6);
        }
        if (((char *)0x4 <
             (char *)((int)puVar7 + ((-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4)) - (int)local_21c))
            ) && (iVar5 = FUN_00427000((char *)local_21c), iVar5 == 0)) {
          return 0;
        }
        iVar5 = 0;
        iVar8 = iVar8 + 1;
        if ((int)sVar2 < iVar8) {
          return 1;
        }
      }
      iVar8 = iVar8 + 1;
      *(char *)((int)local_21c + iVar5) = cVar1;
      iVar5 = iVar5 + 1;
    } while (iVar8 <= (int)sVar2);
  }
  return 1;
}

