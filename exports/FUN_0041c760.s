0041c760: PUSH EDI
0041c761: PUSH ESI
0041c762: PUSH EBX
0041c763: SUB ESP,0x30
0041c766: MOV EAX,[0x0044a684]
0041c76b: MOV EBX,dword ptr [ESP + 0x40]
0041c76f: MOV ESI,dword ptr [ESP + 0x48]
0041c773: MOV EDI,dword ptr [ESP + 0x4c]
0041c777: MOV dword ptr [EBX + 0x10],EAX
0041c77a: MOV EAX,[0x0044a688]
0041c77f: SUB EDI,0x20
0041c782: MOV dword ptr [EBX + 0x14],EAX
0041c785: MOV EAX,[0x0044a68c]
0041c78a: MOV dword ptr [EBX + 0x18],EAX
0041c78d: MOV EAX,[0x0044a690]
0041c792: MOV dword ptr [EBX + 0x1c],EAX
0041c795: LEA EAX,[EBX + 0x10]
0041c798: MOV dword ptr [ESP + 0x14],0x0
0041c7a0: MOV dword ptr [ESP + 0x10],0x0
0041c7a8: MOV dword ptr [ESP + 0xc],0x10
0041c7b0: ADD EBX,0x20
0041c7b3: MOV dword ptr [ESP + 0x8],EAX
0041c7b7: MOV EAX,dword ptr [ESP + 0x44]
0041c7bb: MOV dword ptr [ESP + 0x4],0x10
0041c7c3: MOV dword ptr [ESP + 0x20],ESI
0041c7c7: MOV dword ptr [ESP + 0x24],0x10
0041c7cf: MOV dword ptr [ESP + 0x1c],0x0
0041c7d7: MOV dword ptr [ESP],EAX
0041c7da: MOV dword ptr [ESP + 0x18],0x0
0041c7e2: CALL 0x00434110
0041c7e7: MOV dword ptr [ESP + 0x20],ESI
0041c7eb: MOV dword ptr [ESP + 0x8],ESI
0041c7ef: MOV dword ptr [ESP + 0x24],0x10
0041c7f7: MOV dword ptr [ESP + 0x1c],0x0
0041c7ff: MOV dword ptr [ESP + 0x18],0x0
0041c807: MOV dword ptr [ESP + 0x14],0x0
0041c80f: MOV dword ptr [ESP + 0x10],0x0
0041c817: MOV dword ptr [ESP + 0xc],0x10
0041c81f: MOV dword ptr [ESP + 0x4],0x10
0041c827: MOV dword ptr [ESP],0x47a11c
0041c82e: CALL 0x00434110
0041c833: MOV dword ptr [ESP + 0x4c],EDI
0041c837: MOV dword ptr [ESP + 0x48],EBX
0041c83b: MOV dword ptr [ESP + 0x40],ESI
0041c83f: MOV dword ptr [ESP + 0x44],0x10
0041c847: ADD ESP,0x30
0041c84a: POP EBX
0041c84b: POP ESI
0041c84c: POP EDI
0041c84d: JMP 0x004345b0