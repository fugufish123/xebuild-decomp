
undefined4 FUN_0042a370(void)

{
  int *_Str1;
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  byte *pbVar6;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  uint local_20;
  
  piVar7 = &DAT_004bc588;
  local_20 = 1;
  if (1 < DAT_004c4f98) {
    do {
      _Str1 = piVar7 + -0x103;
      iVar2 = _strnicmp((char *)_Str1,"none",4);
      if ((iVar2 != 0) || (piVar7[-3] != 0)) {
        iVar2 = piVar7[-2];
        switch(iVar2) {
        default:
          FUN_00433690(1,"####### unhandled bl load %d %s\n");
          break;
        case 1:
          iVar2 = FUN_00428780((char *)_Str1);
          if (iVar2 != 0) {
            FUN_00433690(1,"could not read %s%s, using built in payload (0x%x bytes)\n");
            puVar4 = (undefined4 *)malloc(0x200);
            *piVar7 = (int)puVar4;
            if (puVar4 == (undefined4 *)0x0) goto LAB_0042a8d9;
            piVar7[1] = 0x200;
            puVar8 = &DAT_0044a760;
            for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar4 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar4 = puVar4 + 1;
            }
          }
          break;
        case 2:
          iVar2 = FUN_00427500(extraout_ECX,(int)(&DAT_004bbd50 + DAT_004c4f9c * 0x42c));
          if (iVar2 == 0) {
            if ((void *)*piVar7 != (void *)0x0) {
              free((void *)*piVar7);
            }
            iVar2 = DAT_004c4f9c;
            *piVar7 = (&DAT_004bc15c)[DAT_004c4f9c * 0x10b];
            piVar7[1] = (&DAT_004bc160)[iVar2 * 0x10b];
            (&DAT_004bc15c)[iVar2 * 0x10b] = 0;
            (&DAT_004bc160)[iVar2 * 0x10b] = 0;
            uVar5 = piVar7[1];
          }
          else {
            if (DAT_0047a0e4 == 0) goto LAB_0042a8d9;
            FUN_00433690(1,"reading %s%s failed, using %s from nand dump\n");
            if ((void *)*piVar7 != (void *)0x0) {
              free((void *)*piVar7);
            }
            *piVar7 = DAT_0047a0e4;
            uVar5 = DAT_0047a0e8;
            piVar7[1] = DAT_0047a0e8;
            DAT_0047a0e4 = 0;
            DAT_0047a0e8 = 0;
          }
          uVar5 = FUN_00410290(uVar5);
          piVar7[-1] = uVar5;
          if (uVar5 == 0) goto LAB_0042a8d9;
          break;
        case 3:
          iVar2 = FUN_00427500(extraout_ECX,(int)(&DAT_004bbd50 + DAT_004c4f9c * 0x42c));
          if (((iVar2 == 0) ||
              (iVar2 = FUN_00427500(extraout_ECX_04,(int)(&DAT_004bbd50 + DAT_004c4f9c * 0x42c)),
              iVar2 == 0)) ||
             (iVar2 = FUN_00427500(extraout_ECX_05,(int)(&DAT_004bbd50 + DAT_004c4f9c * 0x42c)),
             iVar2 == 0)) {
LAB_0042a74f:
            if ((void *)*piVar7 != (void *)0x0) {
              free((void *)*piVar7);
            }
            iVar2 = DAT_004c4f9c;
            *piVar7 = (&DAT_004bc15c)[DAT_004c4f9c * 0x10b];
            piVar7[1] = (&DAT_004bc160)[iVar2 * 0x10b];
            (&DAT_004bc15c)[iVar2 * 0x10b] = 0;
            (&DAT_004bc160)[iVar2 * 0x10b] = 0;
          }
          else {
            if (DAT_0047a0ec == 0) goto LAB_0042a8d9;
            FUN_00433690(1,"reading %s%s failed, using %s from nand dump\n");
            if ((void *)*piVar7 != (void *)0x0) {
              free((void *)*piVar7);
            }
            *piVar7 = DAT_0047a0ec;
            piVar7[1] = DAT_0047a0f0;
            DAT_0047a0ec = 0;
            DAT_0047a0f0 = 0;
          }
          break;
        case 4:
          iVar2 = FUN_00427500(extraout_ECX,(int)(&DAT_004bbd50 + DAT_004c4f9c * 0x42c));
          if (((iVar2 == 0) ||
              (iVar2 = FUN_00427500(extraout_ECX_03,(int)(&DAT_004bbd50 + DAT_004c4f9c * 0x42c)),
              iVar2 == 0)) ||
             (iVar2 = FUN_00427500(extraout_ECX_06,(int)(&DAT_004bbd50 + DAT_004c4f9c * 0x42c)),
             iVar2 == 0)) goto LAB_0042a74f;
          if (DAT_0047a0f4 == 0) goto LAB_0042a8d9;
          FUN_00433690(1,"reading %s%s failed, using %s from nand dump\n");
          if ((void *)*piVar7 != (void *)0x0) {
            free((void *)*piVar7);
          }
          *piVar7 = DAT_0047a0f4;
          piVar7[1] = DAT_0047a0f8;
          DAT_0047a0f4 = 0;
          DAT_0047a0f8 = 0;
          break;
        case 5:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
          iVar3 = FUN_00428040((char *)_Str1,(int)_Str1,1,0,(undefined1 *)0x0,0,0,1);
          if (iVar3 == 0) {
            if (iVar2 == 9) goto LAB_0042abc7;
            iVar3 = FUN_00429b30((byte *)*piVar7,piVar7[1],iVar2,piVar7[-3]);
            if (iVar3 != 0) goto LAB_0042a8d9;
            if ((iVar2 == 5) || (iVar2 == 0x11)) {
              if (DAT_0047a13c != (uint *)0x0) goto LAB_0042aa4a;
              FUN_00433690(1,"loaded %s, could not check signature rsa key not present!\n");
            }
            else if (iVar2 == 0xb) {
              if (DAT_0047a13c == (uint *)0x0) {
                FUN_00433690(1,"loaded %s, could not check signature rsa key not present!\n");
                break;
              }
LAB_0042aa4a:
              iVar3 = FUN_0040e5a0((uint *)*piVar7,DAT_0047a13c);
              if (iVar3 == 0) {
                FUN_00433690(0,"\n***** ERROR: loaded %s, but signature check failed!\n");
                if ((5 < DAT_00479ea8) && (iVar2 == 0xe)) {
                  uVar1 = FUN_00420ab0((undefined1 *)((&DAT_004bc15c)[local_20 * 0x10b] + 2));
                  FUN_00410240(uVar1);
                }
                goto LAB_0042a8d9;
              }
              FUN_00433690(1,"loaded %s, signature check passed!\n");
            }
            if ((DAT_00479ea8 < 6) || (iVar2 != 0xe)) break;
LAB_0042aa8e:
            uVar1 = FUN_00420ab0((undefined1 *)(*piVar7 + 2));
            FUN_00410240(uVar1);
          }
          else {
            if (iVar2 == 9) {
              iVar2 = FUN_0040c650(piVar7,piVar7 + 1);
              if (iVar2 == 0) goto LAB_0042a8d9;
LAB_0042abc7:
              pbVar6 = (byte *)*piVar7;
              if ((*pbVar6 == 0x53) && (pbVar6[1] == 0x45)) {
                piVar7[-2] = 0xe;
                DAT_00479f15 = 0;
                DAT_00479ebc = 1;
                iVar2 = FUN_00429b30(pbVar6,piVar7[1],0xe,piVar7[-3]);
                if (iVar2 != 0) goto LAB_0042a8d9;
                if (DAT_00479ea8 < 6) break;
                goto LAB_0042aa8e;
              }
              uVar5 = piVar7[-3];
              uVar10 = 9;
              uVar9 = piVar7[1];
            }
            else {
              if ((iVar2 != 10) || (iVar2 = FUN_0040c700(piVar7,piVar7 + 1), iVar2 == 0))
              goto LAB_0042a8d9;
              uVar5 = piVar7[-3];
              uVar10 = 10;
              uVar9 = piVar7[1];
              pbVar6 = (byte *)*piVar7;
            }
            iVar2 = FUN_00429b30(pbVar6,uVar9,uVar10,uVar5);
LAB_0042a423:
            if (iVar2 != 0) goto LAB_0042a8d9;
          }
          break;
        case 6:
          if (DAT_00479eb8 != 0) {
            iVar2 = FUN_00428040((char *)_Str1,(int)_Str1,1,0,(undefined1 *)0x0,0,0,1);
            if (iVar2 != 0) goto LAB_0042a8d9;
            iVar2 = FUN_00429b30((byte *)*piVar7,piVar7[1],6,piVar7[-3]);
            goto LAB_0042a423;
          }
          break;
        case 0x16:
          iVar2 = FUN_00428780((char *)_Str1);
          if (iVar2 != 0) {
            FUN_00433690(1,"could not read %s%s, using built in core (0x%x bytes)\n");
            puVar4 = (undefined4 *)malloc(0xd40);
            *piVar7 = (int)puVar4;
            if (puVar4 == (undefined4 *)0x0) goto LAB_0042a8d9;
            piVar7[1] = 0xd40;
            puVar8 = &DAT_0044a960;
            for (iVar2 = 0x350; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar4 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar4 = puVar4 + 1;
            }
          }
          break;
        case 0x17:
          if (DAT_00479ea8 != 1) {
            iVar2 = FUN_00428780((char *)_Str1);
            if (iVar2 != 0) goto LAB_0042a8d9;
            if ((piVar7[1] & 3U) != 0) {
              FUN_00433690(1,"\n\n***** ERROR: patch size 0x%x is not a multiple of 4!\n");
              goto LAB_0042a8d9;
            }
            FUN_00428b10((int)_Str1);
          }
          break;
        case 0x18:
          if (((DAT_00479ea8 == 2) || (iVar2 = extraout_ECX, DAT_00479eb4 != 0)) &&
             ((iVar2 = FUN_00427500(extraout_ECX,(int)_Str1), iVar2 != 0 ||
              (iVar2 = extraout_ECX_01, piVar7[1] != 0x60)))) {
            puVar4 = (undefined4 *)malloc(0x60);
            *piVar7 = (int)puVar4;
            if (puVar4 != (undefined4 *)0x0) {
              piVar7[1] = 0x60;
              puVar8 = &DAT_0044a700;
              for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar4 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar4 = puVar4 + 1;
              }
              goto joined_r0x0042a515;
            }
            iVar2 = extraout_ECX_02;
            if (1 < DAT_00479ea8 - 4) goto LAB_0042a8d9;
          }
          else {
joined_r0x0042a515:
            if (1 < DAT_00479ea8 - 4) break;
          }
          iVar2 = FUN_00427500(iVar2,(int)_Str1);
          if ((iVar2 != 0) || (piVar7[1] != 0x60)) {
            puVar4 = (undefined4 *)malloc(0x60);
            *piVar7 = (int)puVar4;
            if (puVar4 == (undefined4 *)0x0) {
LAB_0042a8d9:
              FUN_00433690(0,"\n\n**** could not read %s (%i) ****\n\n");
              return 0xffffffff;
            }
            piVar7[1] = 0x60;
            puVar8 = &DAT_0044a700;
            for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar4 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar4 = puVar4 + 1;
            }
          }
          break;
        case 0x19:
          if (((DAT_00479ea8 != 1) && (DAT_00479ea8 < 6)) &&
             (iVar2 = FUN_00427500(extraout_ECX,(int)_Str1), iVar2 != 0)) {
            FUN_00433690(1,"xell not found in perbuild directory, checking firmware /bin folder\n");
            iVar2 = FUN_00428780((char *)_Str1);
            if (iVar2 != 0) {
              FUN_00433690(1,"xell not found in firmware /bin folder, checking base path\n");
              iVar2 = FUN_004288c0((char *)_Str1);
              goto LAB_0042a423;
            }
          }
          break;
        case 0x1b:
          iVar3 = FUN_00427500(extraout_ECX,(int)(&DAT_004bbd50 + DAT_004c4f9c * 0x42c));
          iVar2 = DAT_004c4f9c;
          if (((iVar3 != 0) &&
              (iVar3 = FUN_00427500(extraout_ECX_00,(int)(&DAT_004bbd50 + DAT_004c4f9c * 0x42c)),
              iVar2 = DAT_004c4f9c, iVar3 != 0)) &&
             (iVar3 = FUN_00427500(extraout_ECX_07,(int)(&DAT_004bbd50 + DAT_004c4f9c * 0x42c)),
             iVar2 = DAT_004c4f9c, iVar3 != 0)) {
            if (DAT_0047a0fc == 0) goto LAB_0042a8d9;
            FUN_00433690(1,"reading %s%s failed, using %s from nand dump\n");
            if ((void *)(&DAT_004bc15c)[DAT_004c4f9c * 0x10b] != (void *)0x0) {
              free((void *)(&DAT_004bc15c)[DAT_004c4f9c * 0x10b]);
            }
            iVar2 = DAT_004c4f9c;
            iVar3 = DAT_0047a0fc;
            DAT_0047a0fc = 0;
            (&DAT_004bc15c)[DAT_004c4f9c * 0x10b] = iVar3;
            uVar10 = DAT_0047a100;
            DAT_0047a100 = 0;
            (&DAT_004bc160)[iVar2 * 0x10b] = uVar10;
          }
          if ((&DAT_004bc15c)[iVar2 * 0x10b] != 0) {
            iVar2 = FUN_004297d0((int)_Str1,(&DAT_004bc15c)[iVar2 * 0x10b],
                                 (&DAT_004bc160)[iVar2 * 0x10b]);
            goto LAB_0042a423;
          }
        }
      }
      local_20 = local_20 + 1;
      piVar7 = piVar7 + 0x10b;
    } while (local_20 < DAT_004c4f98);
  }
  return 0;
}

