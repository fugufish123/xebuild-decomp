0041b420: PUSH EBX
0041b421: SUB ESP,0x68
0041b424: LEA EBX,[ESP + 0x50]
0041b428: LEA EAX,[ESP + 0x40]
0041b42c: MOV dword ptr [ESP + 0x24],0x10
0041b434: MOV dword ptr [ESP + 0x1c],0x0
0041b43c: MOV dword ptr [ESP + 0x18],0x0
0041b444: MOV dword ptr [ESP + 0x20],EBX
0041b448: MOV dword ptr [ESP],EAX
0041b44b: MOV dword ptr [ESP + 0x14],0x0
0041b453: MOV dword ptr [ESP + 0x10],0x0
0041b45b: MOV dword ptr [ESP + 0xc],0x10
0041b463: MOV dword ptr [ESP + 0x8],0x47a10c
0041b46b: MOV dword ptr [ESP + 0x4],0x10
0041b473: MOV dword ptr [ESP + 0x30],0xbf722795
0041b47b: MOV dword ptr [ESP + 0x34],0x98f6c047
0041b483: MOV dword ptr [ESP + 0x38],0x50f27d5c
0041b48b: MOV dword ptr [ESP + 0x3c],0xcd554d65
0041b493: MOV dword ptr [ESP + 0x40],0x73696874
0041b49b: MOV dword ptr [ESP + 0x44],0x756a7369
0041b4a3: MOV dword ptr [ESP + 0x48],0x6a617473
0041b4ab: MOV dword ptr [ESP + 0x4c],0x796b6e75
0041b4b3: CALL 0x00434110
0041b4b8: MOV EAX,dword ptr [ESP + 0x30]
0041b4bc: MOV dword ptr [ESP],EBX
0041b4bf: MOV dword ptr [ESP + 0xc],0x10
0041b4c7: MOV dword ptr [ESP + 0x8],0x47a12c
0041b4cf: MOV dword ptr [ESP + 0x4],0x10
0041b4d7: MOV [0x0047a12c],EAX
0041b4dc: MOV EAX,dword ptr [ESP + 0x34]
0041b4e0: MOV [0x0047a130],EAX
0041b4e5: MOV EAX,dword ptr [ESP + 0x38]
0041b4e9: MOV [0x0047a134],EAX
0041b4ee: MOV EAX,dword ptr [ESP + 0x3c]
0041b4f2: MOV [0x0047a138],EAX
0041b4f7: CALL 0x004345b0
0041b4fc: MOV dword ptr [ESP + 0x4],0x10
0041b504: MOV dword ptr [ESP],0x47a12c
0041b50b: CALL 0x00422ae0
0041b510: ADD ESP,0x68
0041b513: POP EBX
0041b514: RET