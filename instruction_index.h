#pragma once
#ifndef INSTRUCTION_INDEX_H
#define INSTRUCTION_INDEX_H

enum instruction_index
{
	MOV,				// 0  ::Move a value to an address
						// Stack instructions
	PUSH,				// 1  ::
	POP,				// 2  ::
						// Increment/Decrement
	INC,				// 3  ::
	DEC,				// 4  ::
	ADD,				// 5  ::
	SUB,				// 6  ::
	MUL,				// 7  ::
	DIV,				// 8  ::
	REM,				// 9  ::
						// Arithmetic
	NOT,				// 10 ::
	XOR,				// 11 ::
	OR,					// 12 ::
	AND,				// 13 ::
						// Bitwise instructions
	CMP,				// 14 ::
	JMP,				// 15 ::
						   	  
	JE,					// 16 ::
	JNE,				// 17 ::
						   	  
	JG,					// 18 ::
	JGE,				// 19 ::
						   	  
	JL,					// 20 ::
	JLE,				// 21 ::
	NUM_INSTRUCTIONS	// 22 ::
};



#endif