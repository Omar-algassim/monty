#include "monty.h"

/**
 * opcode - decide the operation
 * @buffer: the line of operarion
 * Return: the 
 */

void opcode(char *line, stack_t **stack, unsigned int line_number)
{
	instruction_t inst[] = {
		{"push", push}, 
		{"pall", pall},
		{NULL, NULL}
	};
	
	char *tok = NULL;
	int i = 0;

	tok = strtok(line, " \t\n");
	info.arg = strtok(NULL, " \t\n");
	if (tok != NULL)
	{
	while(inst[i].opcode != NULL)
	{
		if (strcmp(tok, inst[i].opcode) == 0)
		{
			inst[i].f(stack, line_number);
			break;
		}
		i++;
	}
	if (tok && inst[i].opcode == NULL)
	{
		fprintf(stderr,"L%d: unknown instruction <opcode>\n", line_number);
		exit(EXIT_FAILURE);
	}
	}
}	
