#include "virtual_machine.h"

virtual_machine* create_vm(char* filename)
{
	virtual_machine* vm;

	vm = (virtual_machine*)malloc(sizeof(virtual_machine));

	vm->pProgram = create_program(filename);

	// Make sure the program was interpreted properly
	if (!vm->pProgram) return NULL;

	vm->pStack = create_stack();
	vm->pMemory = create_memory(512000);

	populate_instruction_table(vm->instr_table);

	return vm;
}

void destroy_vm(virtual_machine* vm)
{
	if (vm)
	{
		if (vm->pMemory) destroy_memory(vm->pMemory);
		if (vm->pStack) destroy_stack(vm->pStack);
		if (vm->pProgram) destroy_program(vm->pProgram);

		free(vm);
	}
}

void run_vm(virtual_machine* vm)
{
	int instr_idx = 0;

	while (instr_idx < vm->pProgram->num_instructions)
	{
		vm->instr_table[vm->pProgram->instr[instr_idx]](vm->pProgram, vm->pMemory, vm->pStack, &instr_idx);
		++instr_idx;
	}
}
