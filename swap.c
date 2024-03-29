#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
* swap - swaps the top two elements of the stack
* @stack: pointer to pointer to the top of the stack
* @line_number: current line number in the Monty byte code file
*/
void swap(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
int temp = (*stack)->n;
(*stack)->n = (*stack)->next->n;
(*stack)->next->n = temp;
}
