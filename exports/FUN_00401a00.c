
uint __cdecl FUN_00401a00(void *param_1,uint param_2)

{
  byte *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EDI;
  int in_stack_0000002c;
  byte bVar5;
  
  if (0x20000 < param_2) {
    return 0;
  }
  _Dst = (byte *)malloc(param_2);
  memcpy(_Dst,param_1,param_2);
  if (((*_Dst & 0x43) == 0x43) && (_Dst[1] == 0x46)) {
    uVar4 = FUN_00420ad0((uint *)(_Dst + 0xc));
    uVar4 = uVar4 + 0xf & 0xfffffff0;
    if (param_2 < uVar4) {
LAB_00401b92:
      bVar5 = 0;
      uVar4 = 0;
    }
    else {
      FUN_00434110((uint *)&DAT_0047a10c,0x10,_Dst + 0x20,0x10,(void *)0x0,0,(void *)0x0,0,
                   (undefined4 *)&stack0xffffffd4,0x10);
      FUN_004345b0(unaff_EDI,0x10,_Dst + 0x30,uVar4 - 0x30);
      iVar2 = FUN_004223b0((char *)(_Dst + 0x1f0),0x20);
      if (iVar2 == 0) goto LAB_00401b92;
      uVar4 = FUN_00420ad0((uint *)(_Dst + 0x21c));
      if (uVar4 == 0) goto LAB_00401a4c;
      bVar5 = (byte)uVar4;
      FUN_00433690(1,"CF slot 0 decrypted ok LDV 0x%02x Pairing: 0x%06x\n");
    }
    memcpy(_Dst,(void *)(in_stack_0000002c + param_2),param_2);
    if (((*_Dst & 0x43) == 0x43) && (_Dst[1] == 0x46)) goto LAB_00401a90;
  }
  else {
LAB_00401a4c:
    memcpy(_Dst,(void *)(in_stack_0000002c + param_2),param_2);
    if (((*_Dst & 0x43) != 0x43) || (_Dst[1] != 0x46)) {
      free(_Dst);
      return 0;
    }
    uVar4 = 0;
    bVar5 = 0;
LAB_00401a90:
    uVar1 = FUN_00420ad0((uint *)(_Dst + 0xc));
    uVar1 = uVar1 + 0xf & 0xfffffff0;
    if (uVar1 <= param_2) {
      FUN_00434110((uint *)&DAT_0047a10c,0x10,_Dst + 0x20,0x10,(void *)0x0,0,(void *)0x0,0,
                   (undefined4 *)&stack0xfffffffc,0x10);
      FUN_004345b0((int)&stack0xfffffffc,0x10,_Dst + 0x30,uVar1 - 0x30);
      iVar2 = FUN_004223b0((char *)(_Dst + 0x1f0),0x20);
      if (iVar2 != 0) {
        uVar1 = FUN_00420ad0((uint *)(_Dst + 0x21c));
        if (uVar1 == 0) {
          uVar3 = 0;
        }
        else {
          FUN_00433690(1,"CF slot 1 decrypted ok LDV 0x%02x Pairing: 0x%06x\n");
          uVar3 = uVar1;
        }
        goto LAB_00401bc8;
      }
    }
  }
  uVar1 = 0;
  uVar3 = 0;
LAB_00401bc8:
  free(_Dst);
  if (bVar5 <= (byte)uVar3) {
    uVar4 = uVar1;
  }
  return uVar4;
}

