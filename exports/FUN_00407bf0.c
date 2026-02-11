
void __cdecl FUN_00407bf0(char *param_1,byte *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  size_t sVar10;
  uint *puVar11;
  size_t _Size;
  undefined4 *puVar12;
  undefined4 *puVar13;
  ushort uVar14;
  ushort uVar15;
  uint *local_50;
  uint *local_3c;
  size_t local_24;
  uint local_20 [4];
  
  uVar5 = *(uint *)(DAT_0046f160 + 0x14);
  uVar8 = *(uint *)(DAT_0046f160 + 0x18);
  uVar1 = FUN_00421de0(param_2,0xffffffff);
  if (*(uint *)(DAT_0046f160 + 0x14) != 0x3000000) {
    uVar5 = *(uint *)(DAT_0046f160 + 0x14) / 0x4200 << 0xe;
    uVar8 = *(uint *)(DAT_0046f160 + 0x18) / 0x4200 << 0xe;
  }
  if (uVar1 == 0xffffffff) {
    FUN_00433690(0,
                 "\n\n***** ERROR: Invalid arguments specified, please provide hex only for offset!\n"
                );
    return;
  }
  FUN_00433690(0,"file: %s start offset 0x%x\n");
  local_50 = (uint *)FUN_00422670(param_1,&local_24);
  if ((local_50 == (uint *)0x0) || (local_24 == 0)) {
    FUN_00433690(0,"\n\n***** ERROR: Unable to read file %s!\n");
  }
  else if (uVar1 + local_24 < uVar5) {
    iVar6 = (int)((ulonglong)uVar1 % (ulonglong)uVar8);
    uVar15 = ((short)((local_24 + iVar6) / uVar8) + 1) - (ushort)((local_24 + iVar6) % uVar8 == 0);
    FUN_00433690(0,"Reading 0x%x blocks from console starting at block 0x%x (%d)...\n");
    uVar14 = (ushort)(((ulonglong)uVar1 % (ulonglong)uVar8) / (ulonglong)uVar8);
    puVar2 = (uint *)FUN_00420140(local_20,uVar14,uVar15);
    if ((puVar2 == (uint *)0x0) || (local_20[0] == 0)) {
      FUN_00433690(0,"\n\n***** ERROR: Reading data from console failed!\n");
      return;
    }
    FUN_00433690(0,"Success!\nPatching in binary data...");
    if (*(int *)(DAT_0046f160 + 0x14) == 0x3000000) {
      memcpy((undefined *)(iVar6 + (int)puVar2),local_50,local_24);
    }
    else {
      puVar7 = puVar2 + 0x80;
      local_3c = puVar2;
      if (0x1ff < iVar6) {
        uVar5 = iVar6 - 0x200U >> 9;
        iVar4 = uVar5 + 1;
        iVar6 = (iVar6 - 0x200U) + uVar5 * -0x200;
        puVar7 = puVar7 + iVar4 * 0x84;
        local_3c = puVar2 + iVar4 * 0x84;
      }
      sVar10 = local_24;
      if (iVar6 != 0) {
        _Size = 0x200 - iVar6;
        sVar10 = local_24 - _Size;
        memcpy((void *)(iVar6 + (int)local_3c),local_50,_Size);
        FUN_0040fbb0(local_3c,puVar7);
        local_50 = (uint *)((int)local_50 + _Size);
        local_3c = local_3c + 0x84;
        puVar7 = puVar7 + 0x84;
      }
      if (0x1ff < (int)sVar10) {
        uVar5 = sVar10 - 0x200;
        iVar6 = (uVar5 >> 9) + 1;
        puVar3 = puVar7 + iVar6 * 0x84;
        puVar9 = local_3c;
        puVar11 = local_50;
        do {
          *puVar9 = *puVar11;
          iVar4 = (int)puVar9 - (int)((uint)(puVar9 + 1) & 0xfffffffc);
          puVar9[0x7f] = puVar11[0x7f];
          puVar12 = (undefined4 *)((int)puVar11 - iVar4);
          puVar13 = (undefined4 *)((uint)(puVar9 + 1) & 0xfffffffc);
          for (uVar8 = iVar4 + 0x200U >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar13 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar13 = puVar13 + 1;
          }
          FUN_0040fbb0(puVar9,puVar7);
          puVar7 = puVar7 + 0x84;
          puVar9 = puVar9 + 0x84;
          puVar11 = puVar11 + 0x80;
        } while (puVar7 != puVar3);
        sVar10 = uVar5 + (uVar5 >> 9) * -0x200;
        local_50 = (uint *)((int)local_50 + (uVar5 & 0xfffffe00) + 0x200);
        local_3c = local_3c + iVar6 * 0x84;
      }
      if (sVar10 != 0) {
        if (sVar10 < 4) {
          if ((sVar10 != 0) && (*(char *)local_3c = (char)*local_50, (sVar10 & 2) != 0)) {
            *(undefined2 *)((int)local_3c + (sVar10 - 2)) =
                 *(undefined2 *)((int)local_50 + (sVar10 - 2));
          }
        }
        else {
          *local_3c = *local_50;
          iVar6 = (int)local_3c - (int)((uint)(local_3c + 1) & 0xfffffffc);
          *(undefined4 *)((int)local_3c + (sVar10 - 4)) =
               *(undefined4 *)((int)local_50 + (sVar10 - 4));
          puVar12 = (undefined4 *)((int)local_50 - iVar6);
          puVar13 = (undefined4 *)((uint)(local_3c + 1) & 0xfffffffc);
          for (uVar5 = iVar6 + sVar10 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar13 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar13 = puVar13 + 1;
          }
        }
        FUN_0040fbb0(local_3c,puVar7);
      }
    }
    FUN_00433690(0,"Done!\n");
    FUN_00433690(0,"Writing 0x%x blocks from console starting at block 0x%x...\n");
    iVar6 = FUN_00420200((int)puVar2,local_20[0],uVar14,uVar15);
    if (iVar6 == 0) {
      FUN_00433690(0,"\n\n***** ERROR: Writing data to console failed!\n");
    }
    else {
      FUN_00433690(0,"Success! Completed patching NAND!\n");
    }
  }
  else {
    FUN_00433690(0,
                 "\n\n***** ERROR: File %s size patched into offset 0x%x will exceed NAND system area (0x%x)!\n"
                );
  }
  return;
}

