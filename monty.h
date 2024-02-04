#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * push - pushes an element to the stack
 * @stack: pointer to pointer to the top of the stack
 * @line_number: current line number in the Monty byte code file
 * @value: value to push onto the stack
 */
void push(stack_t **stack, unsigned int line_number, int value);

/**
 * pall - prints all the values on the stack
 * @stack: pointer to the top of the stack
 * @line_number: current line number in the Monty byte code file
 */
void pall(stack_t **stack, unsigned int line_number);
/**
 * pint - prints the value at the top of the stack
 * @stack: pointer to pointer to the top of the stack
 * @line_number: current line number in the Monty byte code file
 */
void pint(stack_t **stack, unsigned int line_number);
/**
 * pop - removes the top element of the stack
 * @stack: pointer to pointer to the top of the stack
 * @line_number: current line number in the Monty byte code file
 */
void pop(stack_t **stack, unsigned int line_number);
/**
 * swap - swaps the top two elements of the stack
 * @stack: pointer to pointer to the top of the stack
 * @line_number: current line number in the Monty byte code file
 */
void swap(stack_t **stack, unsigned int line_number);
/**
 * add - adds the top two elements of the stack
 * @stack: pointer to pointer to the top of the stack
 * @line_number: current line number in the Monty byte code file
 */
void add(stack_t **stack, unsigned int line_number);
/**
 * nop - doesn't do anything
 * @stack: pointer to pointer to the top of the stack
 * @line_number: current line number in the Monty byte code file
 */
void nop(stack_t **stack, unsigned int line_number);

#endif /* MONTY_H */

