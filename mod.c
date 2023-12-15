#include "monty.h"

/**
 * _mod - the rest of dividing last tow elemnt in stack
 * @stack: the head node
 * @line_number: the number of line
 * Return: the new node
*/

void _mod(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	int i = 0, sum = 0;

	current = *stack;
	while (current != NULL)
	{
		current = current->next;
		i++;
	}

	if (i < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	current = *stack;
	if (current->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	sum = current->next->n % current->n;
	current->next->n = sum;
	*stack = current->next;
	free(current);
}

