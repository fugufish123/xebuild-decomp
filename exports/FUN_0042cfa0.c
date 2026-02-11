
undefined4 __cdecl FUN_0042cfa0(void *param_1,uint param_2)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined4 local_20 [4];
  
  uVar9 = 1;
  puVar8 = (undefined4 *)&DAT_004bc590;
  if (1 < DAT_004c4f9c) {
    do {
      pcVar7 = (char *)(puVar8 + -0x105);
      iVar3 = _strnicmp(pcVar7,"none",4);
      if ((iVar3 == 0) && (puVar8[-5] == 0)) goto switchD_0042d030_caseD_17;
      iVar3 = puVar8[-4];
      if (DAT_00479ea8 == 2) {
        puVar11 = (undefined1 *)puVar8[-1];
        FUN_00433690(1,"encoding %s size 0x%x (JTAG)\n");
        iVar4 = DAT_00479ebc;
        switch(iVar3) {
        case 1:
          pcVar7 = (char *)puVar8[-2];
          iVar3 = memcmp(pcVar7,&DAT_0044a760,0x200);
          if (iVar3 == 0) {
            iVar3 = 0;
            if (0 < DAT_004c4f98) {
              iVar3 = 0;
              piVar6 = &DAT_004bc580;
              iVar4 = DAT_004bc154;
              while ((iVar4 != 0x16 && (iVar10 = iVar3 + 1, iVar3 = 0, iVar10 != DAT_004c4f98))) {
                iVar4 = *piVar6;
                iVar3 = iVar10;
                piVar6 = piVar6 + 0x10b;
              }
            }
            iVar4 = puVar8[-1];
            local_20[0] = 0xffff8038;
            iVar3 = (&DAT_004bc160)[iVar3 * 0x10b] + 3 >> 2;
            FUN_00433690(1,"patching payload.bin to load size 0x%x (0x%x reps)\n");
            pcVar7 = FUN_00421000(pcVar7,iVar4,(char *)local_20,4);
            if (pcVar7 != (char *)0x0) {
              FUN_00433690(2,"org li %r4, %02x%02x\n");
              pcVar7[3] = (char)iVar3;
              pcVar7[2] = (char)((uint)iVar3 >> 8);
              FUN_00433690(2,"fin li %r4, %02x%02x\n");
            }
          }
          break;
        case 2:
switchD_0042d030_caseD_2:
          iVar3 = FUN_0041ba80((void *)puVar8[-2],param_1,(byte *)puVar8[-1],puVar11);
          if (iVar3 != 0) {
            return 1;
          }
          break;
        case 3:
switchD_0042d030_caseD_3:
          FUN_0041d0e0((int)pcVar7,0);
          break;
        case 5:
          if (DAT_004c4f98 < 1) {
LAB_0042d999:
            iVar3 = 0;
          }
          else {
            iVar3 = 0;
            piVar6 = &DAT_004bc580;
            if (DAT_004bc154 == 0x18) goto LAB_0042d999;
            do {
              iVar3 = iVar3 + 1;
              if (iVar3 == DAT_004c4f98) goto LAB_0042d999;
              iVar10 = *piVar6;
              piVar6 = piVar6 + 0x10b;
            } while (iVar10 != 0x18);
          }
          puVar11 = (undefined1 *)(&DAT_004bc15c)[iVar3 * 0x10b];
          uVar2 = FUN_00420ab0((undefined1 *)(puVar8[-2] + 2));
          uVar5 = FUN_00420ad0((uint *)(puVar8[-2] + 0x3b0));
          FUN_00422b10(uVar5,(uint)uVar2,puVar11,iVar4);
LAB_0042d9ea:
          iVar3 = 0;
LAB_0042d839:
          FUN_0041bf50(param_1,(void *)puVar8[-2],puVar8,puVar8[-1],iVar3);
          break;
        case 7:
          if (DAT_004c4f98 < 1) goto LAB_0042d30a;
          iVar3 = 0;
          piVar6 = &DAT_004bc580;
          if (DAT_004bc154 == 5) goto LAB_0042d30a;
          do {
            iVar3 = iVar3 + 1;
            if (iVar3 == DAT_004c4f98) goto LAB_0042d30a;
            iVar4 = *piVar6;
            piVar6 = piVar6 + 0x10b;
          } while (iVar4 != 5);
LAB_0042d8b0:
          iVar3 = iVar3 * 0x42c + 0x422c4;
          goto LAB_0042d30f;
        case 9:
          if (0 < DAT_004c4f98) {
            iVar3 = 0;
            piVar6 = &DAT_004bc580;
            if (DAT_004bc154 != 10) {
              do {
                iVar3 = iVar3 + 1;
                if (iVar3 == DAT_004c4f98) goto LAB_0042d235;
                iVar4 = *piVar6;
                piVar6 = piVar6 + 0x10b;
              } while (iVar4 != 10);
              goto LAB_0042d237;
            }
          }
          goto LAB_0042d235;
        case 10:
          if (DAT_004c4f98 < 1) goto LAB_0042d1d0;
          iVar3 = 0;
          piVar6 = &DAT_004bc580;
          if (DAT_004bc154 == 9) goto LAB_0042d1d0;
          do {
            iVar3 = iVar3 + 1;
            if (DAT_004c4f98 == iVar3) goto LAB_0042d1d0;
            iVar4 = *piVar6;
            piVar6 = piVar6 + 0x10b;
          } while (iVar4 != 9);
LAB_0042d890:
          iVar3 = iVar3 * 0x42c + 0x422c4;
          goto LAB_0042d1d5;
        case 0x11:
          uVar2 = FUN_00420ab0((undefined1 *)(puVar8[-2] + 2));
          uVar5 = FUN_00420ad0((uint *)(puVar8[-2] + 0x3b0));
          FUN_00422b10(uVar5,(uint)uVar2,(undefined1 *)0x0,iVar4);
          FUN_0041c1b0(param_1,(byte *)puVar8[-2],puVar8,puVar8[-1],1);
          break;
        case 0x12:
          if (0 < DAT_004c4f98) {
            iVar3 = 0;
            piVar6 = &DAT_004bc580;
            if (DAT_004bc154 != 0x11) {
              do {
                iVar3 = iVar3 + 1;
                if (iVar3 == DAT_004c4f98) goto LAB_0042d30a;
                iVar4 = *piVar6;
                piVar6 = piVar6 + 0x10b;
              } while (iVar4 != 0x11);
              goto LAB_0042d8b0;
            }
          }
          goto LAB_0042d30a;
        case 0x13:
          if (0 < DAT_004c4f98) {
            iVar3 = 0;
            piVar6 = &DAT_004bc580;
            if (DAT_004bc154 != 0x12) {
              do {
                iVar3 = iVar3 + 1;
                if (iVar3 == DAT_004c4f98) goto LAB_0042d2aa;
                iVar4 = *piVar6;
                piVar6 = piVar6 + 0x10b;
              } while (iVar4 != 0x12);
              goto LAB_0042d8a0;
            }
          }
          goto LAB_0042d2aa;
        case 0x14:
          if (DAT_004c4f98 < 1) {
LAB_0042dc85:
            iVar3 = 0;
          }
          else {
            iVar3 = 0;
            piVar6 = &DAT_004bc580;
            if (DAT_004bc154 == 0x15) goto LAB_0042dc85;
            do {
              iVar3 = iVar3 + 1;
              if (iVar3 == DAT_004c4f98) goto LAB_0042dc85;
              iVar4 = *piVar6;
              piVar6 = piVar6 + 0x10b;
            } while (iVar4 != 0x15);
          }
          uVar5 = FUN_00410490();
          uVar5 = FUN_0041ca20((int)pcVar7,(&DAT_004bc160)[iVar3 * 0x10b],param_2 & 0xffff,1,uVar5);
          param_2 = param_2 + (uVar5 & 0xffff);
          break;
        case 0x15:
          if (0 < DAT_004c4f98) {
            iVar3 = 0;
            piVar6 = &DAT_004bc580;
            if (DAT_004bc154 != 0x14) {
              do {
                iVar3 = iVar3 + 1;
                if (iVar3 == DAT_004c4f98) goto LAB_0042d1d0;
                iVar4 = *piVar6;
                piVar6 = piVar6 + 0x10b;
              } while (iVar4 != 0x14);
              goto LAB_0042d890;
            }
          }
          goto LAB_0042d1d0;
        case 0x16:
          pcVar7 = (char *)puVar8[-2];
          iVar3 = memcmp(pcVar7,&DAT_0044a960,0xd40);
          if (iVar3 == 0) {
            FUN_0042cbb0(pcVar7,puVar8[-1]);
          }
          else if (DAT_00479f00 != 0) {
            FUN_00433690(0,
                         "\n******* WARNING: CYGNOS, DEMON and NODVD command line options are ignored due to external freeboot.bin!\n\n"
                        );
          }
        }
        goto switchD_0042d030_caseD_17;
      }
      if (DAT_00479ea8 < 4) {
        if (iVar3 == 0x18) {
          if (DAT_00479eb4 != 0) {
            FUN_00433690(1,"encoding %s size 0x%x\n");
          }
          goto switchD_0042d030_caseD_17;
        }
        puVar11 = (undefined1 *)puVar8[-1];
        FUN_00433690(1,"encoding %s size 0x%x\n");
        iVar4 = DAT_00479ebc;
        switch(iVar3) {
        case 2:
          goto switchD_0042d030_caseD_2;
        case 3:
          goto switchD_0042d030_caseD_3;
        case 5:
          if (DAT_00479eb8 == 0) {
            uVar2 = FUN_00420ab0((undefined1 *)(puVar8[-2] + 2));
            uVar5 = FUN_00420ad0((uint *)(puVar8[-2] + 0x3b0));
            FUN_00422b10(uVar5,(uint)uVar2,(undefined1 *)0x0,iVar4);
            if (DAT_00479ea8 != 1) goto LAB_0042d94c;
            goto LAB_0042d9ea;
          }
          iVar3 = 1;
          goto LAB_0042d839;
        case 6:
          if (DAT_00479eb8 != 0) {
            iVar4 = FUN_004223b0(&DAT_0047a11c,0x10);
            iVar3 = DAT_00479ebc;
            if (DAT_004c4f98 < 1) {
LAB_0042d736:
              iVar10 = 0;
            }
            else {
              iVar10 = 0;
              piVar6 = &DAT_004bc580;
              if (DAT_004bc154 == 0x18) goto LAB_0042d736;
              do {
                iVar10 = iVar10 + 1;
                if (iVar10 == DAT_004c4f98) goto LAB_0042d736;
                iVar1 = *piVar6;
                piVar6 = piVar6 + 0x10b;
              } while (iVar1 != 0x18);
            }
            if (DAT_00479eb4 == 0) {
              uVar2 = FUN_00420ab0((undefined1 *)(puVar8[-2] + 2));
              uVar5 = FUN_00420ad0((uint *)(puVar8[-2] + 0x3b0));
              FUN_00422b10(uVar5,(uint)uVar2,(undefined1 *)0x0,iVar3);
            }
            else {
              puVar11 = (undefined1 *)(&DAT_004bc15c)[iVar10 * 0x10b];
              uVar2 = FUN_00420ab0((undefined1 *)(puVar8[-2] + 2));
              uVar5 = FUN_00420ad0((uint *)(puVar8[-2] + 0x3b0));
              FUN_00422b10(uVar5,(uint)uVar2,puVar11,iVar3);
            }
            if (iVar4 != 0) {
              FUN_00433690(1,"CPU key is all zeros, zeropairing CB_B\n");
              DAT_00479f15 = 0;
            }
            if (DAT_004c4f98 < 1) {
LAB_0042d7db:
              iVar4 = 0x422c4;
              iVar3 = 0;
            }
            else {
              iVar3 = 0;
              piVar6 = &DAT_004bc580;
              if (DAT_004bc154 == 5) goto LAB_0042d7db;
              do {
                iVar3 = iVar3 + 1;
                if (iVar3 == DAT_004c4f98) goto LAB_0042d7db;
                iVar4 = *piVar6;
                piVar6 = piVar6 + 0x10b;
              } while (iVar4 != 5);
              iVar4 = iVar3 * 0x42c + 0x422c4;
            }
            FUN_0041c370(param_1,puVar8[-2],(uint *)((int)&DAT_00479ea0 + iVar4),
                         (&DAT_004bc15c)[iVar3 * 0x10b],puVar8);
          }
          break;
        case 7:
          if (DAT_00479eb8 != 0) {
            if (0 < DAT_004c4f98) {
              iVar3 = 0;
              piVar6 = &DAT_004bc580;
              if (DAT_004bc154 != 6) {
                do {
                  iVar3 = iVar3 + 1;
                  if (iVar3 == DAT_004c4f98) goto LAB_0042d30a;
                  iVar4 = *piVar6;
                  piVar6 = piVar6 + 0x10b;
                } while (iVar4 != 6);
                goto LAB_0042d8b0;
              }
            }
            goto LAB_0042d30a;
          }
          if (DAT_004c4f98 < 1) {
LAB_0042d6aa:
            iVar3 = 0x422c4;
          }
          else {
            iVar3 = 0;
            piVar6 = &DAT_004bc580;
            if (DAT_004bc154 == 5) goto LAB_0042d6aa;
            do {
              iVar3 = iVar3 + 1;
              if (iVar3 == DAT_004c4f98) goto LAB_0042d6aa;
              iVar4 = *piVar6;
              piVar6 = piVar6 + 0x10b;
            } while (iVar4 != 5);
            iVar3 = iVar3 * 0x42c + 0x422c4;
          }
          iVar4 = puVar8[-1];
          if (DAT_00479ea8 == 1) {
            FUN_0041c760(puVar8[-2],(uint *)((int)&DAT_00479ea0 + iVar3),puVar8,iVar4);
            break;
          }
          goto LAB_0042d31a;
        case 8:
          if (0 < DAT_004c4f98) {
            iVar3 = 0;
            piVar6 = &DAT_004bc580;
            if (DAT_004bc154 != 7) {
              do {
                iVar3 = iVar3 + 1;
                if (iVar3 == DAT_004c4f98) goto LAB_0042d2aa;
                iVar4 = *piVar6;
                piVar6 = piVar6 + 0x10b;
              } while (iVar4 != 7);
              goto LAB_0042d8a0;
            }
          }
          goto LAB_0042d2aa;
        case 9:
          if (0 < DAT_004c4f98) {
            iVar3 = 0;
            piVar6 = &DAT_004bc580;
            if (DAT_004bc154 != 10) {
              do {
                iVar3 = iVar3 + 1;
                if (iVar3 == DAT_004c4f98) goto LAB_0042d235;
                iVar4 = *piVar6;
                piVar6 = piVar6 + 0x10b;
              } while (iVar4 != 10);
              goto LAB_0042d237;
            }
          }
          goto LAB_0042d235;
        case 10:
          if (0 < DAT_004c4f98) {
            iVar3 = 0;
            piVar6 = &DAT_004bc580;
            if (DAT_004bc154 != 9) {
              do {
                iVar3 = iVar3 + 1;
                if (iVar3 == DAT_004c4f98) goto LAB_0042d1d0;
                iVar4 = *piVar6;
                piVar6 = piVar6 + 0x10b;
              } while (iVar4 != 9);
              goto LAB_0042d890;
            }
          }
          goto LAB_0042d1d0;
        }
        goto switchD_0042d030_caseD_17;
      }
      if (iVar3 == 0x18) goto switchD_0042d030_caseD_17;
      puVar11 = (undefined1 *)puVar8[-1];
      FUN_00433690(1,"encoding %s size 0x%x\n");
      iVar4 = DAT_00479ebc;
      switch(iVar3) {
      default:
        FUN_00433690(1,"****** Unhandled BL typ %d ******\n");
        break;
      case 2:
        goto switchD_0042d030_caseD_2;
      case 3:
        goto switchD_0042d030_caseD_3;
      case 4:
        FUN_0041d0e0((int)pcVar7,1);
        break;
      case 7:
        if (0 < DAT_004c4f98) {
          iVar3 = 0;
          piVar6 = &DAT_004bc580;
          if (DAT_004bc154 != 0xc) {
            do {
              iVar3 = iVar3 + 1;
              if (iVar3 == DAT_004c4f98) goto LAB_0042d30a;
              iVar4 = *piVar6;
              piVar6 = piVar6 + 0x10b;
            } while (iVar4 != 0xc);
            goto LAB_0042d8b0;
          }
        }
        goto LAB_0042d30a;
      case 8:
        if (DAT_004c4f98 < 1) goto LAB_0042d2aa;
        iVar3 = 0;
        piVar6 = &DAT_004bc580;
        if (DAT_004bc154 == 7) goto LAB_0042d2aa;
        do {
          iVar3 = iVar3 + 1;
          if (iVar3 == DAT_004c4f98) goto LAB_0042d2aa;
          iVar4 = *piVar6;
          piVar6 = piVar6 + 0x10b;
        } while (iVar4 != 7);
LAB_0042d8a0:
        iVar3 = iVar3 * 0x42c + 0x422c4;
        goto LAB_0042d2af;
      case 9:
        if (DAT_004c4f98 < 1) goto LAB_0042d235;
        iVar3 = 0;
        piVar6 = &DAT_004bc580;
        if (DAT_004bc154 == 10) goto LAB_0042d235;
        do {
          iVar3 = iVar3 + 1;
          if (iVar3 == DAT_004c4f98) goto LAB_0042d235;
          iVar4 = *piVar6;
          piVar6 = piVar6 + 0x10b;
        } while (iVar4 != 10);
        goto LAB_0042d237;
      case 10:
        if (0 < DAT_004c4f98) {
          iVar3 = 0;
          piVar6 = &DAT_004bc580;
          if (DAT_004bc154 != 9) {
            do {
              iVar3 = iVar3 + 1;
              if (iVar3 == DAT_004c4f98) goto LAB_0042d1d0;
              iVar4 = *piVar6;
              piVar6 = piVar6 + 0x10b;
            } while (iVar4 != 9);
            goto LAB_0042d890;
          }
        }
        goto LAB_0042d1d0;
      case 0xb:
        if (DAT_00479ea8 - 4 < 2) {
          if (DAT_004c4f98 < 1) {
LAB_0042da35:
            iVar3 = 0;
          }
          else {
            iVar3 = 0;
            piVar6 = &DAT_004bc580;
            if (DAT_004bc154 == 0x18) goto LAB_0042da35;
            do {
              iVar3 = iVar3 + 1;
              if (iVar3 == DAT_004c4f98) goto LAB_0042da35;
              iVar10 = *piVar6;
              piVar6 = piVar6 + 0x10b;
            } while (iVar10 != 0x18);
          }
          if ((DAT_00479ea4 & 7) < 5) {
            uVar2 = FUN_00420ab0((undefined1 *)(puVar8[-2] + 2));
            FUN_00422b10(0x1000000,(uint)uVar2,(undefined1 *)0x0,iVar4);
          }
          else {
            uVar2 = FUN_00420ab0((undefined1 *)(puVar8[-2] + 2));
            FUN_00422b10(0x3000000,(uint)uVar2,(undefined1 *)0x0,iVar4);
          }
          FUN_00433690(1,"zeropairing SB\n");
          FUN_0041b320((&DAT_004bc15c)[iVar3 * 0x10b]);
        }
        else {
          uVar2 = FUN_00420ab0((undefined1 *)(puVar8[-2] + 2));
          uVar5 = FUN_00420ad0((uint *)(puVar8[-2] + 0x3b0));
          FUN_00422b10(uVar5,(uint)uVar2,(undefined1 *)0x0,iVar4);
          iVar3 = FUN_004223b0(&DAT_0047a11c,0x10);
          if (iVar3 == 0) goto LAB_0042d9ea;
          FUN_00433690(1,"CPU key is all zeros, zeropairing SB\n");
          DAT_00479f15 = 0;
        }
LAB_0042d94c:
        FUN_0041c0c0(puVar8[-2],puVar8);
        break;
      case 0xc:
        FUN_0041c5e0(puVar8[-2],puVar8);
        break;
      case 0xd:
        if (0 < DAT_004c4f98) {
          iVar3 = 0;
          piVar6 = &DAT_004bc580;
          if (DAT_004bc154 != 0xc) {
            do {
              iVar3 = iVar3 + 1;
              if (iVar3 == DAT_004c4f98) goto LAB_0042d30a;
              iVar4 = *piVar6;
              piVar6 = piVar6 + 0x10b;
            } while (iVar4 != 0xc);
            goto LAB_0042d8b0;
          }
        }
LAB_0042d30a:
        iVar3 = 0x422c4;
LAB_0042d30f:
        iVar4 = puVar8[-1];
LAB_0042d31a:
        FUN_0041c6b0(puVar8[-2],(uint *)((int)&DAT_00479ea0 + iVar3),puVar8,iVar4);
        break;
      case 0xe:
        if (0 < DAT_004c4f98) {
          iVar3 = 0;
          piVar6 = &DAT_004bc580;
          if (DAT_004bc154 != 0xd) {
            do {
              iVar3 = iVar3 + 1;
              if (DAT_004c4f98 == iVar3) goto LAB_0042d2aa;
              iVar4 = *piVar6;
              piVar6 = piVar6 + 0x10b;
            } while (iVar4 != 0xd);
            goto LAB_0042d8a0;
          }
        }
LAB_0042d2aa:
        iVar3 = 0x422c4;
LAB_0042d2af:
        FUN_0041c860(puVar8[-2],(uint *)((int)&DAT_00479ea0 + iVar3),puVar8,puVar8[-1]);
        break;
      case 0xf:
        if (0 < DAT_004c4f98) {
          iVar3 = 0;
          piVar6 = &DAT_004bc580;
          if (DAT_004bc154 != 0x10) {
            do {
              iVar3 = iVar3 + 1;
              if (DAT_004c4f98 == iVar3) goto LAB_0042d235;
              iVar4 = *piVar6;
              piVar6 = piVar6 + 0x10b;
            } while (iVar4 != 0x10);
            goto LAB_0042d237;
          }
        }
LAB_0042d235:
        iVar3 = 0;
LAB_0042d237:
        uVar5 = FUN_00410490();
        FUN_0041ca20((int)pcVar7,(&DAT_004bc160)[iVar3 * 0x10b],param_2 & 0xffff,0,uVar5);
        break;
      case 0x10:
        if (0 < DAT_004c4f98) {
          iVar3 = 0;
          piVar6 = &DAT_004bc580;
          if (DAT_004bc154 != 0xf) {
            do {
              iVar3 = iVar3 + 1;
              if (iVar3 == DAT_004c4f98) goto LAB_0042d1d0;
              iVar4 = *piVar6;
              piVar6 = piVar6 + 0x10b;
            } while (iVar4 != 0xf);
            goto LAB_0042d890;
          }
        }
LAB_0042d1d0:
        iVar3 = 0x422c4;
LAB_0042d1d5:
        FUN_0041ce50(puVar8[-2],(uint *)((int)&DAT_00479ea0 + iVar3),puVar8,puVar8[-1]);
        break;
      case 0x17:
      case 0x18:
      case 0x19:
        break;
      }
switchD_0042d030_caseD_17:
      uVar9 = uVar9 + 1;
      puVar8 = puVar8 + 0x10b;
    } while (uVar9 < DAT_004c4f9c);
  }
  if (DAT_00479ebc == 0) {
    return 0;
  }
  if (DAT_004c4f98 < 1) {
    iVar3 = 0x422c4;
    iVar10 = 0x422c4;
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    piVar6 = &DAT_004bc580;
    if (DAT_004bc154 == 0xe) {
      iVar10 = 0x422c4;
      iVar4 = 0;
    }
    else {
      do {
        iVar4 = iVar4 + 1;
        if (iVar4 == DAT_004c4f98) {
          iVar10 = 0x422c4;
          iVar4 = 0;
          goto LAB_0042d0c6;
        }
        iVar3 = *piVar6;
        piVar6 = piVar6 + 0x10b;
      } while (iVar3 != 0xe);
      iVar10 = iVar4 * 0x42c + 0x422c4;
LAB_0042d0c6:
      if (DAT_004bc154 == 7) {
LAB_0042d0ee:
        iVar3 = 0x422c4;
        goto LAB_0042d0f3;
      }
    }
    iVar3 = 0;
    piVar6 = &DAT_004bc580;
    do {
      iVar3 = iVar3 + 1;
      if (iVar3 == DAT_004c4f98) goto LAB_0042d0ee;
      iVar1 = *piVar6;
      piVar6 = piVar6 + 0x10b;
    } while (iVar1 != 7);
    iVar3 = iVar3 * 0x42c + 0x422c4;
  }
LAB_0042d0f3:
  FUN_00433690(1,"re-encoding %s size 0x%x\n");
  FUN_0041c860((&DAT_004bc15c)[iVar4 * 0x10b],(uint *)((int)&DAT_00479ea0 + iVar3),
               (undefined4 *)((int)&DAT_00479ea0 + iVar10),(&DAT_004bc160)[iVar4 * 0x10b]);
  return 0;
}

