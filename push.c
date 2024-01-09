#include "monty.h"
#include <ctype.h>
/**
  * push - push value to the stack
  * @stack: stack
  * @line_number: executed line number
  */
void push(stack_t **stack, unsigned int line_number)
{
	int n;
	stack_t *temp = malloc(sizeof(stack_t));

	if (temp == NULL)
	{
		free_opcode(), free(buf), fclose(f);
		free_stack(*stack), free(temp);
		dprintf(2, "Error: malloc failed\n"), exit(EXIT_FAILURE);
	}
	if (opcode[1] == NULL || !isdigit(opcode[1][0]))
	{
		free_opcode(), fclose(f), free(buf);
		free_stack(*stack), free(temp);
		dprintf(2, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = atoi(opcode[1]);
	temp->n = n;
	temp->prev = NULL;
	temp->next = *stack;
	*stack = temp;
}