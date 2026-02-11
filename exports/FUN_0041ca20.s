0041ca20: PUSH EBP
0041ca21: PUSH EDI
0041ca22: PUSH ESI
0041ca23: PUSH EBX
0041ca24: SUB ESP,0x6c
0041ca27: MOV EAX,dword ptr [ESP + 0x88]
0041ca2e: MOV ESI,dword ptr [ESP + 0x8c]
0041ca35: MOV EBX,dword ptr [ESP + 0x80]
0041ca3c: MOV EDX,dword ptr [ESP + 0x90]
0041ca43: MOV dword ptr [ESP + 0x34],EAX
0041ca47: MOV EAX,[0x0044a664]
0041ca4c: TEST ESI,ESI
0041ca4e: MOV dword ptr [ESP + 0x50],EAX
0041ca52: MOV EAX,[0x0044a668]
0041ca57: MOV dword ptr [ESP + 0x54],EAX
0041ca5b: MOV EAX,[0x0044a66c]
0041ca60: MOV dword ptr [ESP + 0x58],EAX
0041ca64: MOV EAX,[0x0044a670]
0041ca69: MOV dword ptr [ESP + 0x5c],EAX
0041ca6d: JZ 0x0041cb82
0041ca73: MOV EAX,dword ptr [EBX + 0x40c]
0041ca79: MOV ECX,dword ptr [EBX + 0x410]
0041ca7f: MOV dword ptr [ESP + 0x30],EAX
0041ca83: MOV EAX,dword ptr [ESP + 0x84]
0041ca8a: ADD EAX,ECX
0041ca8c: CMP EDX,EAX
0041ca8e: JC 0x0041cc25
0041ca94: MOV EAX,dword ptr [ESP + 0x30]
0041ca98: XOR EDX,EDX
0041ca9a: LEA EDI,[ESP + 0x40]
0041ca9e: XOR ESI,ESI
0041caa0: MOV word ptr [EAX + 0x30],DX
0041caa4: LEA EAX,[ESP + 0x50]
0041caa8: MOV dword ptr [ESP + 0x24],0x10
0041cab0: MOV dword ptr [ESP + 0x20],EDI
0041cab4: MOV dword ptr [ESP + 0x1c],0x0
0041cabc: MOV dword ptr [ESP + 0x18],0x0
0041cac4: MOV dword ptr [ESP + 0x14],0x0
0041cacc: MOV dword ptr [ESP + 0x10],0x0
0041cad4: MOV dword ptr [ESP + 0xc],0x10
0041cadc: MOV dword ptr [ESP + 0x8],EAX
0041cae0: MOV dword ptr [ESP + 0x4],0x10
0041cae8: MOV dword ptr [ESP],0x47a10c
0041caef: CALL 0x00434110
0041caf4: MOV EAX,dword ptr [EBX + 0x40c]
0041cafa: MOV EDX,dword ptr [EAX + 0x33c]
0041cb00: MOV ECX,dword ptr [EAX + 0x338]
0041cb06: MOV EBP,dword ptr [EAX + 0x334]
0041cb0c: MOV dword ptr [ESP + 0x30],EDX
0041cb10: MOV EDX,dword ptr [EAX + 0x330]
0041cb16: MOV dword ptr [EBX + 0x41c],ECX
0041cb1c: MOV ECX,dword ptr [ESP + 0x30]
0041cb20: MOV dword ptr [EBX + 0x418],EBP
0041cb26: MOV dword ptr [EBX + 0x414],EDX
0041cb2c: MOV EDX,dword ptr [ESP + 0x50]
0041cb30: MOV dword ptr [EBX + 0x420],ECX
0041cb36: MOV dword ptr [EAX + 0x20],EDX
0041cb39: MOV EDX,dword ptr [ESP + 0x54]
0041cb3d: MOV dword ptr [EAX + 0x24],EDX
0041cb40: MOV EDX,dword ptr [ESP + 0x58]
0041cb44: MOV dword ptr [EAX + 0x28],EDX
0041cb47: MOV EDX,dword ptr [ESP + 0x5c]
0041cb4b: MOV dword ptr [EAX + 0x2c],EDX
0041cb4e: MOV EAX,dword ptr [EBX + 0x410]
0041cb54: SUB EAX,0x30
0041cb57: MOV dword ptr [ESP + 0xc],EAX
0041cb5b: MOV EAX,dword ptr [EBX + 0x40c]
0041cb61: MOV dword ptr [ESP],EDI
0041cb64: MOV dword ptr [ESP + 0x4],0x10
0041cb6c: ADD EAX,0x30
0041cb6f: MOV dword ptr [ESP + 0x8],EAX
0041cb73: CALL 0x004345b0
0041cb78: ADD ESP,0x6c
0041cb7b: MOV EAX,ESI
0041cb7d: POP EBX
0041cb7e: POP ESI
0041cb7f: POP EDI
0041cb80: POP EBP
0041cb81: RET
0041cb82: MOV EDI,dword ptr [EBX + 0x40c]
0041cb88: MOV dword ptr [EDI + 0x20],0x0
0041cb8f: MOV dword ptr [EDI + 0x22c],0x0
0041cb99: LEA ECX,[EDI + 0x20]
0041cb9c: ADD EDI,0x24
0041cb9f: MOV EAX,dword ptr [ESP + 0x8c]
0041cba6: AND EDI,0xfffffffc
0041cba9: SUB ECX,EDI
0041cbab: ADD ECX,0x210
0041cbb1: SHR ECX,0x2
0041cbb4: STOSD.REP ES:EDI
0041cbb6: CMP dword ptr [0x00479ea8],0x2
0041cbbd: MOV EAX,dword ptr [EBX + 0x40c]
0041cbc3: JZ 0x0041cdb0
0041cbc9: MOV byte ptr [EAX + 0x21b],0x0
0041cbd0: MOVZX ECX,word ptr [0x00479570]
0041cbd7: MOV EAX,dword ptr [EBX + 0x40c]
0041cbdd: MOV word ptr [EAX + 0x21c],CX
0041cbe4: MOVZX ECX,byte ptr [0x00479572]
0041cbeb: MOV byte ptr [EAX + 0x21e],CL
0041cbf1: MOVZX ECX,byte ptr [0x00479f15]
0041cbf8: MOV EAX,dword ptr [EBX + 0x40c]
0041cbfe: MOV byte ptr [EAX + 0x21f],CL
0041cc04: MOV EAX,dword ptr [EBX + 0x40c]
0041cc0a: MOV ECX,dword ptr [EBX + 0x410]
0041cc10: MOV dword ptr [ESP + 0x30],EAX
0041cc14: MOV EAX,dword ptr [ESP + 0x84]
0041cc1b: ADD EAX,ECX
0041cc1d: CMP EDX,EAX
0041cc1f: JNC 0x0041cde2
0041cc25: SUB EAX,EDX
0041cc27: SUB EDX,ECX
0041cc29: CMP EAX,0x4000
0041cc2e: MOV dword ptr [EBX + 0x428],EDX
0041cc34: MOV dword ptr [EBX + 0x424],EAX
0041cc3a: JBE 0x0041cdbc
0041cc40: MOV ECX,dword ptr [ESP + 0x34]
0041cc44: SUB EAX,0x4001
0041cc49: SHR EAX,0xe
0041cc4c: MOV dword ptr [ESP + 0x38],EAX
0041cc50: MOVZX EDI,CX
0041cc53: SHL ECX,0x8
0041cc56: LEA EDX,[EDI + 0x1]
0041cc59: MOV dword ptr [ESP + 0x3c],EDI
0041cc5d: MOV ESI,EDI
0041cc5f: LEA EBP,[EDX + EAX*0x1]
0041cc62: LEA EAX,[EDI + EDI*0x1]
0041cc65: MOV EDI,dword ptr [ESP + 0x30]
0041cc69: SUB EDI,EAX
0041cc6b: JMP 0x0041cc73
0041cc70: ADD EDX,0x1
0041cc73: MOV EAX,ESI
0041cc75: SHR AX,0x8
0041cc79: ADD EAX,ECX
0041cc7b: ADD CX,0x100
0041cc80: CMP EDX,EBP
0041cc82: MOV word ptr [EDI + ESI*0x2 + 0x32],AX
0041cc87: MOV ESI,EDX
0041cc89: JNZ 0x0041cc70
0041cc8b: MOV EAX,dword ptr [ESP + 0x38]
0041cc8f: LEA EDX,[EAX + 0x2]
0041cc92: LEA ESI,[EAX + 0x1]
0041cc95: MOV EAX,dword ptr [ESP + 0x3c]
0041cc99: LEA EAX,[EDX + EAX*0x1 + -0x1]
0041cc9d: MOV EDI,dword ptr [ESP + 0x30]
0041cca1: ADD ESI,0x1
0041cca4: MOV ECX,EAX
0041cca6: MOVZX EAX,word ptr [ESP + 0x34]
0041ccab: SHR CX,0x8
0041ccaf: LEA EAX,[EAX + EDX*0x1 + -0x1]
0041ccb3: SHL EAX,0x8
0041ccb6: ADD EAX,ECX
0041ccb8: MOV word ptr [EDI + EDX*0x2 + 0x30],AX
0041ccbd: MOV EAX,ESI
0041ccbf: ROL AX,0x8
0041ccc3: MOV word ptr [EDI + 0x30],AX
0041ccc7: LEA EAX,[ESP + 0x50]
0041cccb: LEA EDI,[ESP + 0x40]
0041cccf: MOV dword ptr [ESP + 0x24],0x10
0041ccd7: MOV dword ptr [ESP + 0x1c],0x0
0041ccdf: MOV dword ptr [ESP + 0x20],EDI
0041cce3: MOV dword ptr [ESP + 0x18],0x0
0041cceb: MOV dword ptr [ESP + 0x14],0x0
0041ccf3: MOV dword ptr [ESP + 0x10],0x0
0041ccfb: MOV dword ptr [ESP + 0xc],0x10
0041cd03: MOV dword ptr [ESP + 0x8],EAX
0041cd07: MOV dword ptr [ESP + 0x4],0x10
0041cd0f: MOV dword ptr [ESP],0x47a10c
0041cd16: CALL 0x00434110
0041cd1b: MOV ECX,dword ptr [ESP + 0x8c]
0041cd22: TEST ECX,ECX
0041cd24: JNZ 0x0041caf4
0041cd2a: MOV EAX,dword ptr [EBX + 0x40c]
0041cd30: MOV EDX,dword ptr [ESP + 0x40]
0041cd34: MOV dword ptr [EAX + 0x20],EDX
0041cd37: MOV EDX,dword ptr [ESP + 0x44]
0041cd3b: MOV dword ptr [EAX + 0x24],EDX
0041cd3e: MOV EDX,dword ptr [ESP + 0x48]
0041cd42: MOV dword ptr [EAX + 0x28],EDX
0041cd45: MOV EDX,dword ptr [ESP + 0x4c]
0041cd49: MOV dword ptr [EAX + 0x2c],EDX
0041cd4c: MOV EAX,dword ptr [EBX + 0x40c]
0041cd52: MOV dword ptr [ESP + 0x24],0x10
0041cd5a: MOV dword ptr [ESP + 0x1c],0x0
0041cd62: MOV dword ptr [ESP + 0x18],0x0
0041cd6a: MOV dword ptr [ESP + 0x14],0x0
0041cd72: LEA EDX,[EAX + 0x220]
0041cd78: MOV dword ptr [ESP + 0x10],0x0
0041cd80: MOV dword ptr [ESP + 0xc],0x220
0041cd88: MOV dword ptr [ESP + 0x8],EAX
0041cd8c: MOV dword ptr [ESP + 0x4],0x10
0041cd94: MOV dword ptr [ESP + 0x20],EDX
0041cd98: MOV dword ptr [ESP],0x47a11c
0041cd9f: CALL 0x00434110
0041cda4: JMP 0x0041caf4
0041cdb0: MOV byte ptr [EAX + 0x21b],0x1
0041cdb7: JMP 0x0041cbd0
0041cdbc: TEST EAX,EAX
0041cdbe: JNZ 0x0041cdcd
0041cdc0: XOR EAX,EAX
0041cdc2: XOR ESI,ESI
0041cdc4: MOV EDI,dword ptr [ESP + 0x30]
0041cdc8: JMP 0x0041ccc3
0041cdcd: MOVZX EAX,word ptr [ESP + 0x34]
0041cdd2: XOR ESI,ESI
0041cdd4: MOV EDX,0x1
0041cdd9: MOV dword ptr [ESP + 0x3c],EAX
0041cddd: JMP 0x0041cc99
0041cde2: MOV EAX,dword ptr [ESP + 0x30]
0041cde6: LEA EDI,[ESP + 0x40]
0041cdea: XOR ESI,ESI
0041cdec: MOV word ptr [EAX + 0x30],0x0
0041cdf2: LEA EAX,[ESP + 0x50]
0041cdf6: MOV dword ptr [ESP + 0x24],0x10
0041cdfe: MOV dword ptr [ESP + 0x20],EDI
0041ce02: MOV dword ptr [ESP + 0x1c],0x0
0041ce0a: MOV dword ptr [ESP + 0x18],0x0
0041ce12: MOV dword ptr [ESP + 0x14],0x0
0041ce1a: MOV dword ptr [ESP + 0x10],0x0
0041ce22: MOV dword ptr [ESP + 0xc],0x10
0041ce2a: MOV dword ptr [ESP + 0x8],EAX
0041ce2e: MOV dword ptr [ESP + 0x4],0x10
0041ce36: MOV dword ptr [ESP],0x47a10c
0041ce3d: CALL 0x00434110
0041ce42: JMP 0x0041cd2a