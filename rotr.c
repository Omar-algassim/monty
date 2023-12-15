#include "monty.h"

/**
 * rotr - rotates the bottom elemnt to the top
 * @stack: the head node
 * @line_number: the number of line
 * Return: nothing
*/

void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *top = *stack;
	stack_t *back = *stack;
	(void)line_number;
	
	while (back->next != NULL)
	{
		back = back->next;
	}

	back->prev->next = NULL;
	top->prev = back;
	back->next = top;
	*stack = back;
}
