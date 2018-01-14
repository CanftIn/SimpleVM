#pragma once
#ifndef LABEL_H
#define LABEL_H

typedef struct
{
	char *name;
	int instruction;
}label;

label* create_label(char *name, int *instruction);
void destroy_label(label *l);

#endif
