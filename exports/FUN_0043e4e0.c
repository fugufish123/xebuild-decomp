
undefined4 __cdecl FUN_0043e4e0(uint *param_1,int param_2,uint *param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0x20) {
LAB_0043e540:
    uVar1 = FUN_0043d9a0(param_1,param_3);
    return uVar1;
  }
  if (param_2 < 0x21) {
    if (param_2 != 0x10) {
      if (param_2 != 0x18) {
        return 1;
      }
      goto LAB_0043e51a;
    }
  }
  else {
    if (param_2 == 0xc0) {
LAB_0043e51a:
      uVar1 = FUN_0043d150(param_1,param_3);
      return uVar1;
    }
    if (param_2 == 0x100) goto LAB_0043e540;
    if (param_2 != 0x80) {
      return 1;
    }
  }
  uVar1 = FUN_0043cae0(param_1,param_3);
  return uVar1;
}

