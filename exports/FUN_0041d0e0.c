
void __cdecl FUN_0041d0e0(int param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  char *_Dst;
  int iVar3;
  undefined4 *puVar4;
  undefined3 extraout_var;
  void *pvVar5;
  size_t sVar6;
  void *in_stack_00000030;
  byte *in_stack_00000034;
  void *in_stack_ffffffe0;
  void *in_stack_ffffffe4;
  int in_stack_ffffffe8;
  
  if (*(int *)(param_1 + 0x410) == 0x3ff0) {
    puVar4 = (undefined4 *)malloc(0x4000);
    pvVar5 = *(void **)(param_1 + 0x40c);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    memcpy(puVar4 + 4,pvVar5,0x3ff0);
    free(pvVar5);
    *(undefined4 **)(param_1 + 0x40c) = puVar4;
    *(undefined4 *)(param_1 + 0x410) = 0x4000;
  }
  else {
    if (*(int *)(param_1 + 0x410) != 0x4000) {
      FUN_00433690(0,
                   "\n******* ERROR: %s is not the correct size! Skipping verification and encryption!\n"
                  );
      return;
    }
    puVar4 = *(undefined4 **)(param_1 + 0x40c);
  }
  _Dst = (char *)malloc(0x4000);
  memcpy(_Dst,puVar4,0x4000);
  iVar3 = FUN_004223b0(_Dst,0x10);
  if (iVar3 == 0) {
    FUN_00434110((uint *)&DAT_0047a11c,0x10,_Dst + 0x10,*(int *)(param_1 + 0x410) - 0x10,
                 &stack0xffffffd2,2,(void *)0x0,0,(undefined4 *)&stack0xffffffd4,0x10);
    param_2 = in_stack_ffffffe8;
    iVar3 = memcmp(in_stack_ffffffe0,&stack0xffffffd4,0x10);
    if (iVar3 == 0) {
      sVar6 = *(size_t *)(param_1 + 0x410);
      pvVar5 = *(void **)(param_1 + 0x40c);
    }
    else {
      iVar3 = FUN_004223b0((char *)((int)in_stack_ffffffe0 + 0x38),0x58);
      if (iVar3 == 0) {
        FUN_00433690(1,"%s appears to be encrypted, attempting to decrypt...");
        memcpy(in_stack_ffffffe0,*(void **)(param_1 + 0x40c),*(size_t *)(param_1 + 0x410));
        bVar2 = FUN_00401630(in_stack_ffffffe0);
        if (CONCAT31(extraout_var,bVar2) == 0) {
          FUN_00433690(1,"Failed!\n%s could not be decrypted!\n");
          FUN_00433690(0,
                       "\n******* ERROR: could not decrypt %s, please be sure your provided a valid %s!\n"
                      );
          sVar6 = *(size_t *)(param_1 + 0x410);
          pvVar5 = *(void **)(param_1 + 0x40c);
          memcpy(in_stack_ffffffe0,pvVar5,sVar6);
        }
        else {
          FUN_00433690(1,"Success!\n");
          sVar6 = *(size_t *)(param_1 + 0x410);
          pvVar5 = *(void **)(param_1 + 0x40c);
        }
      }
      else {
        FUN_00433690(1,
                     "%s appears to be decrypted already, but the hash does not match the CPU key..."
                    );
        FUN_00433690(0,
                     "\n******* WARNING: could not verify pre-decrypted keyvault, please be sure your provided a valid %s!\n"
                    );
        sVar6 = *(size_t *)(param_1 + 0x410);
        pvVar5 = *(void **)(param_1 + 0x40c);
      }
    }
  }
  else {
    iVar3 = FUN_004223b0((char *)(*(int *)(param_1 + 0x40c) + 0x58),8);
    if (iVar3 == 0) {
      FUN_00433690(0,"\n******* ERROR: please be sure your provided a DEcrypted %s!\n");
      sVar6 = *(size_t *)(param_1 + 0x410);
      pvVar5 = *(void **)(param_1 + 0x40c);
    }
    else {
      sVar6 = *(size_t *)(param_1 + 0x410);
      pvVar5 = *(void **)(param_1 + 0x40c);
    }
  }
  memcpy(pvVar5,in_stack_ffffffe0,sVar6);
  uVar1 = DAT_0044a644;
  if (param_2 == 0) {
    FUN_004131a0(*(void **)(param_1 + 0x40c));
    uVar1 = DAT_0044a650;
    puVar4 = *(undefined4 **)(param_1 + 0x40c);
    iVar3 = *(int *)(param_1 + 0x410);
    puVar4[4] = DAT_0044a64c;
    sVar6 = iVar3 - 0x10;
    puVar4[5] = uVar1;
    FUN_00434110((uint *)&DAT_0047a11c,0x10,puVar4 + 4,sVar6,in_stack_ffffffe4,2,(void *)0x0,0,
                 puVar4,0x10);
    FUN_00434110((uint *)&DAT_0047a11c,0x10,puVar4,0x10,(void *)0x0,0,(void *)0x0,0,
                 (undefined4 *)&stack0xffffffd4,0x10);
    FUN_004345b0((int)&stack0xffffffd4,0x10,(byte *)(puVar4 + 4),sVar6);
  }
  else {
    puVar4 = *(undefined4 **)(param_1 + 0x40c);
    iVar3 = *(int *)(param_1 + 0x410);
    puVar4[5] = DAT_0044a648;
    puVar4[4] = uVar1;
    sVar6 = iVar3 - 0x10;
    FUN_00434110((uint *)&DAT_0047a11c,0x10,puVar4 + 4,sVar6,in_stack_ffffffe4,2,(void *)0x0,0,
                 puVar4,0x10);
    FUN_00434110((uint *)&DAT_0047a11c,0x10,puVar4,0x10,(void *)0x0,0,(void *)0x0,0,
                 (undefined4 *)&stack0xffffffd4,0x10);
    FUN_004345b0((int)&stack0xffffffd4,0x10,in_stack_00000034,sVar6);
  }
  free(in_stack_00000030);
  return;
}

