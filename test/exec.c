#include "monty.h"
/**
  * exec_opcode - executes opcode in stack
  * @line_number: executeing line number
  * @stack: stack for operations
  * Return: if fails -1 else 0
  */
int exec_opcode(unsigned int line_number, stack_t **stack)
{
	int i = 0, j = 0;
	instruction_t t[] = {{"push", push}, {"pall", pall}, {NULL}};

	while (opcode[i] != NULL)
	{
		while (t[j].opcode != NULL)
		{
			if (strcmp(opcode[i], t[j].opcode) == 0)
			{
				t[j].f(stack, line_number);
				return (0);
			}
			j++;
		}
		j = 0;
		i++;
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode[0]);
	free(buf);
	free_opcode();
	free_stack(*stack);
	fclose(f);
	exit(EXIT_FAILURE);
}
