#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * pint - Prints the value at the top of the stack.
 * @stack: Pointer to pointer to the top of the stack.
 * @line_number: Current line number in the Monty byte code file.
 *
 * Return: void
 */

void pint(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);
}
printf("%d\n", (*stack)->n);
}
/**
 * pop - Removes the top element of the stack.
 * @stack: Pointer to pointer to the top of the stack.
 *
 * Return: void
 */
void pop(stack_t **stack)
{
if (*stack != NULL)
{
stack_t *temp = *stack;
*stack = (*stack)->next;
if (*stack != NULL)
{
(*stack)->prev = NULL;
}
free(temp);
}
}

