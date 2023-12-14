#include "monty.h"

/**
 * push - add new at the beginning of a dlistint_t
 * @stack: the head node
 * @line_number: the number of line
 * Return: the new node
*/

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	int temp;
	
	current = *stack;
	if(current->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	
	temp = current->n;
	current->n = current->next->n;
	current->next->n = temp;

}
