
void __cdecl FUN_00432190(char *param_1,int param_2,undefined4 param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  void *pvVar8;
  char *pcVar9;
  undefined1 *puVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  undefined1 uVar14;
  uint local_648;
  char *local_640;
  int local_630 [2];
  int local_628;
  char local_61c [512];
  char local_41c [1036];
  
  FUN_00433690(1,"parsing %d entries in system.manifest\n");
  uVar2 = *(uint *)(param_2 + 0x2c);
  if (((uVar2 & 0xff00) * 0x100 + (uVar2 >> 0x18) + uVar2 * 0x1000000 + (uVar2 >> 8 & 0xff00) == 0)
     || (0xff < DAT_004ce068)) {
    return;
  }
  pvVar8 = (void *)(param_2 + 0x68);
  local_648 = 0;
  do {
    uVar2 = *(uint *)((int)pvVar8 + -0x2c);
    iVar7 = (uVar2 & 0xff00) * 0x100 + (uVar2 >> 0x18) + uVar2 * 0x1000000 + (uVar2 >> 8 & 0xff00);
    if (iVar7 == 0) {
      uVar2 = *(uint *)((int)pvVar8 + -0x38);
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00420ad0((uint *)(iVar7 + param_2));
      uVar2 = *(uint *)((int)pvVar8 + -0x38);
    }
    if (uVar2 != 0) {
      puVar10 = (undefined1 *)
                (param_2 +
                (uVar2 >> 8 & 0xff00) +
                (uVar2 & 0xff00) * 0x100 + (uVar2 >> 0x18) + uVar2 * 0x1000000);
      uVar3 = FUN_00420ab0(puVar10);
      uVar14 = uVar3 == 0;
      if ((bool)uVar14) {
        FUN_00433690(1,"err len = 0!\n");
        iVar7 = 6;
        pcVar9 = local_61c;
        pcVar11 = "flash";
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          uVar14 = *pcVar9 == *pcVar11;
          pcVar9 = pcVar9 + 1;
          pcVar11 = pcVar11 + 1;
        } while ((bool)uVar14);
      }
      else {
        puVar10 = puVar10 + 2;
        uVar14 = puVar10 == (undefined1 *)0x0;
        memcpy(local_61c,puVar10,(uint)uVar3);
        local_61c[uVar3] = '\0';
        iVar7 = 6;
        pcVar9 = local_61c;
        pcVar11 = "flash";
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          uVar14 = *pcVar9 == *pcVar11;
          pcVar9 = pcVar9 + 1;
          pcVar11 = pcVar11 + 1;
        } while ((bool)uVar14);
      }
      if (!(bool)uVar14) {
        local_640 = local_61c;
        strcpy(local_41c,param_1);
        strcat(local_41c,local_640);
        FUN_00433690(1,"%03d: %s ");
        uVar2 = *(uint *)((int)pvVar8 + -0x18);
        puVar10 = (undefined1 *)
                  ((uVar2 >> 0x18) + uVar2 * 0x1000000 + (uVar2 & 0xff00) * 0x100 +
                   (uVar2 >> 8 & 0xff00) + param_2);
        uVar3 = FUN_00420ab0(puVar10);
        if (uVar3 == 0) {
          FUN_00433690(1,"err len = 0!\n");
        }
        else {
          memcpy(local_640,puVar10 + 2,(uint)uVar3);
          local_61c[uVar3] = '\0';
        }
        iVar7 = DAT_004ce068;
        uVar2 = *(uint *)((int)pvVar8 + -0x20);
        iVar5 = (uVar2 >> 8 & 0xff00) +
                (uVar2 & 0xff00) * 0x100 + (uVar2 >> 0x18) + uVar2 * 0x1000000;
        if (iVar5 == 2) {
          uVar2 = *(uint *)((int)pvVar8 + -0x30);
          iVar5 = (uVar2 & 0xff00) * 0x100 + uVar2 * 0x1000000 + (uVar2 >> 0x18) +
                  (uVar2 >> 8 & 0xff00);
          if (iVar5 == 0) {
            FUN_00433690(1," - FAILED! input len is 0!\n");
LAB_00432765:
            DAT_00479684 = DAT_00479684 + 1;
            iVar5 = 0;
          }
          else {
            FUN_00405f20(local_630);
            iVar12 = FUN_00405fa0(local_630,local_41c,0,0,0,(char *)((int)pvVar8 + -0x14),0);
            if (iVar12 == 0) {
LAB_00432751:
              FUN_00433690(1," - FAILED!\n");
              goto LAB_00432765;
            }
            if (iVar5 != local_628) {
              FUN_00433690(1," - FAILED!\n");
              FUN_00405f50(local_630);
              goto LAB_00432751;
            }
            FUN_00433690(1," - OK\n");
            iVar5 = local_630[0];
          }
          iVar12 = DAT_004ce068;
          iVar13 = DAT_004ce068 * 0x408;
          (&DAT_004ce06c)[iVar7 * 0x102] = iVar5;
          if ((&DAT_004ce06c)[iVar12 * 0x102] != 0) {
            uVar2 = *(uint *)((int)pvVar8 + -0x30);
            uVar4 = *(uint *)((int)pvVar8 + 0x18);
            (&DAT_004ce070)[iVar12 * 0x102] =
                 (uVar2 & 0xff00) * 0x100 + uVar2 * 0x1000000 + (uVar2 >> 0x18) +
                 (uVar2 >> 8 & 0xff00);
            uVar2 = *(uint *)((int)pvVar8 + 0x14);
            sprintf(&DAT_004ce074 + iVar13,"%s:\\%s%08X\\%08X\\%s",&DAT_0045bdb4,
                    "Content\\0000000000000000\\",
                    (uVar4 >> 8 & 0xff00) +
                    (uVar4 & 0xff00) * 0x100 + uVar4 * 0x1000000 + (uVar4 >> 0x18),
                    (uVar2 & 0xff00) * 0x100 + uVar2 * 0x1000000 + (uVar2 >> 0x18) +
                    (uVar2 >> 8 & 0xff00),local_640);
            DAT_004ce068 = DAT_004ce068 + 1;
          }
        }
        else if (iVar5 == 3) {
          uVar2 = *(uint *)((int)pvVar8 + -0x30);
          pvVar6 = FUN_00431f80(local_41c,
                                (uVar2 >> 8 & 0xff00) +
                                (uVar2 & 0xff00) * 0x100 + uVar2 * 0x1000000 + (uVar2 >> 0x18),
                                pvVar8);
          iVar5 = DAT_004ce068;
          iVar12 = DAT_004ce068 * 0x408;
          (&DAT_004ce06c)[iVar7 * 0x102] = pvVar6;
          if ((&DAT_004ce06c)[iVar5 * 0x102] != 0) {
            uVar2 = *(uint *)((int)pvVar8 + -0x30);
            (&DAT_004ce070)[iVar5 * 0x102] =
                 (uVar2 & 0xff00) * 0x100 + uVar2 * 0x1000000 + (uVar2 >> 0x18) +
                 (uVar2 >> 8 & 0xff00);
            sprintf(&DAT_004ce074 + iVar12,"%s:\\%08X\\%s",&DAT_0045bdb4,uVar4,local_640);
            if (uVar4 != param_4) {
              if (DAT_004795a0 == 0) {
                iVar7 = 1;
LAB_00432564:
                puVar1 = &DAT_004795c0 + DAT_004795a0;
                DAT_004795a0 = iVar7;
                *puVar1 = uVar4;
              }
              else if (uVar4 != DAT_004795c0) {
                iVar7 = 0;
                do {
                  iVar7 = iVar7 + 1;
                  if (DAT_004795a0 == iVar7) {
                    iVar7 = DAT_004795a0 + 1;
                    goto LAB_00432564;
                  }
                } while (uVar4 != (&DAT_004795c0)[iVar7]);
              }
            }
            DAT_004ce068 = DAT_004ce068 + 1;
          }
        }
      }
      if (DAT_00479684 != 0) {
        return;
      }
    }
    uVar2 = *(uint *)(param_2 + 0x2c);
    local_648 = local_648 + 1;
    if ((uVar2 >> 8 & 0xff00) + (uVar2 & 0xff00) * 0x100 + (uVar2 >> 0x18) + uVar2 * 0x1000000 <=
        local_648) {
      return;
    }
    pvVar8 = (void *)((int)pvVar8 + 0x60);
    if (0xff < DAT_004ce068) {
      return;
    }
  } while( true );
}

