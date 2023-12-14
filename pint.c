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
	
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty", line_number);
		free(info.op);
		free_stack(*stack);
		fclose(info.file);
		exit(EXIT_FAILURE);
	}
	current = *stack;

	printf("%d\n", current->n);
}

