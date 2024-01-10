#include "monty.h"
/**
 * pop - prints removes the top element of the stack
 * @stack: stack
 * @line_number: executing line number
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		free_opcode(), fclose(f), free(buf);
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->next)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
	else
	{
		free(*stack);
		*stack = NULL;
	}
}
