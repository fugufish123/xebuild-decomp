
void __cdecl FUN_004112f0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  iVar11 = DAT_00479efc;
  uVar1 = DAT_00479ef8;
  uVar2 = param_1 >> 0xe;
  if (uVar2 < DAT_00479ef8) {
    uVar9 = DAT_00479ef8 - uVar2;
    iVar8 = uVar2 - DAT_00479efc;
    uVar4 = (uint)((int)&DAT_004cb7c0 + iVar8 * 2) >> 1 & 1;
    uVar7 = uVar9;
    if ((uVar9 < 7) || (uVar7 = uVar4, uVar4 != 0)) {
      *(undefined2 *)((int)&DAT_004cb7c0 + iVar8 * 2) = 0xfe1f;
      uVar4 = uVar2 + 1;
      if (uVar7 != 1) {
        *(undefined2 *)((int)&DAT_004cb7c0 + (uVar4 - iVar11) * 2) = 0xfe1f;
        uVar4 = uVar2 + 2;
        if (uVar7 != 2) {
          *(undefined2 *)((int)&DAT_004cb7c0 + (uVar4 - iVar11) * 2) = 0xfe1f;
          uVar4 = uVar2 + 3;
          if (uVar7 != 3) {
            *(undefined2 *)((int)&DAT_004cb7c0 + (uVar4 - iVar11) * 2) = 0xfe1f;
            uVar4 = uVar2 + 4;
            if (uVar7 != 4) {
              *(undefined2 *)((int)&DAT_004cb7c0 + (uVar4 - iVar11) * 2) = 0xfe1f;
              uVar4 = uVar2 + 5;
              if (uVar7 == 6) {
                iVar6 = uVar4 - iVar11;
                uVar4 = uVar2 + 6;
                *(undefined2 *)((int)&DAT_004cb7c0 + iVar6 * 2) = 0xfe1f;
              }
            }
          }
        }
      }
      uVar2 = uVar4;
      uVar4 = uVar7;
      if (uVar9 == uVar7) goto LAB_0041141b;
    }
    iVar10 = uVar9 - uVar4;
    uVar7 = (iVar10 - 2U >> 1) + 1;
    iVar6 = uVar7 * 2;
    if (iVar10 != 1) {
      uVar9 = 0;
      do {
        *(undefined4 *)((int)&DAT_004cb7c0 + uVar9 * 4 + (uVar4 + iVar8) * 2) = 0xfe1ffe1f;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar7);
      uVar2 = uVar2 + iVar6;
      if (iVar10 == iVar6) goto LAB_0041141b;
    }
    *(undefined2 *)((int)&DAT_004cb7c0 + (uVar2 - iVar11) * 2) = 0xfe1f;
  }
LAB_0041141b:
  uVar2 = DAT_00479ea8;
  if (DAT_00479ef0 == 0) {
    uVar7 = (-(uint)((DAT_00479ea4 & 0x10000000) == 0) & 0xfffffffe) + 6;
    if ((5 < DAT_00479ea8) && (uVar7 = DAT_00479ee4 - uVar1, uVar7 == 0)) {
      return;
    }
    uVar4 = 1;
    if (uVar7 != 0) {
      uVar4 = uVar7;
    }
    uVar5 = (int)&DAT_004cb7c0 + uVar1 * 2 >> 1 & 1;
    uVar9 = uVar4;
    if ((uVar4 < 7) || (uVar9 = uVar5, uVar5 != 0)) {
      *(undefined2 *)((int)&DAT_004cb7c0 + uVar1 * 2) = 0xfb1f;
      if (uVar9 == 1) {
        iVar11 = 1;
      }
      else {
        *(undefined2 *)((int)&DAT_004cb7c0 + uVar1 * 2 + 2) = 0xfb1f;
        if (uVar9 == 2) {
          iVar11 = 2;
        }
        else {
          *(undefined2 *)((int)&DAT_004cb7c4 + uVar1 * 2) = 0xfb1f;
          if (uVar9 == 3) {
            iVar11 = 3;
          }
          else {
            *(undefined2 *)((int)&DAT_004cb7c4 + uVar1 * 2 + 2) = 0xfb1f;
            if (uVar9 == 4) {
              iVar11 = 4;
            }
            else {
              *(undefined2 *)((int)&DAT_004cb7c8 + uVar1 * 2) = 0xfb1f;
              if (uVar9 == 6) {
                *(undefined2 *)((int)&DAT_004cb7c8 + uVar1 * 2 + 2) = 0xfb1f;
                iVar11 = 6;
              }
              else {
                iVar11 = 5;
              }
            }
          }
        }
      }
      uVar5 = uVar9;
      if (uVar4 == uVar9) goto joined_r0x00411579;
    }
    else {
      iVar11 = 0;
    }
    uVar3 = ((uVar4 - uVar5) - 2 >> 1) + 1;
    iVar8 = uVar3 * 2;
    uVar9 = uVar7 - 1;
    if (uVar7 == 0) {
      uVar9 = 0;
    }
    if (uVar9 != uVar5) {
      uVar7 = 0;
      do {
        *(undefined4 *)((int)&DAT_004cb7c0 + uVar7 * 4 + (uVar5 + uVar1) * 2) = 0xfb1ffb1f;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar3);
      iVar11 = iVar11 + iVar8;
      if (uVar4 - uVar5 == iVar8) goto joined_r0x00411579;
    }
    *(undefined2 *)((int)&DAT_004cb7c0 + (uVar1 + iVar11) * 2) = 0xfb1f;
  }
joined_r0x00411579:
  if (uVar2 != 2) {
    return;
  }
  *(undefined1 *)(DAT_00479ed0 + 0x1a) = 3;
  *(undefined1 *)(DAT_00479ed0 + 0x1b) = 0x50;
  return;
}

