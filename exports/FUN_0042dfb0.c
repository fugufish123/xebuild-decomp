
undefined4 __cdecl FUN_0042dfb0(undefined4 param_1,ushort param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  char *_Str1;
  
  if (1 < DAT_004c4f9c) {
    _Str1 = &DAT_004bc17c;
    uVar5 = 1;
    do {
      iVar2 = _strnicmp(_Str1,"none",4);
      if ((iVar2 != 0) || (*(int *)(_Str1 + 0x400) != 0)) {
        if (*(int *)(_Str1 + 0x404) == 9) {
          FUN_00433690(1,"encoding %s size 0x%x\n");
          if (DAT_004c4f98 < 1) {
LAB_0042e115:
            iVar2 = 0;
          }
          else {
            iVar2 = 0;
            piVar3 = &DAT_004bc580;
            if (DAT_004bc154 == 10) goto LAB_0042e115;
            do {
              iVar2 = iVar2 + 1;
              if (iVar2 == DAT_004c4f98) goto LAB_0042e115;
              iVar1 = *piVar3;
              piVar3 = piVar3 + 0x10b;
            } while (iVar1 != 10);
          }
          uVar4 = FUN_00410490();
          FUN_0041ca20((int)_Str1,(&DAT_004bc160)[iVar2 * 0x10b],(uint)param_2,0,uVar4);
        }
        else {
          if (*(int *)(_Str1 + 0x404) != 10) goto LAB_0042e09d;
          FUN_00433690(1,"encoding %s size 0x%x\n");
          if (DAT_004c4f98 < 1) {
LAB_0042e06d:
            iVar2 = 0x422c4;
          }
          else {
            iVar2 = 0;
            piVar3 = &DAT_004bc580;
            if (DAT_004bc154 == 9) goto LAB_0042e06d;
            do {
              iVar2 = iVar2 + 1;
              if (iVar2 == DAT_004c4f98) goto LAB_0042e06d;
              iVar1 = *piVar3;
              piVar3 = piVar3 + 0x10b;
            } while (iVar1 != 9);
            iVar2 = iVar2 * 0x42c + 0x422c4;
          }
          FUN_0041ce50(*(int *)(_Str1 + 0x40c),(uint *)((int)&DAT_00479ea0 + iVar2),
                       (undefined4 *)(_Str1 + 0x414),*(int *)(_Str1 + 0x410));
        }
      }
LAB_0042e09d:
      uVar5 = uVar5 + 1;
      _Str1 = _Str1 + 0x42c;
    } while (uVar5 < DAT_004c4f9c);
  }
  return 0;
}

