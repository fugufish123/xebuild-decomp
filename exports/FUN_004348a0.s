004348a0: CMP dword ptr [ESP + 0x10],0x0
004348a5: MOV EAX,dword ptr [ESP + 0x4]
004348a9: MOV EDX,dword ptr [ESP + 0x8]
004348ad: MOV ECX,dword ptr [ESP + 0xc]
004348b1: JNZ 0x004348d1
004348b3: ADD EAX,0xf4
004348b8: MOV dword ptr [ESP + 0xc],0x10
004348c0: MOV dword ptr [ESP + 0x8],ECX
004348c4: MOV dword ptr [ESP + 0x10],EAX
004348c8: MOV dword ptr [ESP + 0x4],EDX
004348cc: JMP 0x00438c30
004348d1: MOV dword ptr [ESP + 0x10],EAX
004348d5: MOV dword ptr [ESP + 0xc],0x10
004348dd: MOV dword ptr [ESP + 0x8],ECX
004348e1: MOV dword ptr [ESP + 0x4],EDX
004348e5: JMP 0x00438bc0