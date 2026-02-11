
void FUN_0042c620(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  char *_Str1;
  uint uVar7;
  uint uVar8;
  
  iVar1 = FUN_004104f0();
  if (1 < DAT_004c4f9c) {
    _Str1 = &DAT_004bc17c;
    uVar7 = 0;
    uVar8 = 1;
    uVar3 = DAT_004c4f9c;
    do {
      while ((uVar4 = *(uint *)(_Str1 + 0x404), uVar4 != 0x17 &&
             ((0x19 < uVar4 || ((0x3018600U >> (uVar4 & 0x1f) & 1) == 0))))) {
LAB_0042c660:
        uVar8 = uVar8 + 1;
        _Str1 = _Str1 + 0x42c;
        if (uVar3 <= uVar8) {
          return;
        }
      }
      if (*(uint *)(_Str1 + 0x408) != 0xffffffff) {
        uVar7 = *(uint *)(_Str1 + 0x408);
      }
      iVar2 = _strnicmp(_Str1,"none",4);
      if ((iVar2 != 0) || (*(int *)(_Str1 + 0x400) != 0)) {
        if (uVar4 == 9) {
          uVar7 = FUN_00410460();
          goto LAB_0042c72c;
        }
        if (uVar4 == 0x17) {
          iVar2 = FUN_00410460();
          iVar5 = FUN_00410490();
          uVar7 = iVar5 + iVar2 + 0x60;
          if (DAT_00479eb4 == 0) {
            uVar7 = iVar5 + iVar2 + 0x10;
          }
        }
        else if (uVar4 == 0x19) {
          uVar3 = *(uint *)(_Str1 + 0x408);
          uVar4 = FUN_004104d0();
          if (uVar3 < uVar4) {
            FUN_00433690(0,
                         "***** WARNING: skipping xell, there doesn\'t appear to be enough room!\n")
            ;
            uVar3 = DAT_004c4f9c;
            goto LAB_0042c660;
          }
          goto LAB_0042c72c;
        }
        if ((uVar4 == 10) || (uVar4 == 0x10)) {
          if (uVar4 != 10) {
            if (uVar4 == 0x10) {
              if (0 < DAT_004c4f98) {
                iVar2 = 0;
                piVar6 = &DAT_004bc580;
                if (DAT_004bc154 != 0xf) {
                  do {
                    iVar2 = iVar2 + 1;
                    if (iVar2 == DAT_004c4f98) goto LAB_0042c7d6;
                    iVar5 = *piVar6;
                    piVar6 = piVar6 + 0x10b;
                  } while (iVar5 != 0xf);
                  goto LAB_0042c7d8;
                }
              }
              goto LAB_0042c7d6;
            }
            if (uVar4 == 0x18) goto LAB_0042c6eb;
            goto LAB_0042c759;
          }
          if (DAT_004c4f98 < 1) {
LAB_0042c7d6:
            iVar2 = 0;
          }
          else {
            iVar2 = 0;
            piVar6 = &DAT_004bc580;
            if (DAT_004bc154 == 9) goto LAB_0042c7d6;
            do {
              iVar2 = iVar2 + 1;
              if (iVar2 == DAT_004c4f98) goto LAB_0042c7d6;
              iVar5 = *piVar6;
              piVar6 = piVar6 + 0x10b;
            } while (iVar5 != 9);
          }
LAB_0042c7d8:
          FUN_00433690(1,"adding %s at raw offset 0x%08x len 0x%x (end 0x%x, rest in fs)\n");
          uVar3 = *(int *)(_Str1 + 0x410) - (&DAT_004bc174)[iVar2 * 0x10b];
LAB_0042c777:
          FUN_00410500(uVar7,*(void **)(_Str1 + 0x40c),uVar3,0,
                       (-(ushort)(iVar1 == 0) & 0x2e0a) - 0xe0f,1);
        }
        else {
          if (uVar4 != 0x18) {
LAB_0042c72c:
            FUN_00433690(1,"adding %s at raw offset 0x%08x len 0x%x (end 0x%x)\n");
LAB_0042c759:
            uVar3 = *(uint *)(_Str1 + 0x410);
            goto LAB_0042c777;
          }
LAB_0042c6eb:
          if ((DAT_00479eb4 != 0) || (DAT_00479ea8 - 4U < 2)) goto LAB_0042c72c;
        }
        uVar7 = uVar7 + *(int *)(_Str1 + 0x410);
      }
      uVar8 = uVar8 + 1;
      _Str1 = _Str1 + 0x42c;
      uVar3 = DAT_004c4f9c;
    } while (uVar8 < DAT_004c4f9c);
  }
  return;
}

