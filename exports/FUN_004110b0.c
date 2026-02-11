
uint __cdecl FUN_004110b0(void *param_1,uint param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (DAT_00479ef0 == 0) {
    DAT_0046f9c0 = DAT_004cd840;
    if ((DAT_004cd840 & 0x3fff) != 0) {
      DAT_0046f9c0 = (DAT_004cd840 + 0x4000) - (DAT_004cd840 & 0x3fff);
    }
    if (param_2 + DAT_0046f9c0 <= (uint)((DAT_00479ef8 + 0x3ffff) * 0x4000)) {
      FUN_00433690(1,"\tadding Mobile%c.dat as type 0x%x at raw offset 0x%x len 0x%x (end 0x%x)\n");
      uVar1 = DAT_0046f9c0 >> 0xe;
      FUN_00410500(DAT_0046f9c0,param_1,param_2,param_3,0x1ffe,0);
      return uVar1;
    }
    goto LAB_004111ea;
  }
  if (DAT_0046f9c0 == 0) {
    DAT_0046f9c0 = DAT_004cd840;
    if ((DAT_004cd840 & 0x3fff) != 0) {
      DAT_0046f9c0 = (DAT_004cd840 + 0x4000) - (DAT_004cd840 & 0x3fff);
    }
    if ((DAT_0046f9c0 & 0x1ffff) != 0) {
      DAT_0046f9c0 = DAT_0046f9c0 + 0x20000 & 0xfffe0000;
    }
LAB_00411109:
    uVar1 = param_2 + DAT_0046f9c0;
  }
  else {
    uVar1 = DAT_0046f9c0 + param_2;
    if ((DAT_0046f9c0 & 0xfffe0000) + 0x20000 < uVar1) {
      DAT_0046f9c0 = DAT_0046f9c0 + 0x20000 & 0xfffe0000;
      goto LAB_00411109;
    }
  }
  if (uVar1 <= (uint)((DAT_00479ef8 + 0x3ffff) * 0x4000)) {
    FUN_00433690(1,"\tadding Mobile%c.dat as type 0x%x at raw offset 0x%x len 0x%x (end 0x%x)\n");
    FUN_00410500(DAT_0046f9c0,param_1,param_2,param_3,0x1ffe,0);
    uVar1 = param_2 + DAT_0046f9c0;
    uVar2 = DAT_0046f9c0 >> 0x11;
    if ((uVar1 & 0x7ff) != 0) {
      uVar1 = uVar1 + 0x800 & 0xfffff800;
    }
    DAT_0046f9c0 = uVar1;
    return uVar2;
  }
LAB_004111ea:
  FUN_00433690(0,
               "\n******* ERROR: adding Mobile%c.dat will exceed available flash space! Skipped!\n\n"
              );
  return 0;
}

