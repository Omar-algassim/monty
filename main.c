#include "monty.h"

/**
 * main - open monty file and  decide operation
 * @argv: the argument will pass
 * @argc: the number of argument will pass
 * Return: nothing
 */

info_t info = {0};

void main(int argc, char **argv)
{
	FILE *mont;
	int line_number = 1;
	char *line = malloc(sizeof(char *) * 2);
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr,"USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	mont = fopen(argv[1], "r");
	if (mont == NULL)
	{
		fprintf(stderr,"Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	
	while(fgets(line, 100, mont) != 0)
	{
		opcode(line, &stack, line_number);
		line_number++;
	}
	free_stack(stack);
	free(line);
	fclose(mont);
}
