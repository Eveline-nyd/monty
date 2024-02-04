#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * push - Pushes an element onto the stack.
 * @stack: Pointer to pointer to the top of the stack.
 * @line_number: Current line number in the Monty byte code file.
 * @value: Value to push onto the stack.
 *
 * Return: void
 */

void push(stack_t **stack, unsigned int line_number, int value)
{
stack_t *new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
new_node->n = value;
new_node->prev = NULL;
new_node->next = *stack;
if (*stack != NULL)
{
(*stack)->prev = new_node;
}
else
{
new_node->next = NULL;
}
*stack = new_node;
}
/**
 * pall - Prints all the values on the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: Current line number in the Monty byte code file.
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
(void)line_number;
stack_t *current = *stack;
while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
}
}

