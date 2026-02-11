
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004131a0(void *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  
  memcpy(&DAT_00470a20,param_1,0x4000);
  DAT_004709ec = 1;
  DAT_004709f0 = &DAT_00470a20;
  FUN_00433690(1,"decrypted keyvault has been set for reference\n");
  uVar5 = DAT_00470a00;
  uVar4 = DAT_004709fc;
  uVar3 = DAT_004709f8;
  uVar2 = _DAT_004709f4;
  puVar1 = DAT_004709f0;
  if (DAT_004709e8 != 0) {
    if (DAT_00479ea8 == 1) {
      FUN_00433690(1,"retail image, skipping patching dvd key\n");
    }
    else {
      *(undefined4 *)((int)param_1 + 0x100) = _DAT_004709f4;
      *(undefined4 *)((int)param_1 + 0x104) = uVar3;
      *(undefined4 *)((int)param_1 + 0x108) = uVar4;
      *(undefined4 *)((int)param_1 + 0x10c) = uVar5;
      *(undefined4 *)(puVar1 + 0x100) = uVar2;
      *(undefined4 *)(puVar1 + 0x104) = uVar3;
      *(undefined4 *)(puVar1 + 0x108) = uVar4;
      *(undefined4 *)(puVar1 + 0x10c) = uVar5;
      FUN_00433690(1,"dvd key patched into keyvault\n");
    }
  }
  iVar7 = 0x1df8;
  if (DAT_004709ec != 0) {
    do {
      uVar6 = FUN_00420ad0((uint *)(DAT_004709f0 + iVar7));
      if (uVar6 - 1 < 0xfffffffe) {
        if (DAT_0047a140 == 0) {
          FUN_00433690(1,"Master RSA pub not available, not checking hash\n");
          DAT_004709e0 = 1;
          DAT_004709e4 = 1;
          return;
        }
        iVar7 = FUN_0040e520(0x470a20,DAT_0047a140,(uint *)&DAT_0047a11c);
        if (iVar7 == 0) {
          DAT_004709e0 = 2;
          FUN_00433690(0,
                       "***** WARNING: Keyvault hash is not good! Keyvault may be corrupt or does not belong to this CPU key!\n"
                      );
          DAT_004709e4 = 1;
          return;
        }
        DAT_004709e0 = 3;
        FUN_00433690(1,"Keyvault hash is good!\n");
        DAT_004709e4 = 1;
        return;
      }
      iVar7 = iVar7 + 4;
    } while (iVar7 != 0x1e38);
  }
  DAT_004709e4 = 0;
  return;
}

