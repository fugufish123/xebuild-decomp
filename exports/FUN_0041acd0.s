0041acd0: PUSH EBX
0041acd1: MOV EAX,dword ptr [ESP + 0x8]
0041acd5: MOV EBX,dword ptr [EAX]
0041acd7: MOV ECX,dword ptr [EAX + 0x4]
0041acda: MOV EDX,dword ptr [EAX + 0x8]
0041acdd: MOV EAX,dword ptr [EAX + 0xc]
0041ace0: MOV dword ptr [0x0044a684],EBX
0041ace6: MOV dword ptr [0x0044a688],ECX
0041acec: MOV dword ptr [0x0044a68c],EDX
0041acf2: MOV [0x0044a690],EAX
0041acf7: POP EBX
0041acf8: RET