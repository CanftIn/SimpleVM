#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "label.h"

label* create_label(char *n, int *i)
{
	label *l = (label*)malloc(sizeof(label));

	l->name = (char*)malloc(strlen(n));
	strcpy(l->name, n);

	l->instruction = *i;

	return 1;
}

void destory_label(label *l)
{
	free(l->name);
	free(l);
}