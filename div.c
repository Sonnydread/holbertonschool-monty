#include "monty.h"
/**
 * x_div - divide
 * @head: stack head
 * @counter: line_number
 * Return: void
 */
void x_div(stack_t **head, unsigned int counter)
{
stack_t *h;
int len = 0, aux;

h = *head;
while (h)
{
h = h->next;
len++;
}
if (len < 2)
{
fprintf(stderr, "L%d: can't div, stack too short\n", counter);
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
aux = h->next->n / h->n;
h->next->n = aux;
*head = h->next;
free(h);
}
