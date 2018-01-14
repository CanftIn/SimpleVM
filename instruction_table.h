#pragma once
#ifndef INSTRUCTION_TABLE_H
#define INSTRUCTION_TABLE_H

#include "instruction_index.h"
#include "program.h"
#include "memory.h"
#include "stack.h"

typedef void(*instruction_table[NUM_INSTRUCTIONS])
(program *p, memory *m, stack *s, int *instr_idx);

#endif