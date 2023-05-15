#include "monty.h"
/**
 * w_pstr - print element
 * @head: stack head
 * @counter: line_number
 * Return: void
 */
void w_pstr(stack_t **head, unsigned int counter)
{
stack_t *h;
(void)counter;

h = *head;
while (h)
{
if (h->n > 127 || h->n <= 0)
{
break;
}
printf("%c", h->n);
h = h->next;
}
printf("\n");
}
