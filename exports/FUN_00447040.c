
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x004471eb) */
/* WARNING: Removing unreachable block (ram,0x00447360) */
/* WARNING: Removing unreachable block (ram,0x004471f4) */
/* WARNING: Removing unreachable block (ram,0x00447201) */
/* WARNING: Removing unreachable block (ram,0x0044720a) */
/* WARNING: Removing unreachable block (ram,0x00447365) */
/* WARNING: Removing unreachable block (ram,0x0044736f) */
/* WARNING: Removing unreachable block (ram,0x0044737a) */
/* WARNING: Removing unreachable block (ram,0x0044721c) */
/* WARNING: Removing unreachable block (ram,0x00447221) */
/* WARNING: Removing unreachable block (ram,0x0044722d) */
/* WARNING: Removing unreachable block (ram,0x0044723c) */
/* WARNING: Removing unreachable block (ram,0x0044723f) */
/* WARNING: Removing unreachable block (ram,0x0044737f) */
/* WARNING: Removing unreachable block (ram,0x00447395) */
/* WARNING: Removing unreachable block (ram,0x00447398) */
/* WARNING: Removing unreachable block (ram,0x00447266) */
/* WARNING: Removing unreachable block (ram,0x004473f7) */
/* WARNING: Removing unreachable block (ram,0x0044726f) */
/* WARNING: Removing unreachable block (ram,0x00447278) */
/* WARNING: Removing unreachable block (ram,0x00447288) */
/* WARNING: Removing unreachable block (ram,0x0044728d) */
/* WARNING: Removing unreachable block (ram,0x00447299) */
/* WARNING: Removing unreachable block (ram,0x004472a0) */
/* WARNING: Removing unreachable block (ram,0x004472c9) */
/* WARNING: Removing unreachable block (ram,0x004473d0) */
/* WARNING: Removing unreachable block (ram,0x004473de) */
/* WARNING: Removing unreachable block (ram,0x004473e1) */
/* WARNING: Removing unreachable block (ram,0x004473b4) */
/* WARNING: Removing unreachable block (ram,0x004473c3) */
/* WARNING: Removing unreachable block (ram,0x004472d1) */
/* WARNING: Removing unreachable block (ram,0x004472ef) */
/* WARNING: Removing unreachable block (ram,0x00447306) */
/* WARNING: Removing unreachable block (ram,0x0044740e) */
/* WARNING: Removing unreachable block (ram,0x00447433) */
/* WARNING: Removing unreachable block (ram,0x004474b0) */
/* WARNING: Removing unreachable block (ram,0x004474e0) */
/* WARNING: Removing unreachable block (ram,0x004475a1) */
/* WARNING: Removing unreachable block (ram,0x004474b7) */
/* WARNING: Removing unreachable block (ram,0x004474c2) */
/* WARNING: Removing unreachable block (ram,0x00447463) */
/* WARNING: Removing unreachable block (ram,0x00447520) */
/* WARNING: Removing unreachable block (ram,0x00447539) */
/* WARNING: Removing unreachable block (ram,0x004474fd) */
/* WARNING: Removing unreachable block (ram,0x00447501) */
/* WARNING: Removing unreachable block (ram,0x0044746e) */
/* WARNING: Removing unreachable block (ram,0x00447560) */
/* WARNING: Removing unreachable block (ram,0x0044756b) */
/* WARNING: Removing unreachable block (ram,0x004475e0) */
/* WARNING: Removing unreachable block (ram,0x00447584) */
/* WARNING: Removing unreachable block (ram,0x0044758c) */
/* WARNING: Removing unreachable block (ram,0x00447479) */
/* WARNING: Removing unreachable block (ram,0x004475c0) */
/* WARNING: Removing unreachable block (ram,0x00447496) */
/* WARNING: Removing unreachable block (ram,0x0044749a) */
/* WARNING: Removing unreachable block (ram,0x004474c9) */
/* WARNING: Removing unreachable block (ram,0x004474d2) */
/* WARNING: Removing unreachable block (ram,0x0044750f) */
/* WARNING: Removing unreachable block (ram,0x0044732c) */
/* WARNING: Removing unreachable block (ram,0x004472e0) */
/* WARNING: Removing unreachable block (ram,0x004472d5) */
/* WARNING: Enum "SectionFlags": Some values do not have unique names */

int * FUN_00447040(void)

{
  int *in_EAX;
  IMAGE_SECTION_HEADER *pIVar1;
  int iVar2;
  SIZE_T SVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  PDWORD lpflOldProtect;
  undefined4 *puVar7;
  undefined1 auStackY_6d [45];
  PDWORD pDStackY_40;
  _MEMORY_BASIC_INFORMATION local_28;
  
  if ((int)DAT_00479e40 < 1) {
    lpflOldProtect = (PDWORD)0x0;
  }
  else {
    lpflOldProtect = (PDWORD)0x0;
    puVar6 = (uint *)(DAT_00479e44 + 4);
    do {
      if (((int *)*puVar6 <= in_EAX) && (in_EAX < (int *)((int)*puVar6 + *(int *)(puVar6[1] + 8))))
      {
        return in_EAX;
      }
      lpflOldProtect = (PDWORD)((int)lpflOldProtect + 1);
      puVar6 = puVar6 + 3;
    } while (lpflOldProtect != DAT_00479e40);
  }
  pDStackY_40 = (PDWORD)0x447088;
  pIVar1 = FUN_00447990((int)in_EAX);
  if (pIVar1 != (IMAGE_SECTION_HEADER *)0x0) {
    lpflOldProtect = (PDWORD)((int)lpflOldProtect * 0xc);
    puVar7 = (undefined4 *)(DAT_00479e44 + (int)lpflOldProtect);
    puVar7[2] = pIVar1;
    *puVar7 = 0;
    pDStackY_40 = (PDWORD)0x4470ae;
    iVar2 = FUN_00447aa0();
    puVar7[1] = iVar2 + pIVar1->VirtualAddress;
    pDStackY_40 = (PDWORD)0x4470d6;
    SVar3 = VirtualQuery(*(LPCVOID *)(DAT_00479e44 + 4 + (int)lpflOldProtect),&local_28,0x1c);
    if (SVar3 != 0) {
      if ((((uint)(local_28.Protect + -4) & 0xfffffffb) == 0) ||
         (local_28.Protect = (uint)(local_28.Protect + -0x40) & 0xffffffbf,
         (int *)local_28.Protect == (int *)0x0)) {
LAB_0044711f:
        DAT_00479e40 = (PDWORD)((int)DAT_00479e40 + 1);
        return (int *)local_28.Protect;
      }
      lpflOldProtect = (PDWORD)((int)lpflOldProtect + DAT_00479e44);
      pDStackY_40 = (PDWORD)0x447118;
      local_28.Protect =
           VirtualProtect(local_28.BaseAddress,local_28.RegionSize,0x40,lpflOldProtect);
      if ((int *)local_28.Protect != (int *)0x0) goto LAB_0044711f;
      pDStackY_40 = (PDWORD)0x44713a;
      GetLastError();
      pDStackY_40 = (PDWORD)0x44714a;
      FUN_00446fe0("  VirtualProtect failed with code 0x%x");
    }
    FUN_00446fe0("  VirtualQuery failed for %d bytes at address %p");
  }
  piVar4 = (int *)FUN_00446fe0("Address %p has no image-section");
  if (DAT_00479e3c == 0) {
    DAT_00479e3c = 1;
    pDStackY_40 = lpflOldProtect;
    FUN_00447a00();
    uVar5 = FUN_00447c00();
    DAT_00479e40 = (PDWORD)0x0;
    DAT_00479e44 = (uint)(auStackY_6d + -uVar5) & 0xfffffff0;
    piVar4 = (int *)0x0;
  }
  return piVar4;
}

