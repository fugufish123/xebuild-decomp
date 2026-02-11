0041aca0: PUSH EBX
0041aca1: MOV EAX,dword ptr [ESP + 0x8]
0041aca5: MOV EBX,dword ptr [EAX]
0041aca7: MOV ECX,dword ptr [EAX + 0x4]
0041acaa: MOV EDX,dword ptr [EAX + 0x8]
0041acad: MOV EAX,dword ptr [EAX + 0xc]
0041acb0: MOV dword ptr [0x0044a694],EBX
0041acb6: MOV dword ptr [0x0044a698],ECX
0041acbc: MOV dword ptr [0x0044a69c],EDX
0041acc2: MOV [0x0044a6a0],EAX
0041acc7: POP EBX
0041acc8: RET