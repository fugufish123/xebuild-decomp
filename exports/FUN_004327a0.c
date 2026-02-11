
undefined4 __cdecl FUN_004327a0(char *param_1,uint *param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 local_30 [8];
  
  if (0xfe9c < param_3 - 0x164U) {
    FUN_00433690(1,"manifest size error! len 0x%x\n");
    return 0;
  }
  uVar1 = param_2[0x52];
  if ((uVar1 >> 8 & 0xff00) + (uVar1 & 0xff00) * 0x100 + (uVar1 >> 0x18) + uVar1 * 0x1000000 == 3) {
    uVar1 = param_2[0x4e];
    iVar2 = (uVar1 >> 8 & 0xff00) + (uVar1 & 0xff00) * 0x100 + (uVar1 >> 0x18) + uVar1 * 0x1000000;
    if ((iVar2 == 0x7873796d) || (iVar2 == 0x786f6e6d)) {
      uVar1 = *param_2;
      if ((uVar1 >> 8 & 0xff00) + (uVar1 & 0xff00) * 0x100 + (uVar1 >> 0x18) + uVar1 * 0x1000000 ==
          0x584d4e50) {
        uVar1 = param_2[0x4f];
        FUN_00434a30(param_2 + 0x4e,
                     (uVar1 >> 8 & 0xff00) +
                     (uVar1 & 0xff00) * 0x100 + (uVar1 >> 0x18) + uVar1 * 0x1000000,(void *)0x0,0,
                     (void *)0x0,0,local_30,0x14);
        iVar2 = memcmp(local_30,param_2 + 9,0x14);
        if (iVar2 == 0) {
          uVar1 = param_2[0x53];
          DAT_00479680 = (uVar1 >> 8 & 0xff00) +
                         (uVar1 & 0xff00) * 0x100 + (uVar1 >> 0x18) + uVar1 * 0x1000000;
          FUN_00433690(1,"header ok!\nManifest flash version: %d.%d.%d.%d\n");
          if (DAT_00479680 != param_4) {
            FUN_00433690(0,
                         "\n\n***** ERROR: this system extended data is not the correct version!\n")
            ;
            return 0;
          }
          FUN_00432190(param_1,(int)(param_2 + 0x4e),param_3 + -0x138,param_4);
          if (DAT_00479684 != 0) {
            FUN_00433690(0,"\n\n***** ERROR: loading manifest content encountered problems!\n");
            return 0;
          }
          FUN_00433690(1,"found %d items to send to xbox!\n");
          return 1;
        }
        FUN_00433690(1,"manifest checksum failed!\n");
      }
      else {
        FUN_00433690(1,"manifest magic 0x%08x != 0x584D4E50!\n");
      }
    }
    else {
      FUN_00433690(1,"manifest revision 0x%08x != 0x786F6E6D|0x7873796D!\n");
    }
  }
  else {
    FUN_00433690(1,"manifest schema != 3!\n");
  }
  FUN_00433690(1,"manifest header check failed!\n");
  return 0;
}

