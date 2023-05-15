#include "monty.h"
/**
 * v_pchar - print char
 * @head: stack head
 * @counter: line_number
 * Return: void
 */
void v_pchar(stack_t **head, unsigned int counter)
{
stack_t *temp = *head;
int num;

if (!(*head))
{
fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
exit(EXIT_FAILURE);
}
num = temp->n;
if (num < 33 || num > 127)
{
fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
exit(EXIT_FAILURE);
}
fprintf(stdout, "%c\n", num);
}

