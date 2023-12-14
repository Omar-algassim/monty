#include "monty.h"

/**
 * push - add new at the beginning of a dlistint_t
 * @stack: the head node
 * @line_number: the number of line
 * Return: the new node
*/

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	int i = 0, sum = 0;

	current = *stack;
	while (current != NULL)
	{
		current = current->next;
		i++;
	}

	if(i < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	current = *stack;
	sum = current->n + current->next->n;
	current->next->n = sum;
	*stack = current->next;
	free(current);
}

