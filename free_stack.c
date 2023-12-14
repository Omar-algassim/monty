#include "monty.h"

/**
 * free_stack - free the stack
 * @stack: the satck
 * Return: nothing
 */

void free_stack(stack_t *stack)
{
	stack_t *temp;

	temp = stack;
	while (stack)
	{
		temp = stack->next;
		free(stack);
		stack = temp;
	}
}
