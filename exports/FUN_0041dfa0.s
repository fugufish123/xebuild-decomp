0041dfa0: PUSH EBP
0041dfa1: PUSH EDI
0041dfa2: PUSH ESI
0041dfa3: PUSH EBX
0041dfa4: SUB ESP,0x25c
0041dfaa: MOV ESI,dword ptr [ESP + 0x274]
0041dfb1: MOV EDX,dword ptr [ESP + 0x278]
0041dfb8: MOV EBX,dword ptr [ESP + 0x270]
0041dfbf: MOV dword ptr [ESP],ESI
0041dfc2: MOV dword ptr [ESP + 0x3c],EDX
0041dfc6: CALL 0x00449108
0041dfcb: MOV EDI,EAX
0041dfcd: MOV EAX,[0x0044a600]
0041dfd2: MOV EDX,dword ptr [ESP + 0x3c]
0041dfd6: LEA EBP,[EBX + 0x130]
0041dfdc: MOV dword ptr [EBX + 0x120],EAX
0041dfe2: MOV EAX,[0x0044a604]
0041dfe7: OR byte ptr [EBX + 0x121],0x1
0041dfee: MOV dword ptr [EBX + 0x124],EAX
0041dff4: MOV EAX,[0x0044a608]
0041dff9: MOV dword ptr [EBX + 0x128],EAX
0041dfff: MOV EAX,[0x0044a60c]
0041e004: MOV dword ptr [EBX + 0x12c],EAX
0041e00a: MOV EAX,[0x0044a610]
0041e00f: MOV dword ptr [EBX + 0x130],EAX
0041e015: MOV EAX,[0x0044a614]
0041e01a: MOV dword ptr [EBX + 0x134],EAX
0041e020: MOV EAX,[0x0044a618]
0041e025: MOV dword ptr [EBX + 0x138],EAX
0041e02b: MOV EAX,[0x0044a61c]
0041e030: MOV dword ptr [EBX + 0x13c],EAX
0041e036: MOV dword ptr [ESP + 0x4],EDX
0041e03a: MOV dword ptr [ESP],EBP
0041e03d: MOV dword ptr [ESP + 0x8],0x8
0041e045: CALL 0x004223f0
0041e04a: MOVZX EAX,byte ptr [0x00479f15]
0041e051: MOV byte ptr [EBX + 0x13f],AL
0041e057: MOV dword ptr [ESP + 0x8],ESI
0041e05b: MOV dword ptr [ESP + 0x4],EBX
0041e05f: MOV dword ptr [ESP],EDI
0041e062: CALL 0x004490f8
0041e067: LEA EAX,[ESP + 0x48]
0041e06b: LEA EDX,[ESP + 0x58]
0041e06f: MOV dword ptr [ESP + 0x24],0x10
0041e077: MOV dword ptr [ESP + 0x1c],0x0
0041e07f: MOV dword ptr [ESP + 0x18],0x0
0041e087: MOV dword ptr [ESP + 0x20],EAX
0041e08b: LEA EAX,[EDI + 0x120]
0041e091: MOV dword ptr [ESP + 0x14],0x0
0041e099: MOV dword ptr [ESP + 0x10],0x0
0041e0a1: MOV dword ptr [ESP + 0xc],0x20
0041e0a9: MOV dword ptr [ESP + 0x8],EAX
0041e0ad: MOV dword ptr [ESP + 0x4],0x10
0041e0b5: MOV dword ptr [ESP],0x47a11c
0041e0bc: MOV dword ptr [ESP + 0x3c],EDX
0041e0c0: MOV dword ptr [ESP + 0x58],0x0
0041e0c8: MOV dword ptr [ESP + 0x5c],0x0
0041e0d0: MOV dword ptr [ESP + 0x60],0x0
0041e0d8: MOV dword ptr [ESP + 0x64],0x0
0041e0e0: CALL 0x00434110
0041e0e5: MOV EAX,dword ptr [ESP + 0x48]
0041e0e9: MOV dword ptr [EBX + 0x140],EAX
0041e0ef: MOV EAX,dword ptr [ESP + 0x4c]
0041e0f3: MOV dword ptr [EBX + 0x144],EAX
0041e0f9: MOV EAX,dword ptr [ESP + 0x50]
0041e0fd: MOV dword ptr [EBX + 0x148],EAX
0041e103: MOV EAX,dword ptr [ESP + 0x54]
0041e107: MOV dword ptr [EBX + 0x14c],EAX
0041e10d: MOV dword ptr [ESP + 0x4],EBX
0041e111: LEA EBX,[ESP + 0x68]
0041e115: MOV dword ptr [ESP + 0x8],ESI
0041e119: MOV dword ptr [ESP],EDI
0041e11c: SUB ESI,0x130
0041e122: CALL 0x004490f8
0041e127: MOV dword ptr [ESP],EBX
0041e12a: MOV dword ptr [ESP + 0x4],0x47a11c
0041e132: CALL 0x00434850
0041e137: MOV EDX,dword ptr [ESP + 0x3c]
0041e13b: LEA EAX,[EDI + 0x130]
0041e141: MOV dword ptr [ESP + 0xc],EBP
0041e145: MOV dword ptr [ESP + 0x8],ESI
0041e149: MOV dword ptr [ESP],EBX
0041e14c: MOV dword ptr [ESP + 0x14],0x1
0041e154: MOV dword ptr [ESP + 0x4],EAX
0041e158: MOV dword ptr [ESP + 0x10],EDX
0041e15c: CALL 0x004348f0
0041e161: MOV dword ptr [ESP + 0x270],EDI
0041e168: ADD ESP,0x25c
0041e16e: POP EBX
0041e16f: POP ESI
0041e170: POP EDI
0041e171: POP EBP
0041e172: JMP 0x00449140