0041ac70: PUSH EBX
0041ac71: MOV EAX,dword ptr [ESP + 0x8]
0041ac75: MOV EBX,dword ptr [EAX]
0041ac77: MOV ECX,dword ptr [EAX + 0x4]
0041ac7a: MOV EDX,dword ptr [EAX + 0x8]
0041ac7d: MOV EAX,dword ptr [EAX + 0xc]
0041ac80: MOV dword ptr [0x0044a6a4],EBX
0041ac86: MOV dword ptr [0x0044a6a8],ECX
0041ac8c: MOV dword ptr [0x0044a6ac],EDX
0041ac92: MOV [0x0044a6b0],EAX
0041ac97: POP EBX
0041ac98: RET