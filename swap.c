#include "monty.h"

/**
 * swap - swap last tow elemnt in stack
 * @stack: the head node
 * @line_number: the number of line
 * Return: the new node
*/

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	int temp, i = 0;

	current = *stack;
	while (current != NULL)
	{
		current = current->next;
		i++;
	}

	if (i < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		free(info.op);
		free_stack(*stack);
		fclose(info.file);
		exit(EXIT_FAILURE);
	}
	current = *stack;
	temp = current->n;
	current->n = current->next->n;
	current->next->n = temp;

}
