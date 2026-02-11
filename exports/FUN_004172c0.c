
void FUN_004172c0(void)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = DAT_00479f4c;
  uVar5 = *(uint *)(DAT_00479f4c + 8);
  uVar5 = (uVar5 & 0xff00) * 0x100 + (uVar5 >> 0x18) + uVar5 * 0x1000000 + (uVar5 >> 8 & 0xff00);
  if (DAT_00479f54 <= uVar5) {
    FUN_00433690(1,"**** Warning: error getting CB/CBA Nonce offset, aborting!\n");
    return;
  }
  puVar1 = (ushort *)(DAT_00479f4c + uVar5);
  if ((ushort)((*puVar1 & 0x43) << 8 | *puVar1 >> 8) != 0x4342) {
    FUN_00433690(1,"**** Warning: error getting CB/CBA Nonce, aborting!\n");
    return;
  }
  FUN_0041ac70((undefined4 *)(DAT_00479f4c + 0x10 + uVar5));
  uVar3 = *(uint *)(puVar1 + 6);
  uVar5 = uVar5 + ((uVar3 >> 8 & 0xff00) +
                   (uVar3 & 0xff00) * 0x100 + uVar3 * 0x1000000 + 0xf + (uVar3 >> 0x18) & 0xfffffff0
                  );
  if ((puVar1[3] & 8) != 0) {
    if (DAT_00479f54 <= uVar5) {
      FUN_00433690(1,"**** Warning: error getting CBB Nonce offset, aborting!\n");
      return;
    }
    puVar1 = (ushort *)(DAT_00479f4c + uVar5);
    uVar2 = *puVar1;
    if ((ushort)((uVar2 & 0x43) << 8 | uVar2 >> 8) != 0x4342) {
      FUN_00433690(1,"**** Warning: error getting CBB Nonce, offset 0x%x aborting!\n");
      return;
    }
    FUN_0041aca0((undefined4 *)(DAT_00479f4c + 0x10 + uVar5));
    uVar3 = *(uint *)(puVar1 + 6);
    uVar5 = uVar5 + ((uVar3 >> 8 & 0xff00) +
                     (uVar3 & 0xff00) * 0x100 + uVar3 * 0x1000000 + 0xf + (uVar3 >> 0x18) &
                    0xfffffff0);
  }
  if (uVar5 < DAT_00479f54) {
    puVar1 = (ushort *)(DAT_00479f4c + uVar5);
    uVar2 = *puVar1;
    if ((ushort)((uVar2 & 0x43) << 8 | uVar2 >> 8) == 0x4344) {
      FUN_0041acd0((undefined4 *)(DAT_00479f4c + 0x10 + uVar5));
      uVar3 = *(uint *)(puVar1 + 6);
      uVar5 = uVar5 + (uVar3 * 0x1000000 + 0xf + (uVar3 >> 0x18) + (uVar3 & 0xff00) * 0x100 +
                       (uVar3 >> 8 & 0xff00) & 0xfffffff0);
      if (uVar5 < DAT_00479f54) {
        if ((ushort)((*(ushort *)(DAT_00479f4c + uVar5) & 0x43) << 8 |
                    *(ushort *)(DAT_00479f4c + uVar5) >> 8) == 0x4345) {
          FUN_0041ad00((undefined4 *)(DAT_00479f4c + 0x10 + uVar5));
          uVar5 = *(uint *)(iVar4 + 100);
          uVar5 = (uVar5 & 0xff00) * 0x100 + (uVar5 >> 0x18) + uVar5 * 0x1000000 +
                  (uVar5 >> 8 & 0xff00);
          if (uVar5 < DAT_00479f54) {
            puVar1 = (ushort *)(DAT_00479f4c + uVar5);
            uVar2 = *puVar1;
            if ((ushort)((uVar2 & 0x43) << 8 | uVar2 >> 8) == 0x4346) {
              FUN_0041ad30((undefined4 *)(DAT_00479f4c + 0x20 + uVar5));
              uVar3 = *(uint *)(puVar1 + 6);
              uVar5 = uVar5 + (uVar3 * 0x1000000 + 0xf + (uVar3 >> 0x18) + (uVar3 & 0xff00) * 0x100
                               + (uVar3 >> 8 & 0xff00) & 0xfffffff0);
              if (uVar5 < DAT_00479f54) {
                if ((ushort)((*(ushort *)(DAT_00479f4c + uVar5) & 0x43) << 8 |
                            *(ushort *)(DAT_00479f4c + uVar5) >> 8) == 0x4347) {
                  FUN_0041ad60((undefined4 *)(DAT_00479f4c + 0x10 + uVar5));
                  DAT_00479ec0 = 0;
                }
                else {
                  FUN_00433690(1,"**** Warning: error getting CG Nonce, offset 0x%x aborting!\n");
                }
              }
              else {
                FUN_00433690(1,"**** Warning: error getting CG Nonce offset, aborting!\n");
              }
            }
            else {
              FUN_00433690(1,"**** Warning: error getting CF Nonce, offset 0x%x aborting!\n");
            }
          }
          else {
            FUN_00433690(1,"**** Warning: error getting CF Nonce offset, aborting!\n");
          }
        }
        else {
          FUN_00433690(1,"**** Warning: error getting CE Nonce, offset 0x%x aborting!\n");
        }
      }
      else {
        FUN_00433690(1,"**** Warning: error getting CE Nonce offset, aborting!\n");
      }
    }
    else {
      FUN_00433690(1,"**** Warning: error getting CD Nonce, offset 0x%x aborting!\n");
    }
  }
  else {
    FUN_00433690(1,"**** Warning: error getting CD Nonce offset, aborting!\n");
  }
  return;
}

