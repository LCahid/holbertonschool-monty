#include "monty.h"
/**
  * add - adds the top two elements of the stack.
  * @stack: stack
  * @line_number: executed line number
  */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		free(buf), free_opcode(), free_stack(*stack), fclose(f);
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	*stack = (*stack)->next;
	(*stack)->n = (*stack)->n + temp->n;
	free(temp);
}
