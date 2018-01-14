#pragma once
#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

#include "program.h"
#include "instruction_table.h"

void instr_mov(program *p, memory *m, stack *s, int *instr_idx);

void instr_push(program* p, memory* m, stack* s, int* instr_idx);
void instr_pop(program* p, memory* m, stack* s, int* instr_idx);

void instr_inc(program* p, memory* m, stack* s, int* instr_idx);
void instr_dec(program* p, memory* m, stack* s, int* instr_idx);

void instr_add(program* p, memory* m, stack* s, int* instr_idx);
void instr_sub(program* p, memory* m, stack* s, int* instr_idx);
void instr_mul(program* p, memory* m, stack* s, int* instr_idx);
void instr_div(program* p, memory* m, stack* s, int* instr_idx);
void instr_rem(program* p, memory* m, stack* s, int* instr_idx);

void instr_not(program* p, memory* m, stack* s, int* instr_idx);
void instr_xor(program* p, memory* m, stack* s, int* instr_idx);
void instr_or(program* p, memory* m, stack* s, int* instr_idx);
void instr_and(program* p, memory* m, stack* s, int* instr_idx);

void instr_cmp(program* p, memory* m, stack* s, int* instr_idx);

void instr_jmp(program* p, memory* m, stack* s, int* instr_idx);

void instr_je(program* p, memory* m, stack* s, int* instr_idx);
void instr_jne(program* p, memory* m, stack* s, int* instr_idx);

void instr_jg(program* p, memory* m, stack* s, int* instr_idx);
void instr_jge(program* p, memory* m, stack* s, int* instr_idx);

void instr_jl(program* p, memory* m, stack* s, int* instr_idx);
void instr_jle(program* p, memory* m, stack* s, int* instr_idx);

#endif
