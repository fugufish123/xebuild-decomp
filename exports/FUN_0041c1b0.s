0041c1b0: PUSH EBP
0041c1b1: PUSH EDI
0041c1b2: PUSH ESI
0041c1b3: PUSH EBX
0041c1b4: SUB ESP,0x4c
0041c1b7: MOV EAX,[0x0044a6a4]
0041c1bc: MOV EBX,dword ptr [ESP + 0x64]
0041c1c0: MOV EBP,dword ptr [ESP + 0x60]
0041c1c4: MOV EDI,dword ptr [ESP + 0x68]
0041c1c8: MOV ESI,dword ptr [ESP + 0x6c]
0041c1cc: MOV dword ptr [EBX + 0x10],EAX
0041c1cf: MOV EAX,[0x0044a6a8]
0041c1d4: MOV dword ptr [EBX + 0x14],EAX
0041c1d7: MOV EAX,[0x0044a6ac]
0041c1dc: MOV dword ptr [EBX + 0x18],EAX
0041c1df: MOV EAX,[0x0044a6b0]
0041c1e4: MOV dword ptr [EBX + 0x1c],EAX
0041c1e7: MOV EAX,dword ptr [ESP + 0x70]
0041c1eb: TEST EAX,EAX
0041c1ed: JNZ 0x0041c2e0
0041c1f3: LEA EAX,[EBX + 0x10]
0041c1f6: MOV dword ptr [ESP + 0x24],0x10
0041c1fe: MOV dword ptr [ESP + 0x20],EDI
0041c202: MOV dword ptr [ESP + 0x1c],0x0
0041c20a: MOV dword ptr [ESP + 0x18],0x0
0041c212: MOV dword ptr [ESP + 0x8],EAX
0041c216: MOV dword ptr [ESP + 0x14],0x0
0041c21e: MOV dword ptr [ESP + 0x10],0x0
0041c226: MOV dword ptr [ESP + 0xc],0x10
0041c22e: MOV dword ptr [ESP + 0x4],0x10
0041c236: MOV dword ptr [ESP],0x47a10c
0041c23d: CALL 0x00434110
0041c242: MOVZX EAX,word ptr [0x00479570]
0041c249: MOV word ptr [EBX + 0x20],AX
0041c24d: MOVZX EAX,byte ptr [0x00479572]
0041c254: MOV byte ptr [EBX + 0x22],AL
0041c257: MOVZX EAX,byte ptr [0x00479f14]
0041c25e: MOV byte ptr [EBX + 0x23],AL
0041c261: LEA EAX,[EBX + 0x20]
0041c264: ADD EBX,0x30
0041c267: MOV dword ptr [ESP + 0x24],0x10
0041c26f: MOV dword ptr [ESP + 0x20],EBX
0041c273: MOV dword ptr [ESP + 0x10],EAX
0041c277: MOV dword ptr [ESP + 0x1c],0x10
0041c27f: MOV dword ptr [ESP + 0x18],EBP
0041c283: MOV dword ptr [ESP + 0x14],0x10
0041c28b: MOV dword ptr [ESP + 0xc],0x10
0041c293: MOV dword ptr [ESP + 0x8],EDI
0041c297: MOV dword ptr [ESP + 0x4],0x10
0041c29f: MOV dword ptr [ESP],0x47a11c
0041c2a6: MOV dword ptr [ESP + 0x3c],EAX
0041c2aa: CALL 0x00434110
0041c2af: MOV EAX,dword ptr [ESP + 0x3c]
0041c2b3: SUB ESI,0x20
0041c2b6: MOV dword ptr [ESP + 0x60],EDI
0041c2ba: MOV dword ptr [ESP + 0x68],EAX
0041c2be: MOV dword ptr [ESP + 0x6c],ESI
0041c2c2: MOV dword ptr [ESP + 0x64],0x10
0041c2ca: ADD ESP,0x4c
0041c2cd: POP EBX
0041c2ce: POP ESI
0041c2cf: POP EDI
0041c2d0: POP EBP
0041c2d1: JMP 0x004345b0
0041c2e0: LEA EAX,[EBX + 0x20]
0041c2e3: LEA ECX,[EBX + 0x24]
0041c2e6: MOV dword ptr [EBX + 0x20],0x0
0041c2ed: XOR EBP,EBP
0041c2ef: AND ECX,0xfffffffc
0041c2f2: MOV EDX,EAX
0041c2f4: MOV dword ptr [EAX + 0x1c],0x0
0041c2fb: SUB EDX,ECX
0041c2fd: ADD EDX,0x20
0041c300: AND EDX,0xfffffffc
0041c303: MOV dword ptr [ECX + EBP*0x1],0x0
0041c30a: ADD EBP,0x4
0041c30d: CMP EBP,EDX
0041c30f: JC 0x0041c303
0041c311: ADD EBX,0x10
0041c314: MOV dword ptr [ESP + 0x24],0x10
0041c31c: MOV dword ptr [ESP + 0x20],EDI
0041c320: MOV dword ptr [ESP + 0x1c],0x0
0041c328: MOV dword ptr [ESP + 0x18],0x0
0041c330: MOV dword ptr [ESP + 0x14],0x0
0041c338: MOV dword ptr [ESP + 0x10],0x0
0041c340: MOV dword ptr [ESP + 0xc],0x10
0041c348: MOV dword ptr [ESP + 0x8],EBX
0041c34c: MOV dword ptr [ESP + 0x4],0x10
0041c354: MOV dword ptr [ESP],0x47a10c
0041c35b: MOV dword ptr [ESP + 0x3c],EAX
0041c35f: CALL 0x00434110
0041c364: MOV EAX,dword ptr [ESP + 0x3c]
0041c368: JMP 0x0041c2b3