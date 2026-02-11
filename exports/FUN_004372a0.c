
void __cdecl
FUN_004372a0(uint *param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  uint *puVar25;
  bool bVar26;
  bool bVar27;
  uint *in_stack_fffffc24;
  undefined4 in_stack_fffffc28;
  uint local_3d0;
  int local_3cc;
  uint local_3c4;
  uint local_33c;
  uint local_338;
  uint local_334;
  uint local_330;
  int local_32c;
  int local_328;
  int local_31c;
  int local_318;
  int local_24c;
  int local_248;
  int local_244;
  int local_240;
  uint local_23c;
  int local_238;
  uint local_234 [66];
  uint auStack_12c [71];
  
  puVar24 = local_234 + 2;
  for (iVar12 = 0x42; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar24 = 0;
    puVar24 = puVar24 + 1;
  }
  puVar24 = auStack_12c + 2;
  for (iVar12 = 0x42; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar24 = 0;
    puVar24 = puVar24 + 1;
  }
  uVar11 = param_1[1];
  uVar1 = *param_1;
  uVar22 = (uVar11 >> 0x18) + uVar11 * 0x1000000;
  uVar19 = (uVar11 & 0xff00) * 0x100;
  uVar23 = uVar22 + uVar19;
  uVar13 = uVar11 >> 8 & 0xff00;
  uVar5 = uVar13 + uVar23;
  uVar3 = (ulonglong)uVar5 * (ulonglong)param_4;
  local_318 = (int)(uVar3 >> 0x20);
  local_31c = (int)uVar3;
  if (param_7 != 0) {
    local_328 = 0;
    do {
      uVar18 = *(uint *)(param_2 + local_328 * 8);
      uVar17 = *(uint *)(param_2 + 4 + local_328 * 8);
      uVar14 = (uVar17 >> 0x18) + uVar17 * 0x1000000;
      uVar6 = (uVar17 & 0xff00) * 0x100;
      uVar15 = uVar14 + uVar6;
      uVar7 = uVar17 >> 8 & 0xff00;
      uVar8 = uVar15 + uVar7;
      local_32c = 0;
      local_33c = 0;
      local_338 = 0;
      local_334 = 0;
      local_330 = 0;
      lVar4 = (ulonglong)uVar8 * (uVar3 & 0xffffffff);
      local_3d0 = (uint)((ulonglong)lVar4 >> 0x20);
      iVar12 = local_3d0 +
               local_31c *
               (uVar18 * 0x1000000 + (uVar18 & 0xff00) * 0x100 + (uVar18 >> 8 & 0xff00) +
                (uVar18 >> 0x18) + (uint)CARRY4(uVar17 >> 0x18,uVar17 * 0x1000000) +
                (uint)CARRY4(uVar14,uVar6) + (uint)CARRY4(uVar15,uVar7)) +
               (local_318 +
               param_4 * (uVar1 * 0x1000000 + (uVar1 & 0xff00) * 0x100 + (uVar1 >> 8 & 0xff00) +
                          (uVar1 >> 0x18) + (uint)CARRY4(uVar11 >> 0x18,uVar11 * 0x1000000) +
                          (uint)CARRY4(uVar22,uVar19) + (uint)CARRY4(uVar13,uVar23)) +
               param_5 * uVar5) * uVar8;
      uVar8 = (uint)lVar4;
      bVar26 = local_234[4] < auStack_12c[4];
      uVar6 = local_234[4] - auStack_12c[4];
      iVar2 = local_234[5] - auStack_12c[5];
      lVar4 = (ulonglong)uVar6 * (ulonglong)param_4;
      uVar7 = (uint)lVar4;
      while( true ) {
        uVar14 = param_1[local_32c * 2 + 1];
        uVar15 = param_1[local_32c * 2];
        uVar9 = (uVar14 >> 0x18) + uVar14 * 0x1000000;
        uVar20 = (uVar14 & 0xff00) * 0x100;
        uVar10 = uVar9 + uVar20;
        uVar16 = uVar14 >> 8 & 0xff00;
        local_244 = uVar10 + uVar16;
        local_240 = uVar15 * 0x1000000 + (uVar15 & 0xff00) * 0x100 + (uVar15 >> 8 & 0xff00) +
                    (uVar15 >> 0x18) + (uint)CARRY4(uVar14 >> 0x18,uVar14 * 0x1000000) +
                    (uint)CARRY4(uVar9,uVar20) + (uint)CARRY4(uVar10,uVar16);
        uVar14 = (uVar17 >> 0x18) + uVar17 * 0x1000000;
        uVar10 = (uVar17 & 0xff00) * 0x100;
        uVar15 = uVar14 + uVar10;
        uVar9 = uVar17 >> 8 & 0xff00;
        local_24c = uVar15 + uVar9;
        local_248 = uVar18 * 0x1000000 + (uVar18 & 0xff00) * 0x100 + (uVar18 >> 8 & 0xff00) +
                    (uVar18 >> 0x18) + (uint)CARRY4(uVar17 >> 0x18,uVar17 * 0x1000000) +
                    (uint)CARRY4(uVar14,uVar10) + (uint)CARRY4(uVar15,uVar9);
        iVar21 = local_32c + 1;
        FUN_00440e20(&local_23c,&local_24c,&local_244,2,in_stack_fffffc24,in_stack_fffffc28,
                     local_244);
        uVar17 = local_234[iVar21 * 2 + 2];
        uVar14 = local_234[iVar21 * 2 + 3];
        uVar15 = uVar17 + local_23c;
        local_3d0 = local_234[1];
        uVar9 = uVar14 + local_238 + (uint)CARRY4(uVar17,local_23c);
        uVar18 = local_234[0];
        if ((uVar9 <= uVar14) && ((uVar9 < uVar14 || (uVar15 < uVar17)))) {
          uVar18 = local_234[0] + 1;
          local_3d0 = local_234[1] + (0xfffffffe < local_234[0]);
        }
        uVar17 = uVar9 + local_330 + (uint)CARRY4(uVar15,local_334);
        if ((uVar17 <= local_330) && ((uVar17 < local_330 || (uVar15 + local_334 < local_334)))) {
          bVar27 = 0xfffffffe < uVar18;
          uVar18 = uVar18 + 1;
          local_3d0 = local_3d0 + bVar27;
        }
        local_234[iVar21 * 2] = uVar15 + local_334;
        local_234[iVar21 * 2 + 1] = uVar17;
        uVar17 = *(uint *)(param_6 + -4 + iVar21 * 8);
        uVar14 = *(uint *)(param_6 + -8 + iVar21 * 8);
        uVar15 = (uVar17 >> 0x18) + uVar17 * 0x1000000;
        uVar16 = (uVar17 & 0xff00) * 0x100;
        uVar9 = uVar15 + uVar16;
        uVar10 = uVar17 >> 8 & 0xff00;
        local_244 = uVar9 + uVar10;
        local_240 = uVar14 * 0x1000000 + (uVar14 & 0xff00) * 0x100 + (uVar14 >> 8 & 0xff00) +
                    (uVar14 >> 0x18) + (uint)CARRY4(uVar17 >> 0x18,uVar17 * 0x1000000) +
                    (uint)CARRY4(uVar15,uVar16) + (uint)CARRY4(uVar9,uVar10);
        local_24c = uVar7 + uVar8;
        local_248 = (int)((ulonglong)lVar4 >> 0x20) +
                    param_4 * (iVar2 - (uint)bVar26) + param_5 * uVar6 + iVar12 +
                    (uint)CARRY4(uVar7,uVar8);
        local_334 = uVar18;
        FUN_00440e20(&local_23c,&local_24c,&local_244,2,in_stack_fffffc24,in_stack_fffffc28,uVar18);
        uVar18 = auStack_12c[iVar21 * 2 + 2];
        uVar17 = auStack_12c[iVar21 * 2 + 3];
        uVar9 = uVar18 + local_23c;
        uVar10 = uVar17 + local_238 + (uint)CARRY4(uVar18,local_23c);
        uVar14 = local_234[0];
        uVar15 = local_234[1];
        if ((uVar10 <= uVar17) && ((uVar10 < uVar17 || (uVar9 < uVar18)))) {
          uVar14 = local_234[0] + 1;
          uVar15 = local_234[1] + (0xfffffffe < local_234[0]);
        }
        uVar18 = uVar10 + local_338 + (uint)CARRY4(uVar9,local_33c);
        if ((uVar18 <= local_338) && ((uVar18 < local_338 || (uVar9 + local_33c < local_33c)))) {
          bVar27 = 0xfffffffe < uVar14;
          uVar14 = uVar14 + 1;
          uVar15 = uVar15 + bVar27;
        }
        auStack_12c[iVar21 * 2] = uVar9 + local_33c;
        auStack_12c[iVar21 * 2 + 1] = uVar18;
        if (param_7 == iVar21) break;
        uVar18 = *(uint *)(param_2 + local_328 * 8);
        uVar17 = *(uint *)(param_2 + 4 + local_328 * 8);
        local_330 = local_3d0;
        local_33c = uVar14;
        local_338 = uVar15;
        local_32c = iVar21;
      }
      local_328 = local_328 + 1;
      auStack_12c[iVar21 * 2 + 2] = uVar14;
      auStack_12c[iVar21 * 2 + 3] = uVar15;
      local_234[iVar21 * 2 + 2] = local_334;
      local_234[iVar21 * 2 + 3] = local_3d0;
    } while (iVar21 != local_328);
    if (local_3d0 <= uVar15) {
      if (local_3d0 < uVar15) {
LAB_00437d03:
        local_3c4 = 0;
        uVar11 = 0;
        local_3cc = 0;
        do {
          uVar1 = *(uint *)(param_6 + 4 + local_3cc * 8);
          uVar5 = *(uint *)(param_6 + local_3cc * 8);
          uVar13 = (uVar1 >> 0x18) + uVar1 * 0x1000000;
          uVar18 = (uVar1 & 0xff00) * 0x100;
          uVar19 = uVar13 + uVar18;
          uVar23 = uVar1 >> 8 & 0xff00;
          uVar22 = uVar19 + uVar23;
          uVar19 = uVar5 * 0x1000000 + (uVar5 & 0xff00) * 0x100 + (uVar5 >> 8 & 0xff00) +
                   (uVar5 >> 0x18) + (uint)CARRY4(uVar1 >> 0x18,uVar1 * 0x1000000) +
                   (uint)CARRY4(uVar13,uVar18) + (uint)CARRY4(uVar19,uVar23);
          local_3cc = local_3cc + 1;
          uVar1 = local_234[local_3cc * 2 + 3];
          uVar5 = auStack_12c[local_3cc * 2 + 3];
          uVar13 = uVar22 + local_234[local_3cc * 2 + 2];
          uVar23 = uVar13 + uVar11;
          uVar18 = uVar19 + uVar1 + (uint)CARRY4(uVar22,local_234[local_3cc * 2 + 2]) +
                   (uint)CARRY4(uVar13,uVar11);
          uVar11 = uVar23 - auStack_12c[local_3cc * 2 + 2];
          uVar17 = uVar11 - local_3c4;
          uVar6 = ((uVar18 - uVar5) - (uint)(uVar23 < auStack_12c[local_3cc * 2 + 2])) -
                  (uint)(uVar11 < local_3c4);
          uVar11 = (uVar6 >> 0x18) + uVar6 * 0x1000000;
          uVar22 = uVar6 * 0x100 & 0xff0000;
          uVar13 = uVar11 + uVar22;
          uVar23 = uVar6 >> 8 & 0xff00;
          *(uint *)(param_3 + -8 + local_3cc * 8) = uVar13 + uVar23;
          *(uint *)(param_3 + -4 + local_3cc * 8) =
               uVar17 * 0x1000000 + (uVar17 & 0xff00) * 0x100 + (uVar17 >> 8 & 0xff00) +
               (uVar17 >> 0x18) + (uint)CARRY4(uVar6 >> 0x18,uVar6 * 0x1000000) +
               (uint)CARRY4(uVar11,uVar22) + (uint)CARRY4(uVar13,uVar23);
          uVar11 = ((uVar19 ^ uVar18 | uVar1 ^ uVar18) ^ uVar18) >> 0x1f;
          local_3c4 = ((uVar5 ^ uVar18 | uVar6 ^ uVar18) ^ uVar18) >> 0x1f;
        } while (iVar21 != local_3cc);
        return;
      }
      if (local_334 <= uVar14) {
        if ((uVar15 <= local_3d0) && ((uVar15 < local_3d0 || (uVar14 <= local_334)))) {
          iVar12 = 0;
          puVar24 = local_234 + local_32c * 2 + 2;
          puVar25 = auStack_12c + local_32c * 2 + 2;
          do {
            iVar12 = iVar12 + 1;
            if (iVar21 == iVar12) {
              return;
            }
            uVar11 = *puVar25;
            uVar1 = puVar24[1];
            uVar5 = *puVar24;
            uVar13 = puVar25[1];
            if ((uVar13 <= uVar1) && ((uVar13 < uVar1 || (uVar11 < uVar5)))) goto LAB_00437b30;
            puVar24 = puVar24 + -2;
            puVar25 = puVar25 + -2;
          } while ((uVar13 < uVar1) || ((uVar13 <= uVar1 && (uVar11 <= uVar5))));
        }
        goto LAB_00437d03;
      }
    }
LAB_00437b30:
    uVar11 = 0;
    iVar12 = 0;
    do {
      iVar12 = iVar12 + 1;
      uVar1 = local_234[iVar12 * 2 + 3];
      uVar5 = auStack_12c[iVar12 * 2 + 3];
      uVar13 = local_234[iVar12 * 2 + 2] - auStack_12c[iVar12 * 2 + 2];
      uVar23 = uVar13 - uVar11;
      uVar18 = ((uVar1 - uVar5) - (uint)(local_234[iVar12 * 2 + 2] < auStack_12c[iVar12 * 2 + 2])) -
               (uint)(uVar13 < uVar11);
      uVar11 = (uVar18 >> 0x18) + uVar18 * 0x1000000;
      uVar22 = uVar18 * 0x100 & 0xff0000;
      uVar13 = uVar11 + uVar22;
      uVar19 = uVar18 >> 8 & 0xff00;
      *(uint *)(param_3 + -8 + iVar12 * 8) = uVar13 + uVar19;
      *(uint *)(param_3 + -4 + iVar12 * 8) =
           uVar23 * 0x1000000 + (uVar23 & 0xff00) * 0x100 + (uVar23 >> 8 & 0xff00) +
           (uVar23 >> 0x18) + (uint)CARRY4(uVar18 >> 0x18,uVar18 * 0x1000000) +
           (uint)CARRY4(uVar11,uVar22) + (uint)CARRY4(uVar13,uVar19);
      uVar11 = ((uVar5 ^ uVar1 | uVar18 ^ uVar1) ^ uVar1) >> 0x1f;
    } while (iVar21 != iVar12);
  }
  return;
}

