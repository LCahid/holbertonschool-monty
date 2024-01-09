#include "monty.h"
/**
  * free_stack - frees stack
  * @stack: stack
  */
void free_stack(stack_t *stack)
{
	stack_t *temp;

	temp = stack;
	while (stack != NULL)
	{
		stack = stack->next;
		free(temp);
		temp = stack;
	}
}
/**
  * free_opcode - free opcode buffer
  */
void free_opcode(void)
{
	free(opcode);
}
