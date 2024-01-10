#include "monty.h"
/**
 * pint_stack - prints stack
 * @stack: stack
 * @line_number: executing line number
 */
void pint_stack(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		free_opcode(), fclose(f), free(buf);
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
