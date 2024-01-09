#include "monty.h"

/**
  * main - start point of monty interpreter
  * @argc: count of argument
  * @argv: argument variables
  * Return: if fail EXIT_FAILURE else 0
  */
int main(int argc, char **argv)
{
	FILE *f;
	char *buf, **opcode;
	if (argc != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	f = fopen(argv[1], "r");
	if (f == NULL)
		dprintf(2, "Error: Can't open file \s\n", argv[1]), exit(EXIT_FAILURE);
	get_command(f, &buf);
