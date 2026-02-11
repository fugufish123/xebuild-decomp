0041ae40: PUSH EDI
0041ae41: PUSH ESI
0041ae42: PUSH EBX
0041ae43: SUB ESP,0x40
0041ae46: MOV EBX,dword ptr [ESP + 0x54]
0041ae4a: MOV dword ptr [ESP + 0x20],0xffffffff
0041ae52: MOV dword ptr [ESP + 0x24],0xffffffff
0041ae5a: MOV dword ptr [ESP + 0x28],0xffffffff
0041ae62: MOV dword ptr [ESP + 0x2c],0x3ff
0041ae6a: TEST BL,0x3
0041ae6d: JNZ 0x0041af15
0041ae73: MOV EAX,dword ptr [EBX]
0041ae75: MOV dword ptr [ESP + 0x30],EAX
0041ae79: MOV EAX,dword ptr [EBX + 0x4]
0041ae7c: MOV dword ptr [ESP + 0x34],EAX
0041ae80: MOV EAX,dword ptr [EBX + 0x8]
0041ae83: MOV dword ptr [ESP + 0x38],EAX
0041ae87: MOV EAX,dword ptr [EBX + 0xc]
0041ae8a: AND EAX,0x3ff
0041ae8f: MOV dword ptr [ESP + 0x3c],EAX
0041ae93: LEA ESI,[ESP + 0x30]
0041ae97: MOV dword ptr [ESP + 0x4],0x10
0041ae9f: MOV dword ptr [ESP],ESI
0041aea2: CALL 0x00434090
0041aea7: MOV dword ptr [ESP],ESI
0041aeaa: MOV EDI,EAX
0041aeac: CALL 0x00433ff0
0041aeb1: MOV dword ptr [ESP + 0x4],ESI
0041aeb5: MOV dword ptr [ESP],EBX
0041aeb8: MOV dword ptr [ESP + 0x8],0x10
0041aec0: CALL 0x00449100
0041aec5: TEST EAX,EAX
0041aec7: MOV EDX,0x4566c4
0041aecc: MOV dword ptr [ESP + 0x8],EDI
0041aed0: SETZ BL
0041aed3: CMP EDI,0x35
0041aed6: MOV dword ptr [ESP + 0x4],0x4566d0
0041aede: SETZ CL
0041aee1: TEST EAX,EAX
0041aee3: MOV EAX,EDX
0041aee5: MOV ESI,ECX
0041aee7: MOV ECX,0x4566ca
0041aeec: CMOVNZ EAX,ECX
0041aeef: CMP EDI,0x35
0041aef2: MOV dword ptr [ESP + 0x10],EAX
0041aef6: MOV EAX,dword ptr [ESP + 0x50]
0041aefa: CMOVNZ EDX,ECX
0041aefd: MOV dword ptr [ESP + 0xc],EDX
0041af01: AND EBX,ESI
0041af03: MOV dword ptr [ESP],EAX
0041af06: CALL 0x00433690
0041af0b: ADD ESP,0x40
0041af0e: MOVZX EAX,BL
0041af11: POP EBX
0041af12: POP ESI
0041af13: POP EDI
0041af14: RET
0041af15: MOVZX EAX,byte ptr [EBX]
0041af18: AND AL,byte ptr [ESP + 0x20]
0041af1c: MOV byte ptr [ESP + 0x30],AL
0041af20: MOVZX EAX,byte ptr [EBX + 0x1]
0041af24: AND AL,byte ptr [ESP + 0x21]
0041af28: MOV byte ptr [ESP + 0x31],AL
0041af2c: MOVZX EAX,byte ptr [EBX + 0x2]
0041af30: AND AL,byte ptr [ESP + 0x22]
0041af34: MOV byte ptr [ESP + 0x32],AL
0041af38: MOVZX EAX,byte ptr [EBX + 0x3]
0041af3c: AND AL,byte ptr [ESP + 0x23]
0041af40: MOV byte ptr [ESP + 0x33],AL
0041af44: MOVZX EAX,byte ptr [EBX + 0x4]
0041af48: AND AL,byte ptr [ESP + 0x24]
0041af4c: MOV byte ptr [ESP + 0x34],AL
0041af50: MOVZX EAX,byte ptr [EBX + 0x5]
0041af54: AND AL,byte ptr [ESP + 0x25]
0041af58: MOV byte ptr [ESP + 0x35],AL
0041af5c: MOVZX EAX,byte ptr [EBX + 0x6]
0041af60: AND AL,byte ptr [ESP + 0x26]
0041af64: MOV byte ptr [ESP + 0x36],AL
0041af68: MOVZX EAX,byte ptr [EBX + 0x7]
0041af6c: AND AL,byte ptr [ESP + 0x27]
0041af70: MOV byte ptr [ESP + 0x37],AL
0041af74: MOVZX EAX,byte ptr [EBX + 0x8]
0041af78: AND AL,byte ptr [ESP + 0x28]
0041af7c: MOV byte ptr [ESP + 0x38],AL
0041af80: MOVZX EAX,byte ptr [EBX + 0x9]
0041af84: AND AL,byte ptr [ESP + 0x29]
0041af88: MOV byte ptr [ESP + 0x39],AL
0041af8c: MOVZX EAX,byte ptr [EBX + 0xa]
0041af90: AND AL,byte ptr [ESP + 0x2a]
0041af94: MOV byte ptr [ESP + 0x3a],AL
0041af98: MOVZX EAX,byte ptr [EBX + 0xb]
0041af9c: AND AL,byte ptr [ESP + 0x2b]
0041afa0: MOV byte ptr [ESP + 0x3b],AL
0041afa4: MOVZX EAX,byte ptr [EBX + 0xc]
0041afa8: AND AL,byte ptr [ESP + 0x2c]
0041afac: MOV byte ptr [ESP + 0x3c],AL
0041afb0: MOVZX EAX,byte ptr [EBX + 0xd]
0041afb4: AND AL,byte ptr [ESP + 0x2d]
0041afb8: MOV byte ptr [ESP + 0x3d],AL
0041afbc: MOVZX EAX,byte ptr [EBX + 0xe]
0041afc0: AND AL,byte ptr [ESP + 0x2e]
0041afc4: MOV byte ptr [ESP + 0x3e],AL
0041afc8: MOVZX EAX,byte ptr [ESP + 0x2f]
0041afcd: AND AL,byte ptr [EBX + 0xf]
0041afd0: MOV byte ptr [ESP + 0x3f],AL
0041afd4: JMP 0x0041ae93