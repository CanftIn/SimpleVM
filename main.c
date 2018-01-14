#include <stdlib.h>
#include <stdio.h>

#include "virtual_machine.h"

int main(int argc, char **argv)
{
	char *filename;

	if (argc == 2)
	{
		filename = argv[1];
	}

	virtual_machine *vm = create_vm(filename);
	if (vm != NULL)
		run_vm(vm);

	if (vm) printf("");

	return 0;
}