#include "monty.h"
/**
 * pint_stack - prints stack
 */
void pint_stack(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty", line_number);
		exit(EXIT_FAILURE);
	}
	printf ("%d\n", (*stack)->n);
}
