#include "monty.h"

/**
 * pint - print the first elemt in stack
 * @stack: the head of stack
 * @line_number: line number
 * Return: nothing 
 */

void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	(void)line_number;
	current = *stack;

	printf("%d\n", current->n);
}
