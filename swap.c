#include "monty.h"
/**
 * swap - entry point for a stack swap
 * @stack: points to a stack
 * @line_number: points to a line number
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int num = 0;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	num = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = num;
}
