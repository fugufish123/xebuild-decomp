0041ce50: PUSH EDI
0041ce51: PUSH ESI
0041ce52: PUSH EBX
0041ce53: SUB ESP,0x30
0041ce56: MOV EAX,[0x0044a654]
0041ce5b: MOV EBX,dword ptr [ESP + 0x40]
0041ce5f: MOV ESI,dword ptr [ESP + 0x4c]
0041ce63: MOV EDI,dword ptr [ESP + 0x48]
0041ce67: MOV dword ptr [EBX + 0x10],EAX
0041ce6a: MOV EAX,[0x0044a658]
0041ce6f: SUB ESI,0x20
0041ce72: MOV dword ptr [EBX + 0x14],EAX
0041ce75: MOV EAX,[0x0044a65c]
0041ce7a: MOV dword ptr [EBX + 0x18],EAX
0041ce7d: MOV EAX,[0x0044a660]
0041ce82: MOV dword ptr [EBX + 0x1c],EAX
0041ce85: LEA EAX,[EBX + 0x10]
0041ce88: MOV dword ptr [ESP + 0x14],0x0
0041ce90: MOV dword ptr [ESP + 0x10],0x0
0041ce98: MOV dword ptr [ESP + 0xc],0x10
0041cea0: ADD EBX,0x20
0041cea3: MOV dword ptr [ESP + 0x8],EAX
0041cea7: MOV EAX,dword ptr [ESP + 0x44]
0041ceab: MOV dword ptr [ESP + 0x4],0x10
0041ceb3: MOV dword ptr [ESP + 0x20],EDI
0041ceb7: MOV dword ptr [ESP + 0x24],0x10
0041cebf: MOV dword ptr [ESP + 0x1c],0x0
0041cec7: MOV dword ptr [ESP],EAX
0041ceca: MOV dword ptr [ESP + 0x18],0x0
0041ced2: CALL 0x00434110
0041ced7: MOV dword ptr [ESP + 0x4c],ESI
0041cedb: MOV dword ptr [ESP + 0x48],EBX
0041cedf: MOV dword ptr [ESP + 0x40],EDI
0041cee3: MOV dword ptr [ESP + 0x44],0x10
0041ceeb: ADD ESP,0x30
0041ceee: POP EBX
0041ceef: POP ESI
0041cef0: POP EDI
0041cef1: JMP 0x004345b0