#include "monty.h"

/**
 * pchar - print the first char elemnt in stack
 * @stack: the head of stack
 * @line_number: line number
 * Return: nothing
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		free(info.op);
		free_stack(*stack);
		fclose(info.file);
		exit(EXIT_FAILURE);
	}
	current = *stack;
	if (current->n < 0 || current->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", current->n);
}

