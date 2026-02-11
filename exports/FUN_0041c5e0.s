0041c5e0: PUSH ESI
0041c5e1: PUSH EBX
0041c5e2: SUB ESP,0x44
0041c5e5: MOV EDX,dword ptr [0x0044a694]
0041c5eb: MOV EBX,dword ptr [ESP + 0x50]
0041c5ef: MOV ESI,dword ptr [ESP + 0x54]
0041c5f3: LEA EAX,[ESP + 0x30]
0041c5f7: MOV dword ptr [ESP + 0x30],0x0
0041c5ff: MOV dword ptr [ESP + 0x34],0x0
0041c607: MOV dword ptr [ESP + 0x38],0x0
0041c60f: MOV dword ptr [ESP + 0x3c],0x0
0041c617: MOV dword ptr [EBX + 0x10],EDX
0041c61a: MOV EDX,dword ptr [0x0044a698]
0041c620: MOV dword ptr [EBX + 0x14],EDX
0041c623: MOV EDX,dword ptr [0x0044a69c]
0041c629: MOV dword ptr [EBX + 0x18],EDX
0041c62c: MOV EDX,dword ptr [0x0044a6a0]
0041c632: MOV dword ptr [EBX + 0x1c],EDX
0041c635: LEA EDX,[EBX + 0x10]
0041c638: MOV dword ptr [ESP],EAX
0041c63b: MOV dword ptr [ESP + 0x10],0x0
0041c643: MOV dword ptr [ESP + 0xc],0x10
0041c64b: ADD EBX,0x20
0041c64e: MOV dword ptr [ESP + 0x8],EDX
0041c652: MOV dword ptr [ESP + 0x4],0x10
0041c65a: MOV dword ptr [ESP + 0x20],ESI
0041c65e: MOV dword ptr [ESP + 0x24],0x10
0041c666: MOV dword ptr [ESP + 0x1c],0x0
0041c66e: MOV dword ptr [ESP + 0x18],0x0
0041c676: MOV dword ptr [ESP + 0x14],0x0
0041c67e: CALL 0x00434110
0041c683: MOV EAX,dword ptr [ESP + 0x58]
0041c687: MOV dword ptr [ESP + 0x8],EBX
0041c68b: MOV dword ptr [ESP],ESI
0041c68e: MOV dword ptr [ESP + 0x4],0x10
0041c696: SUB EAX,0x20
0041c699: MOV dword ptr [ESP + 0xc],EAX
0041c69d: CALL 0x004345b0
0041c6a2: ADD ESP,0x44
0041c6a5: POP EBX
0041c6a6: POP ESI
0041c6a7: RET