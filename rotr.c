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
	
	if (*stack != NULL)
	{
		while (back->next != NULL)
		{
			back = back->next;
		}
		
		top->prev = back;
		back->next = top;
		back->prev->next = NULL;
		*stack = back;
	}
}
