#include "monty.h"

/**
 * pall - print all elemnt in list
 * @stack: the header
 * @line_number: the number of line
 * Return: the number of node
*/

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	int i = 0;
	(void)line_number;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		i++;
		current = current->next;
	}
}
