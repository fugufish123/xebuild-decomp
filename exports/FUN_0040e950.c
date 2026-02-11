
undefined4 __fastcall FUN_0040e950(ushort param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  void *in_EAX;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ushort uVar11;
  uint local_30;
  
  if (DAT_00479ee8 < param_2) {
    return 0xffffffff;
  }
  if (param_2 == 0) {
    local_30 = 1;
LAB_0040e996:
    memcpy(DAT_00479ed8,in_EAX,param_2);
  }
  else {
    if ((0x3fff < param_2) && (local_30 = param_2 >> 0xe, (param_2 & 0x3fff) == 0))
    goto LAB_0040e996;
    local_30 = (param_2 >> 0xe) + 1;
    memcpy(DAT_00479ed8,in_EAX,param_2);
    memset((void *)(param_2 + (int)DAT_00479ed8),0,(param_2 + 0x3fff & 0xffffc000) - param_2);
  }
  iVar10 = 0x200;
  uVar8 = 0;
  do {
    uVar5 = uVar8;
    iVar7 = uVar5 << 9;
    bVar1 = (byte)(uVar5 >> 8) & 0xf;
    do {
      while( true ) {
        puVar3 = (undefined4 *)(DAT_00479ed0 + iVar7);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        if (DAT_00479ef0 == 0) break;
        iVar7 = iVar7 + 0x10;
        *(undefined1 *)puVar3 = 0xff;
        *(byte *)((int)puVar3 + 2) = *(byte *)((int)puVar3 + 2) & 0xf0 | bVar1;
        *(char *)((int)puVar3 + 1) = (char)uVar5;
        uVar2 = DAT_00479efc;
        if (iVar7 == iVar10) goto joined_r0x0040eaec;
      }
      iVar7 = iVar7 + 0x10;
      *(undefined1 *)((int)puVar3 + 5) = 0xff;
      *(byte *)((int)puVar3 + 1) = *(byte *)((int)puVar3 + 1) & 0xf0 | bVar1;
      *(char *)puVar3 = (char)uVar5;
      uVar2 = DAT_00479efc;
    } while (iVar7 != iVar10);
joined_r0x0040eaec:
    iVar10 = iVar10 + 0x200;
    uVar8 = uVar5 + 1;
    DAT_00479efc = uVar2;
  } while (uVar5 + 1 != local_30);
  uVar5 = uVar5 + 1;
  if (param_1 == 0xf1f1) {
    DAT_004cd840 = param_2;
    return 0;
  }
  uVar11 = param_1 << 8 | param_1 >> 8;
  if ((ushort)(param_1 - 1) < 0xfffe) {
    uVar4 = (int)&DAT_004cb7c0 + uVar2 * -2 >> 1 & 1;
    uVar8 = uVar5;
    if ((uVar5 < 7) || (uVar8 = uVar4, uVar4 != 0)) {
      *(ushort *)((int)&DAT_004cb7c0 + uVar2 * -2) = uVar11;
      if (uVar8 == 1) {
        iVar10 = 1;
      }
      else {
        *(ushort *)((int)&DAT_004cb7c0 + uVar2 * -2 + 2) = uVar11;
        if (uVar8 == 2) {
          iVar10 = 2;
        }
        else {
          *(ushort *)((int)&DAT_004cb7c4 + uVar2 * -2) = uVar11;
          if (uVar8 == 3) {
            iVar10 = 3;
          }
          else {
            *(ushort *)((int)&DAT_004cb7c4 + uVar2 * -2 + 2) = uVar11;
            if (uVar8 == 4) {
              iVar10 = 4;
            }
            else {
              *(ushort *)((int)&DAT_004cb7c8 + uVar2 * -2) = uVar11;
              if (uVar8 == 5) {
                iVar10 = 5;
              }
              else {
                iVar10 = 6;
                *(ushort *)((int)&DAT_004cb7c8 + uVar2 * -2 + 2) = uVar11;
              }
            }
          }
        }
      }
      uVar4 = uVar8;
      if (uVar5 == uVar8) goto joined_r0x0040ec02;
    }
    else {
      iVar10 = 0;
    }
    iVar9 = uVar5 - uVar4;
    uVar8 = (iVar9 - 2U >> 1) + 1;
    iVar7 = uVar8 * 2;
    if (iVar9 != 1) {
      uVar5 = 0;
      do {
        *(uint *)((int)&DAT_004cb7c0 + uVar5 * 4 + (uVar4 - uVar2) * 2) = CONCAT22(uVar11,uVar11);
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar8);
      iVar10 = iVar10 + iVar7;
      if (iVar7 == iVar9) goto joined_r0x0040ec02;
    }
    *(ushort *)((int)&DAT_004cb7c0 + (iVar10 - uVar2) * 2) = uVar11;
  }
  else {
    iVar7 = 1 - uVar2;
    sVar6 = (short)uVar2 * -0x100;
    iVar10 = iVar7 + local_30;
    do {
      sVar6 = sVar6 + 0x100;
      *(ushort *)(&DAT_004cb7be + iVar7 * 2) = ((ushort)iVar7 >> 8) + sVar6;
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar10);
  }
joined_r0x0040ec02:
  if (param_1 == 0xffff) {
    *(undefined2 *)((int)&DAT_004cb7c0 + (~uVar2 + local_30) * 2) = 0xff1f;
  }
  DAT_004cd840 = param_2;
  return 0;
}

