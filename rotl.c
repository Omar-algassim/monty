#include "monty.h"

/**
 * rotl - rotates the stack to the top
 * @stack: the head node
 * @line_number: the number of line
 * Return: nothing
*/

void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *forward = *stack;
	stack_t *backward = *stack;
	stack_t *temp;
	(void)line_number;
	while(backward->next != NULL)
		backward = backward->next;
	printf("%d and %d\n", forward->n, backward->n);
	while(forward != NULL)
	{
		temp->n = backward->n;
		backward->n = forward->n;
		forward->n = temp->n;
		
		backward = backward->prev;
		forward = forward->next;
	}
}
