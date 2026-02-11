
void FUN_00406c60(void)

{
  byte *pbVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  undefined3 extraout_var_00;
  size_t local_10 [3];
  
  if (*DAT_0046f160 < 2) {
    FUN_00433690(0,
                 "\n\n****** ERROR: console patches need to be updated to support this operation!\n"
                );
    return;
  }
  pbVar1 = DAT_0046f160 + 0x100;
  local_10[0] = 0x10;
  FUN_00433690(0,"checking %s (file ./%s)\n");
  bVar2 = FUN_004225a0("1blkey.txt");
  if (CONCAT31(extraout_var,bVar2) != 0) {
    FUN_00422670("1blkey.txt",local_10);
  }
  iVar3 = FUN_00422ae0(pbVar1,local_10[0]);
  if (iVar3 == 0x983) {
    FUN_00433690(0,"dumping valid %s to file ./%s\n");
    if (local_10[0] == 0x10) {
      iVar3 = FUN_00420e40("./","1blkey.txt",pbVar1);
    }
    else {
      bVar2 = FUN_00420d80("./","1blkey.txt",pbVar1,local_10[0]);
      iVar3 = CONCAT31(extraout_var_00,bVar2);
    }
    if (iVar3 != 0) goto LAB_00406cf7;
  }
  FUN_00433690(0,
               "\n\n****** ERROR: unable to dump %s to file ./%s, key is not valid or file is inaccessible!\n"
              );
LAB_00406cf7:
  FUN_00406b60("1BL RSA pub key","1BL_pub.bin",DAT_0046f160 + 0x110,0x110,0x79c7);
  FUN_00406b60("PIRS RSA pub key","PIRS_pub.bin",DAT_0046f160 + 0x220,0x110,0x80d0);
  FUN_00406b60("MASTER RSA pub key","MAST_pub.bin",DAT_0046f160 + 0x330,0x110,0x843c);
  return;
}

