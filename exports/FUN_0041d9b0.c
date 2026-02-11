
void __cdecl FUN_0041d9b0(int param_1,int param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  
  if (*(int *)(param_1 + 0x410) == 0x400) {
    pvVar2 = *(void **)(param_1 + 0x40c);
  }
  else {
    if (*(int *)(param_1 + 0x410) == 0) {
      FUN_00433690(1,
                   "******* WARNING: secdata.bin was not provided or was invalid! Making up an clean/empty secdata.bin!\n"
                  );
    }
    else {
      FUN_00433690(1,
                   "******* WARNING: secdata.bin is not the correct size! Making up an clean/empty secdata.bin!\n"
                  );
    }
    free(*(void **)(param_1 + 0x40c));
    *(undefined4 *)(param_1 + 0x410) = 0x400;
    pvVar2 = calloc(0x400,1);
    *(void **)(param_1 + 0x40c) = pvVar2;
  }
  uVar1 = DAT_0044a5e4;
  *(undefined4 *)((int)pvVar2 + 0x10) = DAT_0044a5e0;
  *(undefined4 *)((int)pvVar2 + 0x14) = uVar1;
  FUN_004223f0((undefined1 *)(*(int *)(param_1 + 0x40c) + 0x20),param_2,8);
  *(undefined1 *)(*(int *)(param_1 + 0x40c) + 0x18) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x40c) + 0x19) = DAT_00479f15;
  FUN_00434110((uint *)&DAT_0047a11c,0x10,*(undefined4 **)(param_1 + 0x40c) + 4,
               *(int *)(param_1 + 0x410) - 0x10,(void *)0x0,0,(void *)0x0,0,
               *(undefined4 **)(param_1 + 0x40c),0x10);
  FUN_00434110((uint *)&DAT_0047a11c,0x10,*(void **)(param_1 + 0x40c),0x10,(void *)0x0,0,(void *)0x0
               ,0,(undefined4 *)&stack0xffffffe4,0x10);
  FUN_004345b0((int)&stack0xffffffe4,0x10,(byte *)(*(int *)(param_1 + 0x40c) + 0x10),
               *(int *)(param_1 + 0x410) - 0x10);
  return;
}

