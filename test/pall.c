#include "monty.h"
/**
  * pall -  prints all the values on the stack
  * @stack: stack
  * @line_number: executing line number
  */
void pall(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	if (*stack == NULL)
		return;
	print_stack(*stack);
}
