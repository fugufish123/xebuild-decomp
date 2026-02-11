0041ea90: PUSH EBP
0041ea91: PUSH EDI
0041ea92: PUSH ESI
0041ea93: PUSH EBX
0041ea94: SUB ESP,0x16c
0041ea9a: MOV dword ptr [ESP + 0x24],0x1
0041eaa2: MOV dword ptr [ESP + 0x8],0x11
0041eaaa: MOV dword ptr [ESP + 0x4],0x2
0041eab2: MOV dword ptr [ESP],0x2
0041eab9: CALL dword ptr [0x0050f444]
0041eabf: SUB ESP,0xc
0041eac2: CMP EAX,-0x1
0041eac5: MOV dword ptr [ESP + 0x20],0x0
0041eacd: JZ 0x0041ec92
0041ead3: MOV ESI,EAX
0041ead5: LEA EAX,[ESP + 0x24]
0041ead9: MOV dword ptr [ESP + 0x10],0x4
0041eae1: MOV dword ptr [ESP + 0x8],0x20
0041eae9: MOV dword ptr [ESP + 0x4],0xffff
0041eaf1: MOV dword ptr [ESP + 0xc],EAX
0041eaf5: MOV dword ptr [ESP],ESI
0041eaf8: CALL dword ptr [0x0050f440]
0041eafe: SUB ESP,0x14
0041eb01: CMP EAX,-0x1
0041eb04: JZ 0x0041ed20
0041eb0a: LEA EBX,[ESP + 0x3c]
0041eb0e: MOV EAX,0x2
0041eb13: MOV dword ptr [ESP + 0x3c],0x0
0041eb1b: MOV dword ptr [ESP + 0x40],0x0
0041eb23: MOV dword ptr [ESP + 0x44],0x0
0041eb2b: MOV dword ptr [ESP + 0x48],0x0
0041eb33: MOV word ptr [ESP + 0x3c],AX
0041eb38: MOV dword ptr [ESP],0x30
0041eb3f: CALL dword ptr [0x0050f42c]
0041eb45: SUB ESP,0x4
0041eb48: MOV word ptr [ESP + 0x3e],AX
0041eb4d: MOV dword ptr [ESP + 0x40],0x0
0041eb55: MOV dword ptr [ESP + 0x8],0x10
0041eb5d: MOV dword ptr [ESP + 0x4],EBX
0041eb61: MOV dword ptr [ESP],ESI
0041eb64: CALL dword ptr [0x0050f420]
0041eb6a: SUB ESP,0xc
0041eb6d: CMP EAX,-0x1
0041eb70: JZ 0x0041ed37
0041eb76: LEA EBX,[ESP + 0x34]
0041eb7a: LEA EBP,[ESP + 0x2c]
0041eb7e: LEA EDI,[ESP + 0x5c]
0041eb82: JMP 0x0041ebf7
0041eb84: TEST EAX,EAX
0041eb86: JZ 0x0041ecc0
0041eb8c: LEA EAX,[ESP + 0x28]
0041eb90: MOV dword ptr [ESP + 0xc],0x0
0041eb98: MOV dword ptr [ESP + 0x8],0x8
0041eba0: MOV dword ptr [ESP + 0x4],EBX
0041eba4: MOV dword ptr [ESP],ESI
0041eba7: MOV dword ptr [ESP + 0x14],EAX
0041ebab: LEA EAX,[ESP + 0x4c]
0041ebaf: MOV dword ptr [ESP + 0x10],EAX
0041ebb3: CALL dword ptr [0x0050f434]
0041ebb9: SUB ESP,0x18
0041ebbc: MOV dword ptr [ESP],EBX
0041ebbf: CALL 0x00420ad0
0041ebc4: CMP EAX,0x4e537672
0041ebc9: JZ 0x0041ecf0
0041ebcf: MOV dword ptr [ESP],EBX
0041ebd2: CALL 0x00420ad0
0041ebd7: MOV dword ptr [ESP + 0xc],0x4e537672
0041ebdf: MOV dword ptr [ESP + 0x8],EAX
0041ebe3: MOV dword ptr [ESP + 0x4],0x457608
0041ebeb: MOV dword ptr [ESP],0x0
0041ebf2: CALL 0x00433690
0041ebf7: MOV dword ptr [EBX],0x0
0041ebfd: MOV dword ptr [EBX + 0x4],0x0
0041ec04: MOV dword ptr [ESP + 0x28],0x10
0041ec0c: MOV dword ptr [ESP + 0x60],ESI
0041ec10: MOV dword ptr [ESP + 0x5c],0x1
0041ec18: MOV dword ptr [ESP + 0x2c],0x1e
0041ec20: MOV dword ptr [ESP + 0x30],0x0
0041ec28: MOV dword ptr [ESP + 0x10],EBP
0041ec2c: MOV dword ptr [ESP + 0xc],0x0
0041ec34: MOV dword ptr [ESP + 0x8],0x0
0041ec3c: MOV dword ptr [ESP + 0x4],EDI
0041ec40: MOV dword ptr [ESP],0x0
0041ec47: CALL dword ptr [0x0050f438]
0041ec4d: SUB ESP,0x14
0041ec50: CMP EAX,-0x1
0041ec53: JNZ 0x0041eb84
0041ec59: CALL dword ptr [0x0050f414]
0041ec5f: MOV dword ptr [ESP + 0x4],0x4575e1
0041ec67: MOV dword ptr [ESP + 0x8],EAX
0041ec6b: MOV dword ptr [ESP],0x0
0041ec72: CALL 0x00433690
0041ec77: MOV dword ptr [ESP],ESI
0041ec7a: CALL dword ptr [0x0050f424]
0041ec80: SUB ESP,0x4
0041ec83: MOV EAX,dword ptr [ESP + 0x20]
0041ec87: ADD ESP,0x16c
0041ec8d: POP EBX
0041ec8e: POP ESI
0041ec8f: POP EDI
0041ec90: POP EBP
0041ec91: RET
0041ec92: CALL dword ptr [0x0050f414]
0041ec98: MOV dword ptr [ESP + 0x4],0x457568
0041eca0: MOV dword ptr [ESP + 0x8],EAX
0041eca4: MOV dword ptr [ESP],0x0
0041ecab: CALL 0x00433690
0041ecb0: MOV EAX,dword ptr [ESP + 0x20]
0041ecb4: ADD ESP,0x16c
0041ecba: POP EBX
0041ecbb: POP ESI
0041ecbc: POP EDI
0041ecbd: POP EBP
0041ecbe: RET
0041ecc0: MOV dword ptr [ESP + 0x4],0x4575f3
0041ecc8: MOV dword ptr [ESP],0x0
0041eccf: CALL 0x00433690
0041ecd4: MOV dword ptr [ESP],ESI
0041ecd7: CALL dword ptr [0x0050f424]
0041ecdd: SUB ESP,0x4
0041ece0: MOV EAX,dword ptr [ESP + 0x20]
0041ece4: ADD ESP,0x16c
0041ecea: POP EBX
0041eceb: POP ESI
0041ecec: POP EDI
0041eced: POP EBP
0041ecee: RET
0041ecf0: LEA EAX,[ESP + 0x38]
0041ecf4: MOV dword ptr [ESP],EAX
0041ecf7: CALL 0x00420af0
0041ecfc: MOV dword ptr [ESP],ESI
0041ecff: MOV dword ptr [ESP + 0x20],EAX
0041ed03: CALL dword ptr [0x0050f424]
0041ed09: SUB ESP,0x4
0041ed0c: MOV EAX,dword ptr [ESP + 0x20]
0041ed10: ADD ESP,0x16c
0041ed16: POP EBX
0041ed17: POP ESI
0041ed18: POP EDI
0041ed19: POP EBP
0041ed1a: RET
0041ed20: CALL dword ptr [0x0050f414]
0041ed26: MOV dword ptr [ESP + 0x4],0x45758c
0041ed2e: MOV dword ptr [ESP + 0x8],EAX
0041ed32: JMP 0x0041ec6b
0041ed37: CALL dword ptr [0x0050f414]
0041ed3d: MOV dword ptr [ESP + 0x4],0x4575bc
0041ed45: MOV dword ptr [ESP + 0x8],EAX
0041ed49: JMP 0x0041ec6b