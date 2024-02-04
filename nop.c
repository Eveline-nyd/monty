#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
 * nop - doesn't do anything
 * @stack: pointer to pointer to the top of the stack
 * @line_number: current line number in the Monty byte code file
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
