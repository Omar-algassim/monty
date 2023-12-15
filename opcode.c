#include "monty.h"

/**
 * opcode - decide the operation
 * @line: the line of operarion
 * @stack: the stack for linked list
 * @line_number: the number of operation line
 * Return: nothing
 */

void opcode(char *line, stack_t **stack, unsigned int line_number)
{
	instruction_t inst[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{NULL, NULL}
	};

	char *tok;
	int i = 0, comment = 0;
	
	tok = strtok(line, " \t\n");
	info.arg = strtok(NULL, " \t\n");
	if (tok != NULL)
	{
	while (inst[i].opcode != NULL)
	{
		if (tok[0] == '#')
		{
			comment = 1;
			break;
		}
		if (strcmp(tok, inst[i].opcode) == 0)
		{
			inst[i].f(stack, line_number);
			break;
		}
		i++;
	}
	if (tok && inst[i].opcode == NULL && comment != 1)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, tok);
		exit(EXIT_FAILURE);
	}
	}
}
