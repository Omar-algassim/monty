#include "monty.h"

/**
 * push - add new at the beginning of a dlistint_t
 * @stack: the head node
 * @line_number: the number of line
 * Return: the new node
*/

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = malloc(sizeof(stack_t));
	stack_t *current = *stack;
	int num, i = 0;

	if (info.arg == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (info.arg[0] == '-')
		i++;
	for (; info.arg[i] != '\0'; i++)
	{
		if (info.arg[i] > '9' || info.arg[i] < '0')
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			free(info.op);
			free_stack(*stack);
			fclose(info.file);
			exit(EXIT_FAILURE);
		}
	}
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if(info.toggle == 0)
	{
		num = atoi(info.arg);
		new->n = num;
		new->next = *stack;
		*stack = new;
		new->prev = NULL;
		(*stack)->prev = new;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;

		num = atoi(info.arg);
		new->n = num;
		new->next = NULL;
		current->next = new;
		new->prev = current;
	}
}
