#include "monty.h"

/**
 * div - devided last tow elemnt in stack
 * @stack: the head node
 * @line_number: the number of line
 * Return: the new node
*/

void div(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	int i = 0, res = 0;

	current = *stack;
	while (current != NULL)
	{
		current = current->next;
		i++;
	}

	if (i < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (current->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	current = *stack;
	res = current->next->n / current->n;
	current->next->n = sum;
	*stack = current->next;
	free(current);
}

