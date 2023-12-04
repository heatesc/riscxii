#ifndef INST_FORMAT_H
#define INST_FORMAT_H

#ifndef LOCAL_HEADERS
#define LOCAL_HEADERS
#include "./../header_files/loc_headers.h"
#endif

// FIELD FORMATS SHARED BY MORE THAN ONE TYPE

#define OPCODE_START 0
#define OPCODE_END 6
#define RD_START 7
#define RD_END 11
#define FUNC3_START 12
#define FUNC3_END 14
#define RS1_START 15
#define RS1_END 19
#define RS2_START 20
#define RS2_END 24

// FIELD FORMATS EXCLUSIVE TO ONE INSTRUCTION TYPE

#define FUNC7_START 25
#define FUNC7_END 31

#define I_IMM_0_TO_11_START 20
#define I_IMM_0_TO_11_END 31

#define S_IMM_0_TO_4_START 7
#define S_IMM_0_TO_4_END 11
#define S_IMM_5_TO_11_START 25
#define S_IMM_5_TO_11_END 31

#define SB_IMM_11 7
#define SB_IMM_1_TO_4_START 8
#define SB_IMM_1_TO_4_END 11
#define SB_IMM_5_TO_10_START 25
#define SB_IMM_5_TO_10_END 30
#define SB_IMM_12 31

#define U_IMM_12_TO_31_START 12
#define U_IMM_12_TO_31_END 31

#define UJ_IMM_12_TO_19_START 12
#define UJ_IMM_12_TO_19_END 19
#define UJ_IMM_11 20
#define UJ_IMM_1_TO_10_START 21
#define UJ_IMM_1_TO_10_END 30
#define UJ_IMM_20 31

// OPCODES IN HEX

#define OPCODE_0110011 0x33
#define OPCODE_0010011 0x13
#define OPCODE_0110111 0x37
#define OPCODE_0000011 0x03
#define OPCODE_0100011 0x23
#define OPCODE_1100011 0x63
#define OPCODE_1101111 0x6F
#define OPCODE_1100111 0x67

// IMM SIZES

#define IMM_SZ_I 12
#define IMM_SZ_SB 13
#define IMM_SZ_S 12
#define IMM_SZ_U 20
#define IMM_SZ_UJ 20

// SPECIFIERS FOR ARITHMETIC AND LOGIC INSTRUCTIONS

// add
#define OPCODE_ADD OPCODE_0110011
#define FUNC3_ADD 0x0
#define FUNC7_ADD 0x0

// addi
#define OPCODE_ADDI OPCODE_0010011
#define FUNC3_ADDI 0x0

// sub
#define OPCODE_SUB OPCODE_0110011
#define FUNC3_SUB 0x0
#define FUNC7_SUB 0x20

// lui
#define OPCODE_LUI OPCODE_0110111

// xor
#define OPCODE_XOR OPCODE_0110011
#define FUNC3_XOR 0x4
#define FUNC7_XOR 0x0

// xori
#define OPCODE_XORI OPCODE_0010011
#define FUNC3_XORI 0x4

// or
#define OPCODE_OR OPCODE_0110011
#define FUNC3_OR 0x6
#define FUNC7_OR 0x0

// ori
#define OPCODE_ORI OPCODE_0010011
#define FUNC3_ORI 0x6

// and
#define OPCODE_AND OPCODE_0110011
#define FUNC3_AND 0x7
#define FUNC7_AND 0x0

// andi
#define OPCODE_ANDI OPCODE_0010011
#define FUNC3_ANDI 0x7

// sll
#define OPCODE_SLL OPCODE_0110011
#define FUNC3_SLL 0x1
#define FUNC7_SLL 0x0

// srl
#define OPCODE_SRL OPCODE_0110011
#define FUNC3_SRL 0x5
#define FUNC7_SRL 0x0

// sra
#define OPCODE_SRA OPCODE_0110011
#define FUNC3_SRA 0x5
#define FUNC7_SRA 0x20

// SPECIFIERS FOR MEMORY ACCESS INSTRUCTIONS

// lb
#define OPCODE_LB OPCODE_0000011
#define FUNC3_LB 0x0

// lh
#define OPCODE_LH OPCODE_0000011
#define FUNC3_LH 0x1

// lw
#define OPCODE_LW OPCODE_0000011
#define FUNC3_LW 0x2

// lbu
#define OPCODE_LBU OPCODE_0000011
#define FUNC3_LBU 0x4

// lhu
#define OPCODE_LHU OPCODE_0000011
#define FUNC3_LHU 0x5

// sb
#define OPCODE_SB OPCODE_0100011
#define FUNC3_SB 0x0

// sh
#define OPCODE_SH OPCODE_0100011
#define FUNC3_SH 0x1

// sw
#define OPCODE_SW OPCODE_0100011
#define FUNC3_SW 0x2

// SPECIFIERS FOR PROGRAM FLOW INSTRUCTIONS

// slt
#define OPCODE_SLT OPCODE_0110011
#define FUNC3_SLT 0x2
#define FUNC7_SLT 0x0

// slti
#define OPCODE_SLTI OPCODE_0010011
#define FUNC3_SLTI 0x2

// sltu
#define OPCODE_SLTU OPCODE_0110011
#define FUNC3_SLTU 0x3
#define FUNC7_SLTU 0x0

// sltiu
#define OPCODE_SLTIU OPCODE_0010011
#define FUNC3_SLTIU 0x3
#define FUNC7_SLTIU 0x0

// beq
#define OPCODE_BEQ OPCODE_1100011
#define FUNC3_BEQ 0x0

// bne
#define OPCODE_BNE OPCODE_1100011
#define FUNC3_BNE 0x1

// blt
#define OPCODE_BLT OPCODE_1100011
#define FUNC3_BLT 0x4

// bltu
#define OPCODE_BLTU OPCODE_1100011
#define FUNC3_BLTU 0x6

// bge
#define OPCODE_BGE OPCODE_1100011
#define FUNC3_BGE 0x5

// bgeu
#define OPCODE_BGEU OPCODE_1100011
#define FUNC3_BGEU 0x7

// jal
#define OPCODE_JAL OPCODE_1101111

// jalr
#define OPCODE_JALR OPCODE_1100111
#define FUNC3_JALR 0x0

#endif