
bool __cdecl
FUN_00430fe0(uint param_1,char *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  iVar2 = FUN_00422ae0((byte *)(DAT_00479580 + 0x100),0x10);
  if ((iVar2 == 0x983) && (pbVar5 = (byte *)(DAT_00479580 + 0x100), DAT_0047957c != (FILE *)0x0)) {
    pbVar6 = (byte *)(DAT_00479580 + 0x110);
    fprintf(DAT_0047957c,"%s = ","1blkey");
    do {
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      fprintf(DAT_0047957c,"%02X",(uint)bVar1);
    } while (pbVar6 != pbVar5);
    fwrite(&DAT_0045b4cb,1,2,DAT_0047957c);
  }
  iVar2 = FUN_004223b0((char *)(DAT_00479580 + 0x20),0x10);
  if (iVar2 == 0) {
    pbVar5 = (byte *)(DAT_00479580 + 0x20);
    if (DAT_0047957c != (FILE *)0x0) {
      pbVar6 = (byte *)(DAT_00479580 + 0x30);
      fprintf(DAT_0047957c,"%s = ","cpukey");
      do {
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        fprintf(DAT_0047957c,"%02X",(uint)bVar1);
      } while (pbVar6 != pbVar5);
      fwrite(&DAT_0045b4cb,1,2,DAT_0047957c);
    }
    FUN_00433690(param_1,"CPU key         : ");
    FUN_00423370(param_1,DAT_00479580 + 0x20);
    FUN_0041ae40(param_1,(undefined4 *)(DAT_00479580 + 0x20));
    FUN_00433690(param_1,"\n");
  }
  if (DAT_0047957c != (FILE *)0x0) {
    fprintf(DAT_0047957c,"cfldv = %d;\n\n",(uint)*(byte *)(DAT_00479580 + 0x1c));
  }
  iVar2 = FUN_004223b0((char *)(DAT_00479580 + 0x30),0x10);
  if (iVar2 == 0) {
    pbVar5 = (byte *)(DAT_00479580 + 0x30);
    if (DAT_0047957c != (FILE *)0x0) {
      pbVar6 = (byte *)(DAT_00479580 + 0x40);
      fprintf(DAT_0047957c,"%s = ","dvdkey");
      do {
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        fprintf(DAT_0047957c,"%02X",(uint)bVar1);
      } while (pbVar6 != pbVar5);
      fwrite(&DAT_0045b4cb,1,2,DAT_0047957c);
    }
    FUN_00433690(param_1,"DVD key         : ");
    FUN_00423370(param_1,DAT_00479580 + 0x30);
    FUN_00433690(param_1,"\n");
  }
  FUN_00422ae0((byte *)(DAT_00479580 + 0x100),0x10);
  FUN_00433690(param_1,"1BL key         : ");
  FUN_00423370(param_1,DAT_00479580 + 0x100);
  FUN_00433690(param_1," (%s)\n");
  FUN_00433690(param_1,"Fuses           : ");
  iVar2 = FUN_004223b0((char *)(DAT_00479580 + 0x40),0x60);
  if (iVar2 == 0) {
    FUN_004232e0(param_1,"present");
  }
  else {
    FUN_00433690(param_1,"not present\n");
  }
  FUN_00433690(param_1,"Virtual Fuses   : ");
  iVar2 = FUN_004223b0((char *)(DAT_00479580 + 0xa0),0x60);
  if (iVar2 == 0) {
    FUN_004232e0(param_1,"present");
  }
  else {
    FUN_00433690(param_1,"not present\n");
  }
  iVar2 = FUN_00422ae0((byte *)(DAT_00479580 + 0x110),0x110);
  if (iVar2 == 0x79c7) {
    FUN_00433690(param_1,"1BL RSA pub     : %s\n");
    if (param_5 != 0) {
      DAT_0047a13c = DAT_00479580 + 0x110;
    }
    if (param_2 != (char *)0x0) {
      FUN_00420d80(param_2,"1BL_pub.bin",(void *)(DAT_00479580 + 0x110),0x110);
    }
  }
  else {
    FUN_00433690(param_1,"1BL RSA pub     : %s\n");
  }
  iVar2 = FUN_00422ae0((byte *)(DAT_00479580 + 0x220),0x110);
  if (iVar2 == 0x80d0) {
    FUN_00433690(param_1,"PIRS RSA pub    : %s\n");
    if (param_5 != 0) {
      DAT_0047a144 = DAT_00479580 + 0x220;
    }
    if (param_2 != (char *)0x0) {
      FUN_00420d80(param_2,"PIRS_pub.bin",(void *)(DAT_00479580 + 0x220),0x110);
      iVar2 = FUN_00422ae0((byte *)(DAT_00479580 + 0x330),0x110);
      if (iVar2 != 0x843c) {
        FUN_00433690(param_1,"MASTER RSA pub  : %s\n");
        goto LAB_0043123d;
      }
      FUN_00433690(param_1,"MASTER RSA pub  : %s\n");
      if (param_5 == 0) goto LAB_0043176c;
      pvVar4 = (void *)(DAT_00479580 + 0x330);
      DAT_0047a140 = pvVar4;
      goto LAB_0043162f;
    }
    iVar2 = FUN_00422ae0((byte *)(DAT_00479580 + 0x330),0x110);
    if (iVar2 == 0x843c) {
      FUN_00433690(param_1,"MASTER RSA pub  : %s\n");
      if (param_5 == 0) {
        return true;
      }
      DAT_0047a140 = (void *)(DAT_00479580 + 0x330);
      goto LAB_0043128b;
    }
    FUN_00433690(param_1,"MASTER RSA pub  : %s\n");
  }
  else {
    FUN_00433690(param_1,"PIRS RSA pub    : %s\n");
    iVar2 = FUN_00422ae0((byte *)(DAT_00479580 + 0x330),0x110);
    if (iVar2 == 0x843c) {
      FUN_00433690(param_1,"MASTER RSA pub  : %s\n");
      if (param_5 == 0) {
        if (param_2 == (char *)0x0) {
          return true;
        }
LAB_0043176c:
        pvVar4 = (void *)(DAT_00479580 + 0x330);
      }
      else {
        pvVar4 = (void *)(DAT_00479580 + 0x330);
        DAT_0047a140 = pvVar4;
        if (param_2 == (char *)0x0) goto LAB_0043128b;
      }
LAB_0043162f:
      FUN_00420d80(param_2,"MAST_pub.bin",pvVar4,0x110);
    }
    else {
      FUN_00433690(param_1,"MASTER RSA pub  : %s\n");
      if (param_2 == (char *)0x0) goto joined_r0x00431334;
    }
LAB_0043123d:
    iVar2 = FUN_004223b0((char *)(DAT_00479580 + 0x40),0x60);
    if (iVar2 == 0) {
      FUN_00420f10(param_2,"fuses.txt",DAT_00479580 + 0x40);
    }
    iVar2 = FUN_004223b0((char *)(DAT_00479580 + 0xa0),0x60);
    if (iVar2 == 0) {
      FUN_00420f10(param_2,"vfuses.txt",DAT_00479580 + 0xa0);
    }
  }
joined_r0x00431334:
  if (param_5 == 0) {
    return true;
  }
LAB_0043128b:
  FUN_00433690(param_1,"\n");
  iVar2 = FUN_0041b120(param_1,(undefined4 *)(DAT_00479580 + 0x20));
  iVar3 = FUN_0041b600((undefined4 *)(DAT_00479580 + 0x100));
  if (iVar3 != 1) {
    return false;
  }
  return iVar2 == 1;
}

