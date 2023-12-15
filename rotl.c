#include "monty.h"

/**
 * rotl - rotates the stack to the top
 * @stack: the head node
 * @line_number: the number of line
 * Return: nothing
*/

void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *top = *stack;
	stack_t *back = *stack;
	(void)line_number;

	if (*stack != NULL)
	{
		while (back->next != NULL)
		{
			back = back->next;
		}
		back->next = top;
		*stack = top->next;
		top->next = NULL;
	}
}
