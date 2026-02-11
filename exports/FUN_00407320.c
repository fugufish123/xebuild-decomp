
void __cdecl FUN_00407320(char *param_1)

{
  uint uVar1;
  char *_Buf1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  size_t local_424;
  size_t local_420;
  char local_41c [1036];
  
  uVar1 = *(uint *)(DAT_0046f160 + 0xc);
  if ((int)uVar1 < 0) {
    uVar4 = 1;
    if (param_1 != (char *)0x0) goto LAB_0040735a;
    puVar3 = FUN_00420a90((uVar1 & 0xf) + 1);
    sprintf(local_41c,"%d/bin/patches_%s.bin",(uint)*(ushort *)(DAT_0046f160 + 5),puVar3);
  }
  else if ((uVar1 & 0x20000000) == 0) {
    if ((uVar1 & 0x10000000) == 0) {
      if ((uVar1 & 0x40000000) == 0) {
        FUN_00433690(0,"\n***** ERROR: unable to determine console hack type!\n");
        return;
      }
      uVar4 = 2;
    }
    else {
      uVar4 = 3;
    }
    if (param_1 != (char *)0x0) goto LAB_0040735a;
    if ((uVar1 & 0x10000000) == 0) {
      if ((uVar1 & 0x40000000) != 0) {
        sprintf(local_41c,"%d/bin/patches_fat.bin",(uint)*(ushort *)(DAT_0046f160 + 5));
      }
    }
    else {
      puVar3 = FUN_00420a90((uVar1 & 0xf) + 1);
      sprintf(local_41c,"%d/bin/patches_g2m%s.bin",(uint)*(ushort *)(DAT_0046f160 + 5),puVar3);
    }
  }
  else {
    uVar4 = 2;
    if (param_1 != (char *)0x0) {
LAB_0040735a:
      strcpy(local_41c,param_1);
      FUN_00433690(0,"Updating patches from file: %s\n");
      goto LAB_00407382;
    }
    puVar3 = FUN_00420a90((uVar1 & 0xf) + 1);
    sprintf(local_41c,"%d/bin/patches_g2%s.bin",(uint)*(ushort *)(DAT_0046f160 + 5),puVar3);
  }
  FUN_00433690(0,"Updating patches in auto mode: %s\n");
LAB_00407382:
  _Buf1 = (char *)FUN_00422670(local_41c,&local_424);
  if (_Buf1 != (char *)0x0) {
    if (local_424 == 0) {
      FUN_00433690(0,"\n\n***** ERROR: %s exists but is 0 len, aborting\n");
    }
    else {
      FUN_00433690(0,"loaded %s size 0x%x (%d) bytes\n");
      iVar2 = FUN_00406e50(_Buf1,(int *)&local_424,uVar4);
      if (iVar2 != 0) {
        FUN_00433690(0,"retrieving patches from console...");
        puVar3 = FUN_0041fd60("patches");
        if (puVar3 == (undefined *)0x0) {
          FUN_00433690(0,"\n\n***** ERROR: failed to retrieve current patches from console!\n");
        }
        else {
          FUN_00433690(1,"success! received 0x%x (%d) bytes\n");
          if ((local_424 == local_420) && (iVar2 = memcmp(_Buf1,puVar3,local_424), iVar2 == 0)) {
            FUN_00433690(0,"patches are already up to date!\n");
          }
          else {
            FUN_00433690(0,"sending update patches to console...");
            iVar2 = FUN_00420910((int)_Buf1,local_424);
            if (iVar2 == 0) {
              FUN_00433690(0,"\n\n***** ERROR: patch update failed!\n");
            }
            else {
              FUN_00433690(0,"patches updated OK!\n");
            }
          }
        }
      }
    }
    free(_Buf1);
    return;
  }
  FUN_00433690(0,"\n\n***** ERROR: could not load %s, aborting\n");
  return;
}

