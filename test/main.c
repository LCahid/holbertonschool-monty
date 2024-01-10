#include "monty.h"

/**
  * main - start point of monty interpreter
  * @argc: count of argument
  * @argv: argument variables
  * Return: if fail EXIT_FAILURE else 0
  */
int main(int argc, char **argv)
{
	int i = 0;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	f = fopen(argv[1], "r");
	if (f == NULL)
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]), exit(EXIT_FAILURE);
	while (1)
	{
		i++;
		opcode = get_command();
		if (strcmp(buf, " ") == 0)
		{
			free(buf), free_stack(stack);
			break;
		}
		if (opcode == NULL || strcmp(opcode[0], "nop") == 0)
		{
			free(buf);
			free_opcode();
			continue;
		}
		exec_opcode(i, &stack);
		free(buf);
		free_opcode();
	}
	return (0);
}
