#include "monty.h"

/**
 * pstr - print the string all elemnt in list
 * @stack: the header
 * @line_number: the number of line
 * Return: the number of node
*/

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	int i = 0;
	(void)line_number;

	while (current != NULL)
	{
		if (current->n <= 0 || current->n > 127)
		{
			break;
		}
			printf("%c", current->n);
		i++;
		current = current->next;
	}
printf("\n");
}
