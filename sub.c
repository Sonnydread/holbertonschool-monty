#include "monty.h"
/**
 * f_sub - substruction
 * @head: stack head
 * @counter: line_number
 * Return: void
 */
void f_sub(stack_t **head, unsigned int counter)
{
stack_t *aux;
int subs, nodes;

aux = *head;
for (nodes = 0; aux != NULL; nodes++)
aux = aux->next;
if (nodes < 2)
{
fprintf(stderr, "L%d: can´t subs, stack too short\n", counter);
exit(EXIT_FAILURE);
}
aux = *head;
subs = aux->next->n - aux->n;
aux->next->n = subs;
*head = aux->next;
free(aux);
}

