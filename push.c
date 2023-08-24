#include "monty.h"
/**
 * push_stack - description; entry point for
 *                   push element to a stack or queue
 * @stack: points to a stack queue
 * @line_number: points to an opcode line number;
 */
void push_stack(stack_t **stack, unsigned int line_number)
{
	if (mont->entry == 0)
		add_stack_beg(stack, line_number);
	else
		add_stack_end(stack, line_number);
}
