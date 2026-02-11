
/* WARNING: Enum "SectionFlags": Some values do not have unique names */

IMAGE_SECTION_HEADER * __cdecl FUN_00447990(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  IMAGE_SECTION_HEADER *extraout_EDX;
  IMAGE_SECTION_HEADER *pIVar3;
  
  if (IMAGE_DOS_HEADER_00400000.e_magic != (char  [2])0x5a4d) {
    return (IMAGE_SECTION_HEADER *)0x0;
  }
  bVar1 = FUN_00447880();
  pIVar3 = extraout_EDX;
  if (CONCAT31(extraout_var,bVar1) != 0) {
    pIVar3 = (IMAGE_SECTION_HEADER *)
             (IMAGE_DOS_HEADER_00400000.e_lfanew + 0x400018 +
             (uint)*(ushort *)
                    ((int)IMAGE_DOS_HEADER_00400000.e_res_4_ +
                    (IMAGE_DOS_HEADER_00400000.e_lfanew - 8)));
    if (*(ushort *)(IMAGE_DOS_HEADER_00400000.e_magic + IMAGE_DOS_HEADER_00400000.e_lfanew + 6) != 0
       ) {
      uVar2 = 0;
      do {
        if (((uint)pIVar3->VirtualAddress <= param_1 - 0x400000U) &&
           (param_1 - 0x400000U < pIVar3->VirtualAddress + (pIVar3->Misc).PhysicalAddress)) {
          return pIVar3;
        }
        uVar2 = uVar2 + 1;
        pIVar3 = pIVar3 + 1;
      } while (uVar2 != *(ushort *)
                         (IMAGE_DOS_HEADER_00400000.e_magic + IMAGE_DOS_HEADER_00400000.e_lfanew + 6
                         ));
    }
    pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
  }
  return pIVar3;
}

