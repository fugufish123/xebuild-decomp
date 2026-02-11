0040bd80: PUSH EBP
0040bd81: PUSH EDI
0040bd82: PUSH ESI
0040bd83: PUSH EBX
0040bd84: SUB ESP,0x4c
0040bd87: MOV ESI,dword ptr [ESP + 0x60]
0040bd8b: MOV EAX,dword ptr [ESP + 0x64]
0040bd8f: MOV byte ptr [ESP + 0x39],0x78
0040bd94: MOV byte ptr [ESP + 0x3a],0xba
0040bd99: MOV byte ptr [ESP + 0x3b],0xb6
0040bd9e: MOV dword ptr [ESP + 0x3c],0x1b0000d0
0040bda6: LEA EBX,[ESI + 0x4]
0040bda9: SUB EAX,0x4
0040bdac: MOV dword ptr [ESP + 0x4],EAX
0040bdb0: MOV dword ptr [ESP],EBX
0040bdb3: CALL 0x00433800
0040bdb8: MOV EBP,EAX
0040bdba: MOVZX EAX,byte ptr [ESI + 0x100]
0040bdc1: MOV dword ptr [ESP + 0x4],0x450480
0040bdc9: MOV dword ptr [ESP + 0x8],EBP
0040bdcd: MOV dword ptr [ESP],0x1
0040bdd4: SHR AL,0x4
0040bdd7: MOVZX EAX,AL
0040bdda: MOV dword ptr [ESP + 0x2c],EAX
0040bdde: CALL 0x00433690
0040bde3: CMP EBP,dword ptr [0x0044a480]
0040bde9: MOV EAX,dword ptr [ESP + 0x2c]
0040bded: JZ 0x0040bf73
0040bdf3: CMP EBP,dword ptr [0x0044a488]
0040bdf9: JZ 0x0040bf73
0040bdff: CMP EBP,dword ptr [0x0044a490]
0040be05: JZ 0x0040bf73
0040be0b: CMP EBP,dword ptr [0x0044a498]
0040be11: JZ 0x0040bf73
0040be17: CMP EBP,dword ptr [0x0044a4a0]
0040be1d: JZ 0x0040bf73
0040be23: CMP EBP,dword ptr [0x0044a4a8]
0040be29: JZ 0x0040bf73
0040be2f: CMP EBP,dword ptr [0x0044a4b0]
0040be35: JZ 0x0040bf73
0040be3b: CMP EBP,dword ptr [0x0044a4b8]
0040be41: JZ 0x0040bf73
0040be47: CMP EBP,dword ptr [0x0044a4c0]
0040be4d: JZ 0x0040bf73
0040be53: CMP EBP,dword ptr [0x0044a4c8]
0040be59: JZ 0x0040bf73
0040be5f: CMP EBP,dword ptr [0x0044a4d0]
0040be65: JZ 0x0040bf73
0040be6b: MOVZX ECX,byte ptr [ESI + 0x100]
0040be72: MOVZX EBP,byte ptr [ESI + 0x102]
0040be79: MOVZX EDI,byte ptr [ESI + 0x101]
0040be80: MOV dword ptr [ESP],EAX
0040be83: MOV byte ptr [ESP + 0x2c],CL
0040be87: CALL 0x00420a90
0040be8c: MOVZX ECX,byte ptr [ESP + 0x2c]
0040be91: MOV dword ptr [ESP + 0x18],EBP
0040be95: MOV dword ptr [ESP + 0x14],EDI
0040be99: MOV dword ptr [ESP + 0x8],EAX
0040be9d: MOV dword ptr [ESP + 0x4],0x4504c8
0040bea5: MOV dword ptr [ESP],0x1
0040beac: MOV EDX,ECX
0040beae: AND EDX,0xf
0040beb1: MOV dword ptr [ESP + 0x10],EDX
0040beb5: MOV EDX,ECX
0040beb7: SHR DL,0x4
0040beba: MOVZX EBP,DL
0040bebd: MOV dword ptr [ESP + 0xc],EBP
0040bec1: CALL 0x00433690
0040bec6: CMP dword ptr [ESP + 0x68],0x3
0040becb: JZ 0x0040bfd0
0040bed1: CMP dword ptr [ESP + 0x68],0x2
0040bed6: JZ 0x0040bf22
0040bed8: CMP dword ptr [ESP + 0x68],0x1
0040bedd: JZ 0x0040bef3
0040bedf: CMP dword ptr [ESP + 0x68],0x5
0040bee4: JG 0x0040bef3
0040bee6: MOV EAX,0x1
0040beeb: ADD ESP,0x4c
0040beee: POP EBX
0040beef: POP ESI
0040bef0: POP EDI
0040bef1: POP EBP
0040bef2: RET
0040bef3: CMP dword ptr [ESP + 0x64],0xa
0040bef8: JLE 0x0040bee6
0040befa: MOV EAX,dword ptr [ESP + 0x64]
0040befe: LEA EAX,[ESI + EAX*0x1 + -0x6]
0040bf02: JMP 0x0040bf0b
0040bf04: ADD EBX,0x1
0040bf07: CMP EAX,EBX
0040bf09: JZ 0x0040bee6
0040bf0b: CMP byte ptr [EBX],0x5
0040bf0e: JNZ 0x0040bf04
0040bf10: CMP byte ptr [EBX + 0x2],0xe5
0040bf14: JNZ 0x0040bf04
0040bf16: CMP byte ptr [EBX + 0x4],0xb4
0040bf1a: JNZ 0x0040bf04
0040bf1c: CMP byte ptr [EBX + 0x5],0x5
0040bf20: JNZ 0x0040bf04
0040bf22: LEA EAX,[ESP + 0x39]
0040bf26: MOV dword ptr [ESP + 0xc],0x3
0040bf2e: MOV dword ptr [ESP],ESI
0040bf31: MOV dword ptr [ESP + 0x8],EAX
0040bf35: MOV EAX,dword ptr [ESP + 0x64]
0040bf39: MOV dword ptr [ESP + 0x4],EAX
0040bf3d: CALL 0x00421170
0040bf42: TEST EAX,EAX
0040bf44: JNZ 0x0040bee6
0040bf46: LEA EAX,[ESP + 0x3c]
0040bf4a: MOV dword ptr [ESP + 0xc],0x4
0040bf52: MOV dword ptr [ESP],ESI
0040bf55: MOV dword ptr [ESP + 0x8],EAX
0040bf59: MOV EAX,dword ptr [ESP + 0x64]
0040bf5d: MOV dword ptr [ESP + 0x4],EAX
0040bf61: CALL 0x00421170
0040bf66: TEST EAX,EAX
0040bf68: SETNZ AL
0040bf6b: MOVZX EAX,AL
0040bf6e: JMP 0x0040beeb
0040bf73: MOVZX EBX,byte ptr [ESI + 0x100]
0040bf7a: MOVZX EBP,byte ptr [ESI + 0x102]
0040bf81: MOVZX EDI,byte ptr [ESI + 0x101]
0040bf88: MOV dword ptr [ESP],EAX
0040bf8b: CALL 0x00420a90
0040bf90: MOV dword ptr [ESP + 0x4],0x450494
0040bf98: MOV dword ptr [ESP + 0x8],EAX
0040bf9c: MOV EDX,EBX
0040bf9e: SHR BL,0x4
0040bfa1: MOV dword ptr [ESP + 0x18],EBP
0040bfa5: AND EDX,0xf
0040bfa8: MOVZX EBX,BL
0040bfab: MOV dword ptr [ESP + 0x14],EDI
0040bfaf: MOV dword ptr [ESP + 0xc],EBX
0040bfb3: MOV dword ptr [ESP + 0x10],EDX
0040bfb7: MOV dword ptr [ESP],0x1
0040bfbe: CALL 0x00433690
0040bfc3: ADD ESP,0x4c
0040bfc6: XOR EAX,EAX
0040bfc8: POP EBX
0040bfc9: POP ESI
0040bfca: POP EDI
0040bfcb: POP EBP
0040bfcc: RET
0040bfd0: CMP dword ptr [ESP + 0x64],0xa
0040bfd5: JLE 0x0040bee6
0040bfdb: MOV EAX,dword ptr [ESP + 0x64]
0040bfdf: LEA EDI,[EAX + -0x6]
0040bfe2: MOV EAX,0x4
0040bfe7: JMP 0x0040bffb
0040bff0: ADD EAX,0x1
0040bff3: CMP EAX,EDI
0040bff5: JZ 0x0040bee6
0040bffb: CMP byte ptr [ESI + EAX*0x1],0x5
0040bfff: JNZ 0x0040bff0
0040c001: CMP byte ptr [ESI + EAX*0x1 + 0x2],0xe5
0040c006: JNZ 0x0040bff0
0040c008: CMP byte ptr [ESI + EAX*0x1 + 0x4],0xb4
0040c00d: JNZ 0x0040bff0
0040c00f: CMP byte ptr [ESI + EAX*0x1 + 0x5],0x5
0040c014: JNZ 0x0040bff0
0040c016: XOR EAX,EAX
0040c018: JMP 0x0040beeb