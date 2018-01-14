#pragma once
#ifndef STACK_H
#define STACK_H

typedef struct
{
	int *items;
	int num_items;
}stack;

stack* create_stack();
void destroy_stack(stack *s);

void stack_push(stack *s, int *item);
void stack_pop(stack *s, int *dest);


#endif
