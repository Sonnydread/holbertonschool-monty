#include "monty.h"
/**
 * s_mod - computes
 * @head: stack head
 * @counter: line_number
 * Return: void
 */
void s_mod(stack_t **head, unsigned int counter)
{
stack_t *h;
int len = 0;

h = *head;
while (h)
{
h = h->next;
len++;
}
if (len < 2)
{
fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
freeStack();
fclose(var.fp);
exit(EXIT_FAILURE);
}
h = *head;
if (h->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", counter);
fclose(var.fp);
freeStack();
exit(EXIT_FAILURE);
}
}
