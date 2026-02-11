0041bf50: PUSH EBP
0041bf51: PUSH EDI
0041bf52: PUSH ESI
0041bf53: PUSH EBX
0041bf54: SUB ESP,0x4c
0041bf57: MOV EDX,dword ptr [0x0044a6a4]
0041bf5d: MOV EBX,dword ptr [ESP + 0x64]
0041bf61: MOV EAX,dword ptr [ESP + 0x60]
0041bf65: MOV EDI,dword ptr [ESP + 0x68]
0041bf69: MOV EBP,dword ptr [ESP + 0x70]
0041bf6d: MOV ESI,dword ptr [ESP + 0x6c]
0041bf71: MOV dword ptr [EBX + 0x10],EDX
0041bf74: MOV EDX,dword ptr [0x0044a6a8]
0041bf7a: MOV dword ptr [ESP + 0x3c],EAX
0041bf7e: MOV dword ptr [EBX + 0x14],EDX
0041bf81: MOV EDX,dword ptr [0x0044a6ac]
0041bf87: MOV dword ptr [EBX + 0x18],EDX
0041bf8a: MOV EDX,dword ptr [0x0044a6b0]
0041bf90: MOV dword ptr [EBX + 0x1c],EDX
0041bf93: LEA EDX,[EBX + 0x10]
0041bf96: MOV dword ptr [ESP + 0x4],0x10
0041bf9e: MOV dword ptr [ESP],0x47a10c
0041bfa5: MOV dword ptr [ESP + 0x24],0x10
0041bfad: MOV dword ptr [ESP + 0x8],EDX
0041bfb1: MOV dword ptr [ESP + 0x20],EDI
0041bfb5: MOV dword ptr [ESP + 0x1c],0x0
0041bfbd: MOV dword ptr [ESP + 0x18],0x0
0041bfc5: MOV dword ptr [ESP + 0x14],0x0
0041bfcd: MOV dword ptr [ESP + 0x10],0x0
0041bfd5: MOV dword ptr [ESP + 0xc],0x10
0041bfdd: CALL 0x00434110
0041bfe2: TEST EBP,EBP
0041bfe4: LEA EAX,[EBX + 0x20]
0041bfe7: JNZ 0x0041c097
0041bfed: MOVZX EAX,byte ptr [0x00479572]
0041bff4: MOV dword ptr [ESP + 0x4],0x456cfc
0041bffc: MOV dword ptr [ESP],0x1
0041c003: MOV dword ptr [ESP + 0x10],EAX
0041c007: MOVZX EAX,byte ptr [0x00479571]
0041c00e: MOV dword ptr [ESP + 0xc],EAX
0041c012: MOVZX EAX,byte ptr [0x00479570]
0041c019: MOV dword ptr [ESP + 0x8],EAX
0041c01d: CALL 0x00433690
0041c022: MOVZX EAX,word ptr [0x00479570]
0041c029: MOV ECX,dword ptr [ESP + 0x3c]
0041c02d: MOV word ptr [EBX + 0x20],AX
0041c031: MOVZX EAX,byte ptr [0x00479572]
0041c038: MOV byte ptr [EBX + 0x22],AL
0041c03b: MOVZX EAX,byte ptr [0x00479f14]
0041c042: MOV byte ptr [EBX + 0x23],AL
0041c045: LEA EAX,[EBX + 0x20]
0041c048: ADD EBX,0x30
0041c04b: MOV dword ptr [ESP + 0x24],0x10
0041c053: MOV dword ptr [ESP + 0x20],EBX
0041c057: MOV dword ptr [ESP + 0x10],EAX
0041c05b: MOV dword ptr [ESP + 0x1c],0x10
0041c063: MOV dword ptr [ESP + 0x18],ECX
0041c067: MOV dword ptr [ESP + 0x14],0x10
0041c06f: MOV dword ptr [ESP + 0xc],0x10
0041c077: MOV dword ptr [ESP + 0x8],EDI
0041c07b: MOV dword ptr [ESP + 0x4],0x10
0041c083: MOV dword ptr [ESP],0x47a11c
0041c08a: MOV dword ptr [ESP + 0x3c],EAX
0041c08e: CALL 0x00434110
0041c093: MOV EAX,dword ptr [ESP + 0x3c]
0041c097: SUB ESI,0x20
0041c09a: MOV dword ptr [ESP + 0x60],EDI
0041c09e: MOV dword ptr [ESP + 0x68],EAX
0041c0a2: MOV dword ptr [ESP + 0x6c],ESI
0041c0a6: MOV dword ptr [ESP + 0x64],0x10
0041c0ae: ADD ESP,0x4c
0041c0b1: POP EBX
0041c0b2: POP ESI
0041c0b3: POP EDI
0041c0b4: POP EBP
0041c0b5: JMP 0x004345b0