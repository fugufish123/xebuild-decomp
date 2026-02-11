0040e8a0: PUSH ESI
0040e8a1: PUSH EBX
0040e8a2: SUB ESP,0x44
0040e8a5: LEA EAX,[ESP + 0x2c]
0040e8a9: MOV EDX,dword ptr [ESP + 0x50]
0040e8ad: MOV dword ptr [ESP + 0x14],0x14
0040e8b5: MOV dword ptr [ESP + 0x4],0x10
0040e8bd: MOV EBX,dword ptr [ESP + 0x60]
0040e8c1: MOV dword ptr [ESP + 0x10],EAX
0040e8c5: MOV EAX,dword ptr [ESP + 0x54]
0040e8c9: MOV dword ptr [ESP],EDX
0040e8cc: MOV ESI,dword ptr [ESP + 0x58]
0040e8d0: SUB EAX,0x20
0040e8d3: MOV dword ptr [ESP + 0xc],EAX
0040e8d7: LEA EAX,[EDX + 0x20]
0040e8da: MOV dword ptr [ESP + 0x8],EAX
0040e8de: CALL 0x00434c00
0040e8e3: MOV EAX,dword ptr [ESP + 0x2c]
0040e8e7: MOV dword ptr [EBX],EAX
0040e8e9: MOV EAX,dword ptr [ESP + 0x30]
0040e8ed: MOV dword ptr [EBX + 0x4],EAX
0040e8f0: MOV EAX,dword ptr [ESP + 0x34]
0040e8f4: MOV dword ptr [EBX + 0x8],EAX
0040e8f7: MOV EAX,dword ptr [ESP + 0x38]
0040e8fb: MOV dword ptr [EBX + 0xc],EAX
0040e8fe: MOV EAX,dword ptr [ESP + 0x3c]
0040e902: MOV dword ptr [EBX + 0x10],EAX
0040e905: MOV dword ptr [ESP],ESI
0040e908: CALL 0x00420ab0
0040e90d: MOV EDX,0x44a540
0040e912: CMP AX,0x5344
0040e916: MOV EAX,0x44a54c
0040e91b: CMOVZ EAX,EDX
0040e91e: MOV dword ptr [ESP],ESI
0040e921: MOV dword ptr [ESP + 0x10],EAX
0040e925: MOV EAX,dword ptr [ESP + 0x68]
0040e929: MOV dword ptr [ESP + 0xc],EAX
0040e92d: MOV EAX,dword ptr [ESP + 0x64]
0040e931: MOV dword ptr [ESP + 0x8],EAX
0040e935: MOV EAX,dword ptr [ESP + 0x5c]
0040e939: MOV dword ptr [ESP + 0x4],EAX
0040e93d: CALL 0x0040e690
0040e942: ADD ESP,0x44
0040e945: POP EBX
0040e946: POP ESI
0040e947: RET