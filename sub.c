#include "monty.h"

/**
 * sub - sub last tow elemnt in stack
 * @stack: the head node
 * @line_number: the number of line
 * Return: the new node
*/

void sub(stack_t **stack, unsigned int line_number)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	current = *stack;
	sum = current->n - current->next->n;
	current->next->n = sum;
	*stack = current->next;
	free(current);
}

