#include "monty.h"
/**
 * swap - swaps the top two elements of the stack
 * @stack: stack
 * @line_number: executing line number
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL ||  (*stack)->next == NULL)
	{
		free_opcode(), free_stack(*stack), fclose(f), free(buf);
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	*stack = (*stack)->next;
	temp->next = (*stack)->next;
	(*stack)->next = temp;
}
