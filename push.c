#include "monty.h"

/**
 * add_dnodeint - add new at the beginning of a dlistint_t
 * @head: the head node
 * @n: the value in new node
 * Return: the new node
*/

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = malloc(sizeof(stack_t));
	
	if (new == NULL)
	{
		dprintf(2,"cant't malloc");
		exit(EXIT_FAILURE);
	}

	new->n = info.num;	
	new->next = *stack;
	*stack = new;
	new->prev = NULL;
	(*stack)->prev = new;

}
