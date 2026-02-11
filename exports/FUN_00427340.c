
undefined4 FUN_00427340(void)

{
  char cVar1;
  char *_Str;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  char *_Str2;
  bool bVar10;
  int local_620;
  uint local_61c [128];
  char local_41c [1036];
  
  _Str = FUN_0040aa10("addon");
  if ((_Str != (char *)0x0) && (sVar2 = strlen(_Str), -1 < (int)sVar2)) {
    local_620 = 0;
    iVar8 = 0;
LAB_00427398:
    do {
      cVar1 = _Str[iVar8];
      if ((cVar1 == ':') || (cVar1 == '\0')) {
        *(undefined1 *)((int)local_61c + local_620) = 0;
        puVar7 = local_61c;
        do {
          puVar6 = puVar7;
          uVar3 = *puVar6 + 0xfefefeff & ~*puVar6;
          uVar4 = uVar3 & 0x80808080;
          puVar7 = puVar6 + 1;
        } while (uVar4 == 0);
        bVar10 = (uVar3 & 0x8080) == 0;
        if (bVar10) {
          uVar4 = uVar4 >> 0x10;
        }
        if (bVar10) {
          puVar7 = (uint *)((int)puVar6 + 6);
        }
        local_620 = 0;
        if (4 < (int)puVar7 + ((-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4)) - (int)local_61c)) {
          if (DAT_004c4f94 < 0x10) {
            sprintf(local_41c,"%s.bin",local_61c);
            if (0 < DAT_004c4f94) {
              _Str2 = &DAT_004c0c94;
              iVar9 = 0;
              do {
                iVar5 = _stricmp(local_41c,_Str2);
                if (iVar5 == 0) {
                  iVar8 = iVar8 + 1;
                  FUN_00433690(1,
                               "***** WARNING: %s was provided both on command line and in ini, filtered duplicate!\n"
                              );
                  local_620 = 0;
                  if ((int)sVar2 < iVar8) {
                    return 1;
                  }
                  goto LAB_00427398;
                }
                iVar9 = iVar9 + 1;
                _Str2 = _Str2 + 0x42c;
              } while (iVar9 < DAT_004c4f94);
            }
            strcpy(&DAT_004c0c94 + DAT_004c4f94 * 0x42c,local_41c);
            DAT_004c4f94 = DAT_004c4f94 + 1;
            local_620 = 0;
          }
          else {
            local_620 = 0;
            FUN_00433690(0,
                         "***** WARNING: exceeded total number of optional patches with ini  %s!\n")
            ;
          }
        }
      }
      else {
        *(char *)((int)local_61c + local_620) = cVar1;
        local_620 = local_620 + 1;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 <= (int)sVar2);
  }
  return 1;
}

