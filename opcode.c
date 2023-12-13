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
	
	char *tok, *number;
	int i = 0;
	int num;
	tok = strtok(line, " \t\n");
	number = strtok(NULL, " \t\n");
	if (number != NULL)
	{
		num = atoi(number);
		info.num = num;
	}
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
		free(tok);
		free(number);
	}
	
}	
