0041d0e0: PUSH EBP
0041d0e1: PUSH EDI
0041d0e2: MOV EAX,0x456d9f
0041d0e7: PUSH ESI
0041d0e8: PUSH EBX
0041d0e9: MOV ESI,0x456da9
0041d0ee: MOV EBX,0x456db0
0041d0f3: SUB ESP,0x6c
0041d0f6: MOV ECX,dword ptr [ESP + 0x84]
0041d0fd: MOV EDI,dword ptr [ESP + 0x80]
0041d104: TEST ECX,ECX
0041d106: CMOVZ ESI,EAX
0041d109: MOV EAX,0x456da2
0041d10e: CMOVZ EBX,EAX
0041d111: MOV EAX,dword ptr [EDI + 0x410]
0041d117: CMP EAX,0x3ff0
0041d11c: JZ 0x0041d490
0041d122: CMP EAX,0x4000
0041d127: JZ 0x0041d150
0041d129: MOV dword ptr [ESP + 0x8],EBX
0041d12d: MOV dword ptr [ESP + 0x4],0x456dbc
0041d135: MOV dword ptr [ESP],0x0
0041d13c: CALL 0x00433690
0041d141: ADD ESP,0x6c
0041d144: POP EBX
0041d145: POP ESI
0041d146: POP EDI
0041d147: POP EBP
0041d148: RET
0041d150: MOV EBP,dword ptr [EDI + 0x40c]
0041d156: MOV dword ptr [ESP],0x4000
0041d15d: MOV dword ptr [ESP + 0x38],ECX
0041d161: CALL 0x00449108
0041d166: MOV dword ptr [ESP + 0x4],EBP
0041d16a: MOV dword ptr [ESP + 0x8],0x4000
0041d172: MOV EBP,EAX
0041d174: MOV dword ptr [ESP],EAX
0041d177: CALL 0x004490f8
0041d17c: MOV dword ptr [ESP + 0x4],0x10
0041d184: MOV dword ptr [ESP],EBP
0041d187: MOV dword ptr [ESP + 0x34],EBP
0041d18b: CALL 0x004223b0
0041d190: TEST EAX,EAX
0041d192: MOV ECX,dword ptr [ESP + 0x38]
0041d196: JZ 0x0041d300
0041d19c: MOV dword ptr [ESP + 0x4],0x8
0041d1a4: MOV EAX,dword ptr [EDI + 0x40c]
0041d1aa: MOV dword ptr [ESP + 0x38],ECX
0041d1ae: ADD EAX,0x58
0041d1b1: MOV dword ptr [ESP],EAX
0041d1b4: CALL 0x004223b0
0041d1b9: TEST EAX,EAX
0041d1bb: MOV ECX,dword ptr [ESP + 0x38]
0041d1bf: JZ 0x0041d503
0041d1c5: LEA EAX,[ESP + 0x4e]
0041d1c9: MOV ESI,dword ptr [EDI + 0x410]
0041d1cf: MOV EBX,dword ptr [EDI + 0x40c]
0041d1d5: LEA EBP,[ESP + 0x50]
0041d1d9: MOV dword ptr [ESP + 0x38],EAX
0041d1dd: MOV EAX,dword ptr [ESP + 0x34]
0041d1e1: MOV dword ptr [ESP + 0x8],ESI
0041d1e5: MOV dword ptr [ESP],EBX
0041d1e8: MOV dword ptr [ESP + 0x3c],ECX
0041d1ec: MOV dword ptr [ESP + 0x4],EAX
0041d1f0: CALL 0x004490f8
0041d1f5: MOV ECX,dword ptr [ESP + 0x3c]
0041d1f9: TEST ECX,ECX
0041d1fb: JZ 0x0041d3a3
0041d201: MOV EBX,dword ptr [EDI + 0x40c]
0041d207: MOV EDX,dword ptr [0x0044a648]
0041d20d: MOV ECX,dword ptr [EDI + 0x410]
0041d213: MOV EAX,[0x0044a644]
0041d218: MOV byte ptr [ESP + 0x4e],0x7
0041d21d: MOV byte ptr [ESP + 0x4f],0x12
0041d222: MOV dword ptr [EBX + 0x14],EDX
0041d225: MOV EDX,dword ptr [ESP + 0x38]
0041d229: MOV dword ptr [EBX + 0x10],EAX
0041d22c: LEA ESI,[ECX + -0x10]
0041d22f: LEA EAX,[EBX + 0x10]
0041d232: MOV dword ptr [ESP + 0x24],0x10
0041d23a: MOV dword ptr [ESP + 0x20],EBX
0041d23e: MOV dword ptr [ESP + 0x8],EAX
0041d242: MOV dword ptr [ESP + 0x10],EDX
0041d246: MOV dword ptr [ESP + 0x1c],0x0
0041d24e: MOV dword ptr [ESP + 0x18],0x0
0041d256: MOV dword ptr [ESP + 0x14],0x2
0041d25e: MOV dword ptr [ESP + 0xc],ESI
0041d262: MOV dword ptr [ESP + 0x4],0x10
0041d26a: MOV dword ptr [ESP],0x47a11c
0041d271: MOV dword ptr [ESP + 0x38],EAX
0041d275: CALL 0x00434110
0041d27a: MOV dword ptr [ESP + 0x24],0x10
0041d282: MOV dword ptr [ESP + 0x20],EBP
0041d286: MOV dword ptr [ESP + 0x1c],0x0
0041d28e: MOV dword ptr [ESP + 0x18],0x0
0041d296: MOV dword ptr [ESP + 0x14],0x0
0041d29e: MOV dword ptr [ESP + 0x10],0x0
0041d2a6: MOV dword ptr [ESP + 0xc],0x10
0041d2ae: MOV dword ptr [ESP + 0x8],EBX
0041d2b2: MOV dword ptr [ESP + 0x4],0x10
0041d2ba: MOV dword ptr [ESP],0x47a11c
0041d2c1: CALL 0x00434110
0041d2c6: MOV EAX,dword ptr [ESP + 0x38]
0041d2ca: MOV dword ptr [ESP + 0xc],ESI
0041d2ce: MOV dword ptr [ESP + 0x4],0x10
0041d2d6: MOV dword ptr [ESP],EBP
0041d2d9: MOV dword ptr [ESP + 0x8],EAX
0041d2dd: CALL 0x004345b0
0041d2e2: MOV EAX,dword ptr [ESP + 0x34]
0041d2e6: MOV dword ptr [ESP + 0x80],EAX
0041d2ed: ADD ESP,0x6c
0041d2f0: POP EBX
0041d2f1: POP ESI
0041d2f2: POP EDI
0041d2f3: POP EBP
0041d2f4: JMP 0x00449140
0041d300: LEA EDX,[ESP + 0x4e]
0041d304: LEA EBP,[ESP + 0x50]
0041d308: MOV dword ptr [ESP + 0x24],0x10
0041d310: MOV dword ptr [ESP + 0x1c],0x0
0041d318: MOV dword ptr [ESP + 0x18],0x0
0041d320: MOV dword ptr [ESP + 0x20],EBP
0041d324: MOV dword ptr [ESP + 0x14],0x2
0041d32c: MOV dword ptr [ESP + 0x38],EDX
0041d330: MOV dword ptr [ESP + 0x10],EDX
0041d334: MOV EDX,dword ptr [EDI + 0x410]
0041d33a: MOV dword ptr [ESP + 0x4],0x10
0041d342: MOV dword ptr [ESP],0x47a11c
0041d349: MOV dword ptr [ESP + 0x3c],ECX
0041d34d: MOV byte ptr [ESP + 0x4e],0x7
0041d352: MOV byte ptr [ESP + 0x4f],0x12
0041d357: LEA EAX,[EDX + -0x10]
0041d35a: MOV dword ptr [ESP + 0xc],EAX
0041d35e: MOV EAX,dword ptr [ESP + 0x34]
0041d362: ADD EAX,0x10
0041d365: MOV dword ptr [ESP + 0x8],EAX
0041d369: CALL 0x00434110
0041d36e: MOV EAX,dword ptr [ESP + 0x34]
0041d372: MOV dword ptr [ESP + 0x8],0x10
0041d37a: MOV dword ptr [ESP + 0x4],EBP
0041d37e: MOV dword ptr [ESP],EAX
0041d381: CALL 0x00449100
0041d386: TEST EAX,EAX
0041d388: MOV ECX,dword ptr [ESP + 0x3c]
0041d38c: JNZ 0x0041d540
0041d392: MOV ESI,dword ptr [EDI + 0x410]
0041d398: MOV EBX,dword ptr [EDI + 0x40c]
0041d39e: JMP 0x0041d1dd
0041d3a3: MOV EAX,dword ptr [EDI + 0x40c]
0041d3a9: MOV dword ptr [ESP],EAX
0041d3ac: CALL 0x004131a0
0041d3b1: MOV EBX,dword ptr [EDI + 0x40c]
0041d3b7: MOV EAX,[0x0044a64c]
0041d3bc: MOV ECX,dword ptr [EDI + 0x410]
0041d3c2: MOV byte ptr [ESP + 0x4e],0x7
0041d3c7: MOV byte ptr [ESP + 0x4f],0x12
0041d3cc: MOV EDX,dword ptr [0x0044a650]
0041d3d2: MOV dword ptr [EBX + 0x10],EAX
0041d3d5: MOV EAX,dword ptr [ESP + 0x38]
0041d3d9: LEA EDI,[EBX + 0x10]
0041d3dc: LEA ESI,[ECX + -0x10]
0041d3df: MOV dword ptr [EBX + 0x14],EDX
0041d3e2: MOV dword ptr [ESP + 0x24],0x10
0041d3ea: MOV dword ptr [ESP + 0x10],EAX
0041d3ee: MOV dword ptr [ESP + 0x20],EBX
0041d3f2: MOV dword ptr [ESP + 0x1c],0x0
0041d3fa: MOV dword ptr [ESP + 0x18],0x0
0041d402: MOV dword ptr [ESP + 0x14],0x2
0041d40a: MOV dword ptr [ESP + 0xc],ESI
0041d40e: MOV dword ptr [ESP + 0x8],EDI
0041d412: MOV dword ptr [ESP + 0x4],0x10
0041d41a: MOV dword ptr [ESP],0x47a11c
0041d421: CALL 0x00434110
0041d426: MOV dword ptr [ESP + 0x24],0x10
0041d42e: MOV dword ptr [ESP + 0x20],EBP
0041d432: MOV dword ptr [ESP + 0x1c],0x0
0041d43a: MOV dword ptr [ESP + 0x18],0x0
0041d442: MOV dword ptr [ESP + 0x14],0x0
0041d44a: MOV dword ptr [ESP + 0x10],0x0
0041d452: MOV dword ptr [ESP + 0xc],0x10
0041d45a: MOV dword ptr [ESP + 0x8],EBX
0041d45e: MOV dword ptr [ESP + 0x4],0x10
0041d466: MOV dword ptr [ESP],0x47a11c
0041d46d: CALL 0x00434110
0041d472: MOV dword ptr [ESP + 0xc],ESI
0041d476: MOV dword ptr [ESP + 0x8],EDI
0041d47a: MOV dword ptr [ESP + 0x4],0x10
0041d482: MOV dword ptr [ESP],EBP
0041d485: CALL 0x004345b0
0041d48a: JMP 0x0041d2e2
0041d490: MOV dword ptr [ESP],0x4000
0041d497: MOV dword ptr [ESP + 0x38],ECX
0041d49b: CALL 0x00449108
0041d4a0: MOV EDX,dword ptr [EDI + 0x40c]
0041d4a6: MOV dword ptr [EAX],0x0
0041d4ac: MOV EBP,EAX
0041d4ae: MOV dword ptr [EAX + 0x4],0x0
0041d4b5: MOV dword ptr [EAX + 0x8],0x0
0041d4bc: LEA EAX,[EAX + 0x10]
0041d4bf: MOV dword ptr [EAX + -0x4],0x0
0041d4c6: MOV dword ptr [ESP + 0x8],0x3ff0
0041d4ce: MOV dword ptr [ESP + 0x4],EDX
0041d4d2: MOV dword ptr [ESP],EAX
0041d4d5: MOV dword ptr [ESP + 0x34],EDX
0041d4d9: CALL 0x004490f8
0041d4de: MOV EDX,dword ptr [ESP + 0x34]
0041d4e2: MOV dword ptr [ESP],EDX
0041d4e5: CALL 0x00449140
0041d4ea: MOV dword ptr [EDI + 0x40c],EBP
0041d4f0: MOV dword ptr [EDI + 0x410],0x4000
0041d4fa: MOV ECX,dword ptr [ESP + 0x38]
0041d4fe: JMP 0x0041d156
0041d503: MOV dword ptr [ESP + 0x8],EBX
0041d507: MOV dword ptr [ESP + 0x4],0x456f80
0041d50f: LEA EBP,[ESP + 0x50]
0041d513: MOV dword ptr [ESP],0x0
0041d51a: MOV dword ptr [ESP + 0x3c],ECX
0041d51e: CALL 0x00433690
0041d523: LEA EAX,[ESP + 0x4e]
0041d527: MOV ESI,dword ptr [EDI + 0x410]
0041d52d: MOV EBX,dword ptr [EDI + 0x40c]
0041d533: MOV ECX,dword ptr [ESP + 0x3c]
0041d537: MOV dword ptr [ESP + 0x38],EAX
0041d53b: JMP 0x0041d1dd
0041d540: MOV EAX,dword ptr [ESP + 0x34]
0041d544: MOV dword ptr [ESP + 0x4],0x58
0041d54c: MOV dword ptr [ESP + 0x3c],ECX
0041d550: ADD EAX,0x38
0041d553: MOV dword ptr [ESP],EAX
0041d556: CALL 0x004223b0
0041d55b: TEST EAX,EAX
0041d55d: MOV ECX,dword ptr [ESP + 0x3c]
0041d561: JNZ 0x0041d620
0041d567: MOV dword ptr [ESP + 0x8],EBX
0041d56b: MOV dword ptr [ESP + 0x4],0x456ec8
0041d573: MOV dword ptr [ESP],0x1
0041d57a: MOV dword ptr [ESP + 0x3c],ECX
0041d57e: CALL 0x00433690
0041d583: MOV EAX,dword ptr [EDI + 0x410]
0041d589: MOV dword ptr [ESP + 0x8],EAX
0041d58d: MOV EAX,dword ptr [EDI + 0x40c]
0041d593: MOV dword ptr [ESP + 0x4],EAX
0041d597: MOV EAX,dword ptr [ESP + 0x34]
0041d59b: MOV dword ptr [ESP],EAX
0041d59e: CALL 0x004490f8
0041d5a3: MOV EAX,dword ptr [ESP + 0x34]
0041d5a7: MOV dword ptr [ESP + 0x4],0x4000
0041d5af: MOV dword ptr [ESP],EAX
0041d5b2: CALL 0x00401630
0041d5b7: TEST EAX,EAX
0041d5b9: MOV ECX,dword ptr [ESP + 0x3c]
0041d5bd: JNZ 0x0041d665
0041d5c3: MOV dword ptr [ESP + 0x8],EBX
0041d5c7: MOV dword ptr [ESP + 0x4],0x456f00
0041d5cf: MOV dword ptr [ESP],0x1
0041d5d6: CALL 0x00433690
0041d5db: MOV dword ptr [ESP + 0xc],EBX
0041d5df: MOV dword ptr [ESP + 0x8],ESI
0041d5e3: MOV dword ptr [ESP + 0x4],0x456f24
0041d5eb: MOV dword ptr [ESP],0x0
0041d5f2: CALL 0x00433690
0041d5f7: MOV ESI,dword ptr [EDI + 0x410]
0041d5fd: MOV EBX,dword ptr [EDI + 0x40c]
0041d603: MOV EAX,dword ptr [ESP + 0x34]
0041d607: MOV dword ptr [ESP + 0x8],ESI
0041d60b: MOV dword ptr [ESP + 0x4],EBX
0041d60f: MOV dword ptr [ESP],EAX
0041d612: CALL 0x004490f8
0041d617: MOV ECX,dword ptr [ESP + 0x3c]
0041d61b: JMP 0x0041d1dd
0041d620: MOV dword ptr [ESP + 0x8],EBX
0041d624: MOV dword ptr [ESP + 0x4],0x456e10
0041d62c: MOV dword ptr [ESP],0x1
0041d633: CALL 0x00433690
0041d638: MOV dword ptr [ESP + 0x8],EBX
0041d63c: MOV dword ptr [ESP + 0x4],0x456e60
0041d644: MOV dword ptr [ESP],0x0
0041d64b: CALL 0x00433690
0041d650: MOV ESI,dword ptr [EDI + 0x410]
0041d656: MOV EBX,dword ptr [EDI + 0x40c]
0041d65c: MOV ECX,dword ptr [ESP + 0x3c]
0041d660: JMP 0x0041d1dd
0041d665: MOV dword ptr [ESP + 0x4],0x456f74
0041d66d: MOV dword ptr [ESP],0x1
0041d674: MOV dword ptr [ESP + 0x3c],ECX
0041d678: CALL 0x00433690
0041d67d: MOV ESI,dword ptr [EDI + 0x410]
0041d683: MOV EBX,dword ptr [EDI + 0x40c]
0041d689: MOV ECX,dword ptr [ESP + 0x3c]
0041d68d: JMP 0x0041d1dd