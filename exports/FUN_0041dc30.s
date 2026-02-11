0041dc30: PUSH EBP
0041dc31: PUSH EDI
0041dc32: PUSH ESI
0041dc33: PUSH EBX
0041dc34: SUB ESP,0x24c
0041dc3a: MOV EDI,dword ptr [ESP + 0x264]
0041dc41: MOV EBX,dword ptr [ESP + 0x260]
0041dc48: LEA ESI,[ESP + 0x58]
0041dc4c: MOV EAX,dword ptr [ESP + 0x268]
0041dc53: MOV dword ptr [ESP],EDI
0041dc56: MOV dword ptr [ESP + 0x2c],EAX
0041dc5a: CALL 0x00449108
0041dc5f: MOV dword ptr [ESP + 0x8],EDI
0041dc63: MOV dword ptr [ESP + 0x4],EBX
0041dc67: MOV EBP,EAX
0041dc69: MOV dword ptr [ESP],EAX
0041dc6c: CALL 0x004490f8
0041dc71: LEA EAX,[EDI + 0xfffffeb0]
0041dc77: LEA ECX,[EBX + 0x150]
0041dc7d: MOV dword ptr [ESP + 0x1c],0x14
0041dc85: MOV dword ptr [ESP + 0x18],ESI
0041dc89: MOV dword ptr [ESP + 0x14],0x0
0041dc91: MOV dword ptr [ESP + 0x4],EAX
0041dc95: MOV dword ptr [ESP],ECX
0041dc98: MOV dword ptr [ESP + 0x10],0x0
0041dca0: MOV dword ptr [ESP + 0xc],0x0
0041dca8: MOV dword ptr [ESP + 0x8],0x0
0041dcb0: MOV dword ptr [ESP + 0x20],EAX
0041dcb4: MOV dword ptr [ESP + 0x24],ECX
0041dcb8: CALL 0x00434a30
0041dcbd: LEA EAX,[EBX + 0xc]
0041dcc0: MOV dword ptr [ESP + 0x8],0x14
0041dcc8: MOV dword ptr [ESP + 0x4],ESI
0041dccc: MOV dword ptr [ESP],EAX
0041dccf: MOV dword ptr [ESP + 0x28],EAX
0041dcd3: CALL 0x00449100
0041dcd8: TEST EAX,EAX
0041dcda: JNZ 0x0041def0
0041dce0: MOV EAX,dword ptr [ESP + 0x20]
0041dce4: MOV dword ptr [ESP + 0x1c],0x14
0041dcec: MOV dword ptr [ESP + 0x18],ESI
0041dcf0: MOV dword ptr [ESP + 0x14],0x0
0041dcf8: MOV dword ptr [ESP + 0x10],0x0
0041dd00: MOV dword ptr [ESP + 0xc],0x0
0041dd08: MOV dword ptr [ESP + 0x4],EAX
0041dd0c: MOV EAX,dword ptr [ESP + 0x24]
0041dd10: MOV dword ptr [ESP + 0x8],0x0
0041dd18: MOV dword ptr [ESP],EAX
0041dd1b: CALL 0x00434a30
0041dd20: MOV EAX,dword ptr [ESP + 0x28]
0041dd24: MOV dword ptr [ESP + 0x8],0x14
0041dd2c: MOV dword ptr [ESP + 0x4],ESI
0041dd30: MOV dword ptr [ESP],EAX
0041dd33: CALL 0x00449100
0041dd38: TEST EAX,EAX
0041dd3a: JNZ 0x0041ded0
0041dd40: MOV EDX,dword ptr [ESP + 0x2c]
0041dd44: LEA EAX,[EBX + 0x140]
0041dd4a: MOV dword ptr [ESP + 0x8],0x8
0041dd52: MOV dword ptr [ESP],EAX
0041dd55: MOV dword ptr [ESP + 0x28],EAX
0041dd59: MOV dword ptr [ESP + 0x4],EDX
0041dd5d: CALL 0x004223f0
0041dd62: MOV EAX,[0x0044a620]
0041dd67: MOV EDX,dword ptr [0x0044a630]
0041dd6d: MOV ECX,dword ptr [0x0044a634]
0041dd73: MOV dword ptr [ESP + 0x38],EAX
0041dd77: MOV EAX,[0x0044a624]
0041dd7c: MOV dword ptr [ESP + 0x48],EDX
0041dd80: MOV EDX,dword ptr [0x0044a638]
0041dd86: MOV dword ptr [EBX + 0x124],ECX
0041dd8c: MOV dword ptr [ESP + 0x4c],ECX
0041dd90: MOV dword ptr [ESP + 0x3c],EAX
0041dd94: MOV EAX,[0x0044a628]
0041dd99: MOV ECX,dword ptr [0x0044a638]
0041dd9f: MOV dword ptr [ESP + 0x50],EDX
0041dda3: MOV EDX,dword ptr [0x0044a630]
0041dda9: MOV dword ptr [ESP + 0x40],EAX
0041ddad: MOV EAX,[0x0044a62c]
0041ddb2: MOV dword ptr [EBX + 0x128],ECX
0041ddb8: MOV dword ptr [EBX + 0x120],EDX
0041ddbe: MOV dword ptr [ESP + 0x44],EAX
0041ddc2: MOV EAX,[0x0044a63c]
0041ddc7: MOV dword ptr [EBX + 0x12c],EAX
0041ddcd: MOV dword ptr [ESP + 0x54],EAX
0041ddd1: MOVZX EAX,byte ptr [0x00479f15]
0041ddd8: MOV byte ptr [EBX + 0x14f],AL
0041ddde: MOV dword ptr [ESP + 0x8],EDI
0041dde2: LEA EDI,[ESP + 0x38]
0041dde6: MOV dword ptr [ESP + 0x4],EBX
0041ddea: MOV dword ptr [ESP],EBP
0041dded: ADD EBX,0x130
0041ddf3: CALL 0x004490f8
0041ddf8: MOV dword ptr [ESP + 0x4],EDI
0041ddfc: MOV dword ptr [ESP],ESI
0041ddff: CALL 0x00434850
0041de04: LEA EAX,[ESP + 0x48]
0041de08: LEA EDX,[EBP + 0x140]
0041de0e: MOV dword ptr [ESP + 0x14],0x1
0041de16: MOV dword ptr [ESP + 0x8],0x10
0041de1e: MOV dword ptr [ESP],ESI
0041de21: MOV dword ptr [ESP + 0x10],EAX
0041de25: MOV dword ptr [ESP + 0x2c],EAX
0041de29: MOV EAX,dword ptr [ESP + 0x28]
0041de2d: MOV dword ptr [ESP + 0x4],EDX
0041de31: MOV dword ptr [ESP + 0xc],EAX
0041de35: CALL 0x004348f0
0041de3a: MOV EDX,dword ptr [EBX + 0x10]
0041de3d: MOV EAX,dword ptr [ESP + 0x2c]
0041de41: MOV dword ptr [ESP + 0x48],EDX
0041de45: MOV EDX,dword ptr [EBX + 0x14]
0041de48: MOV dword ptr [ESP + 0x4c],EDX
0041de4c: MOV EDX,dword ptr [EBX + 0x18]
0041de4f: MOV dword ptr [ESP + 0x50],EDX
0041de53: MOV EDX,dword ptr [EBX + 0x1c]
0041de56: MOV dword ptr [ESP + 0x10],EAX
0041de5a: MOV EAX,dword ptr [ESP + 0x24]
0041de5e: MOV dword ptr [ESP + 0x14],0x1
0041de66: MOV dword ptr [ESP],ESI
0041de69: MOV dword ptr [ESP + 0x54],EDX
0041de6d: MOV dword ptr [ESP + 0xc],EAX
0041de71: MOV EAX,dword ptr [ESP + 0x20]
0041de75: MOV dword ptr [ESP + 0x8],EAX
0041de79: LEA EAX,[EBP + 0x150]
0041de7f: MOV dword ptr [ESP + 0x4],EAX
0041de83: CALL 0x004348f0
0041de88: MOV dword ptr [ESP + 0x4],0x47a11c
0041de90: MOV dword ptr [ESP],ESI
0041de93: CALL 0x00434850
0041de98: MOV dword ptr [ESP + 0xc],0x1
0041dea0: MOV dword ptr [ESP + 0x8],EBX
0041dea4: MOV dword ptr [ESP + 0x4],EDI
0041dea8: MOV dword ptr [ESP],ESI
0041deab: CALL 0x004348a0
0041deb0: MOV dword ptr [ESP + 0x260],EBP
0041deb7: ADD ESP,0x24c
0041debd: POP EBX
0041debe: POP ESI
0041debf: POP EDI
0041dec0: POP EBP
0041dec1: JMP 0x00449140
0041ded0: MOV dword ptr [ESP + 0x4],0x457248
0041ded8: MOV dword ptr [ESP],0x0
0041dedf: CALL 0x00433690
0041dee4: JMP 0x0041deb0
0041def0: MOV dword ptr [ESP + 0x4],0x45720c
0041def8: MOV dword ptr [ESP],0x1
0041deff: CALL 0x00433690
0041df04: MOV dword ptr [ESP + 0x8],0x1
0041df0c: MOV dword ptr [ESP + 0x4],EDI
0041df10: MOV dword ptr [ESP],EBP
0041df13: CALL 0x00402020
0041df18: TEST EAX,EAX
0041df1a: JNZ 0x0041df71
0041df1c: MOV dword ptr [ESP + 0x4],0x4571e0
0041df24: MOV dword ptr [ESP],0x1
0041df2b: CALL 0x00433690
0041df30: MOV dword ptr [ESP + 0x8],EDI
0041df34: MOV dword ptr [ESP + 0x4],EBX
0041df38: MOV dword ptr [ESP],EBP
0041df3b: CALL 0x004490f8
0041df40: MOV dword ptr [ESP + 0x8],0x0
0041df48: MOV dword ptr [ESP + 0x4],EDI
0041df4c: MOV dword ptr [ESP],EBP
0041df4f: CALL 0x00402020
0041df54: TEST EAX,EAX
0041df56: JNZ 0x0041df71
0041df58: MOV dword ptr [ESP + 0x4],0x457200
0041df60: MOV dword ptr [ESP],0x1
0041df67: CALL 0x00433690
0041df6c: JMP 0x0041dce0
0041df71: MOV dword ptr [ESP + 0x4],0x4571d5
0041df79: MOV dword ptr [ESP],0x1
0041df80: CALL 0x00433690
0041df85: MOV dword ptr [ESP + 0x8],EDI
0041df89: MOV dword ptr [ESP + 0x4],EBP
0041df8d: MOV dword ptr [ESP],EBX
0041df90: CALL 0x004490f8
0041df95: JMP 0x0041dce0