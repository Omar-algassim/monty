#include "monty.h"

/**
 * main - open monty file and  decide operation
 * @argv: the argument will pass
 * @argc: the number of argument will pass
 * Return: nothing
 */

info_t info = {NULL};

int main(int argc, char **argv)
{
	FILE *mont;
	int line_number = 1;
	char *line = NULL;
	size_t size = 0;
	ssize_t i = 0;
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
	
	while(i != -1)
	{
		line = NULL;
		i = getline(&line, &size, mont);
		if (line != NULL)
		{
			if (i != -1 &&line[0] != '\n' && line[0] != '\0')
			{
				opcode(line, &stack, line_number);
			}
		}
		line_number++;
		free(line);
	}		
	free_stack(stack);
	fclose(mont);
return (0);
}	
