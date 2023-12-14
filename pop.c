#include "monty.h"

/**
 * pop - delet last elemnt
 * @stack: the last elemnt
 * @line_number: the line number
 * Reeturn: nothing
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack", line_number);
		free(info.op);
		free_stack(*stack);
		fclose(info.file);		
		exit(EXIT_FAILURE);
	}
	current = *stack;
	*stack = current->next;
	free(current);
}

