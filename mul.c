#include "monty.h"
/**
 * z_mul - multiplies
 * @head: stack head
 * @counter: line_number
 * Return: void
 */
void z_mul(stack_t **head, unsigned int counter)
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
fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
freeStack();
fclose(var.fp);
exit(EXIT_FAILURE);
}
freeStack();
fclose(var.fp);
exit(EXIT_FAILURE);
{
h = *head;
*head = h->next;
}
}
