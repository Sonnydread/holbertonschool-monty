#include "monty.h"
/**
 * pall_op - Function that prints the elements
 * @stack:   Pointer to the head of the Stack
 * @line_number: Number of line
 */
void pall_op(stack_t **stack, unsigned int line_number)
{
(void) line_number;
stack_t *printallstack;

printallstack = *stack;
printStack(printallstack);
}
