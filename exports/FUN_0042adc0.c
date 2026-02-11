
undefined4 FUN_0042adc0(void)

{
  int *_Str1;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 extraout_ECX;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  if (DAT_004c4f98 < 2) {
    return 0;
  }
  uVar6 = 1;
  piVar5 = &DAT_004bc588;
  do {
    _Str1 = piVar5 + -0x103;
    iVar1 = _strnicmp((char *)_Str1,"none",4);
    if ((iVar1 == 0) && (piVar5[-3] == 0)) goto LAB_0042af50;
    iVar1 = piVar5[-2];
    switch(iVar1) {
    default:
      FUN_00433690(1,"####### unhandled bl load %d %s\n");
      break;
    case 2:
      if (DAT_0047a0e4 == 0) {
        FUN_00433690(0,"\n***** ERROR!: acquiring smc binary data failed!\n");
        goto LAB_0042aeb0;
      }
      FUN_00433690(1,"using smc binary from console\n");
      if ((void *)*piVar5 != (void *)0x0) {
        free((void *)*piVar5);
      }
      *piVar5 = DAT_0047a0e4;
      uVar3 = DAT_0047a0e8;
      piVar5[1] = DAT_0047a0e8;
      DAT_0047a0e4 = 0;
      DAT_0047a0e8 = 0;
      uVar3 = FUN_00410290(uVar3);
      piVar5[-1] = uVar3;
      if (uVar3 == 0) goto LAB_0042aeb0;
      break;
    case 3:
      if (DAT_0047a0ec == 0) {
LAB_0042b1c1:
        FUN_00433690(0,"\n***** ERROR!: acquiring keyvault data failed!\n");
        goto LAB_0042aeb0;
      }
      FUN_00433690(1,"using keyvault data from console\n");
      if ((void *)*piVar5 != (void *)0x0) {
        free((void *)*piVar5);
      }
      *piVar5 = DAT_0047a0ec;
      piVar5[1] = DAT_0047a0f0;
      DAT_0047a0ec = 0;
      DAT_0047a0f0 = 0;
      break;
    case 4:
      if (DAT_0047a0f4 == 0) goto LAB_0042b1c1;
      FUN_00433690(1,"using keyvault alt data from console\n");
      if ((void *)*piVar5 != (void *)0x0) {
        free((void *)*piVar5);
      }
      *piVar5 = DAT_0047a0f4;
      piVar5[1] = DAT_0047a0f8;
      DAT_0047a0f4 = 0;
      DAT_0047a0f8 = 0;
      break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0x11:
    case 0x12:
    case 0x13:
      FUN_00433690(1,"skipping %s%s as it is in glitch bootloader dump\n");
      break;
    case 9:
    case 10:
    case 0xf:
    case 0x10:
    case 0x14:
    case 0x15:
      iVar2 = FUN_00428040((char *)_Str1,(int)_Str1,1,0,(undefined1 *)0x0,0,0,1);
      if (iVar2 != 0) {
        if (iVar1 == 9) {
          iVar2 = FUN_0040c650(piVar5,piVar5 + 1);
        }
        else {
          if (iVar1 != 10) goto LAB_0042aeb0;
          iVar2 = FUN_0040c700(piVar5,piVar5 + 1);
        }
        if (iVar2 == 0) goto LAB_0042aeb0;
      }
      iVar1 = FUN_00429b30((byte *)*piVar5,piVar5[1],iVar1,piVar5[-3]);
      goto LAB_0042aea8;
    case 0x17:
      iVar1 = FUN_00428780((char *)_Str1);
      if (iVar1 != 0) goto LAB_0042aeb0;
      if ((piVar5[1] & 3U) != 0) {
        FUN_00433690(1,"\n\n***** ERROR: patch size 0x%x is not a multiple of 4!\n");
        goto LAB_0042aeb0;
      }
      FUN_00428b10((int)_Str1);
      break;
    case 0x18:
      if ((DAT_00479eb4 != 0) &&
         ((iVar1 = FUN_00427500(extraout_ECX,(int)_Str1), iVar1 != 0 || (piVar5[1] != 0x60)))) {
        puVar4 = (undefined4 *)malloc(0x60);
        *piVar5 = (int)puVar4;
        if (puVar4 == (undefined4 *)0x0) goto LAB_0042aeb0;
        piVar5[1] = 0x60;
        puVar7 = &DAT_0044a700;
        for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      break;
    case 0x19:
      if (((DAT_00479ea8 != 1) && (DAT_00479ea8 < 6)) &&
         (iVar1 = FUN_00427500(extraout_ECX,(int)_Str1), iVar1 != 0)) {
        FUN_00433690(1,"xell not found in perbuild directory, checking firmware /bin folder\n");
        iVar1 = FUN_00428780((char *)_Str1);
        if (iVar1 != 0) {
          FUN_00433690(1,"xell not found in firmware /bin folder, checking base path\n");
          iVar1 = FUN_004288c0((char *)_Str1);
          goto LAB_0042aea8;
        }
      }
      break;
    case 0x1b:
      if (DAT_0047a0fc == 0) {
        FUN_00433690(0,"\n***** ERROR!: acquiring smc configuration data failed!\n");
        goto LAB_0042aeb0;
      }
      FUN_00433690(1,"using smc configuration from console\n");
      if ((void *)(&DAT_004bc15c)[DAT_004c4f9c * 0x10b] != (void *)0x0) {
        free((void *)(&DAT_004bc15c)[DAT_004c4f9c * 0x10b]);
      }
      iVar2 = DAT_004c4f9c;
      uVar3 = DAT_0047a100;
      iVar1 = DAT_0047a0fc;
      DAT_0047a0fc = 0;
      DAT_0047a100 = 0;
      (&DAT_004bc15c)[DAT_004c4f9c * 0x10b] = iVar1;
      (&DAT_004bc160)[iVar2 * 0x10b] = uVar3;
      iVar1 = FUN_004297d0((int)_Str1,iVar1,uVar3);
LAB_0042aea8:
      if (iVar1 != 0) {
LAB_0042aeb0:
        FUN_00433690(0,"\n\n**** could not read %s (%i) ****\n\n");
        return 0xffffffff;
      }
    }
LAB_0042af50:
    uVar6 = uVar6 + 1;
    piVar5 = piVar5 + 0x10b;
    if (DAT_004c4f98 <= uVar6) {
      return 0;
    }
  } while( true );
}

