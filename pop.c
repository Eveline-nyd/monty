#include <stdio.h>
#include<stdlib.h>
#include "monty.h"

/**
* pop - Removes the top element of the stack.
* @stack: Pointer to pointer to the top of the stack.
* @line_number: Current line number in the Monty byte code file.
*
* Return: void
*/
void pop(stack_t **stack, unsigned int line_number)
{
stack_t *temp;
if (*stack != NULL)
{
fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
exit(EXIT_FAILURE);
}
temp = *stack;
*stack = (*stack)->next;
if (*stack != NULL)
{
(*stack)->prev = NULL;
}
free(temp);
}

