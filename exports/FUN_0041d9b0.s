0041d9b0: PUSH ESI
0041d9b1: PUSH EBX
0041d9b2: SUB ESP,0x44
0041d9b5: MOV EBX,dword ptr [ESP + 0x50]
0041d9b9: MOV EAX,dword ptr [EBX + 0x410]
0041d9bf: CMP EAX,0x400
0041d9c4: JZ 0x0041db60
0041d9ca: TEST EAX,EAX
0041d9cc: JZ 0x0041db45
0041d9d2: MOV dword ptr [ESP + 0x4],0x457178
0041d9da: MOV dword ptr [ESP],0x1
0041d9e1: CALL 0x00433690
0041d9e6: MOV EAX,dword ptr [EBX + 0x40c]
0041d9ec: MOV dword ptr [ESP],EAX
0041d9ef: CALL 0x00449140
0041d9f4: MOV dword ptr [EBX + 0x410],0x400
0041d9fe: MOV dword ptr [ESP + 0x4],0x1
0041da06: MOV dword ptr [ESP],0x400
0041da0d: CALL 0x004491a0
0041da12: MOV dword ptr [EBX + 0x40c],EAX
0041da18: MOV EDX,dword ptr [0x0044a5e0]
0041da1e: MOV ECX,dword ptr [0x0044a5e4]
0041da24: LEA ESI,[ESP + 0x30]
0041da28: MOV dword ptr [EAX + 0x10],EDX
0041da2b: MOV dword ptr [EAX + 0x14],ECX
0041da2e: MOV EAX,dword ptr [ESP + 0x54]
0041da32: MOV dword ptr [ESP + 0x8],0x8
0041da3a: MOV dword ptr [ESP + 0x4],EAX
0041da3e: MOV EAX,dword ptr [EBX + 0x40c]
0041da44: ADD EAX,0x20
0041da47: MOV dword ptr [ESP],EAX
0041da4a: CALL 0x004223f0
0041da4f: MOV EAX,dword ptr [EBX + 0x40c]
0041da55: MOV byte ptr [EAX + 0x18],0x1
0041da59: MOVZX EDX,byte ptr [0x00479f15]
0041da60: MOV EAX,dword ptr [EBX + 0x40c]
0041da66: MOV byte ptr [EAX + 0x19],DL
0041da69: MOV EAX,dword ptr [EBX + 0x40c]
0041da6f: MOV dword ptr [ESP + 0x24],0x10
0041da77: MOV dword ptr [ESP + 0x1c],0x0
0041da7f: MOV dword ptr [ESP + 0x18],0x0
0041da87: MOV dword ptr [ESP + 0x14],0x0
0041da8f: MOV dword ptr [ESP + 0x20],EAX
0041da93: MOV dword ptr [ESP + 0x10],0x0
0041da9b: ADD EAX,0x10
0041da9e: MOV ECX,dword ptr [EBX + 0x410]
0041daa4: MOV dword ptr [ESP + 0x8],EAX
0041daa8: MOV dword ptr [ESP + 0x4],0x10
0041dab0: MOV dword ptr [ESP],0x47a11c
0041dab7: LEA EDX,[ECX + -0x10]
0041daba: MOV dword ptr [ESP + 0xc],EDX
0041dabe: CALL 0x00434110
0041dac3: MOV dword ptr [ESP + 0x20],ESI
0041dac7: MOV dword ptr [ESP + 0x24],0x10
0041dacf: MOV dword ptr [ESP + 0x1c],0x0
0041dad7: MOV dword ptr [ESP + 0x18],0x0
0041dadf: MOV dword ptr [ESP + 0x14],0x0
0041dae7: MOV dword ptr [ESP + 0x10],0x0
0041daef: MOV dword ptr [ESP + 0xc],0x10
0041daf7: MOV EAX,dword ptr [EBX + 0x40c]
0041dafd: MOV dword ptr [ESP + 0x4],0x10
0041db05: MOV dword ptr [ESP],0x47a11c
0041db0c: MOV dword ptr [ESP + 0x8],EAX
0041db10: CALL 0x00434110
0041db15: MOV EAX,dword ptr [EBX + 0x410]
0041db1b: SUB EAX,0x10
0041db1e: MOV dword ptr [ESP + 0xc],EAX
0041db22: MOV EAX,dword ptr [EBX + 0x40c]
0041db28: MOV dword ptr [ESP],ESI
0041db2b: MOV dword ptr [ESP + 0x4],0x10
0041db33: ADD EAX,0x10
0041db36: MOV dword ptr [ESP + 0x8],EAX
0041db3a: CALL 0x004345b0
0041db3f: ADD ESP,0x44
0041db42: POP EBX
0041db43: POP ESI
0041db44: RET
0041db45: MOV dword ptr [ESP + 0x4],0x457110
0041db4d: MOV dword ptr [ESP],0x1
0041db54: CALL 0x00433690
0041db59: JMP 0x0041d9e6
0041db60: MOV EAX,dword ptr [EBX + 0x40c]
0041db66: JMP 0x0041da18