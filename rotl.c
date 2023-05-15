#include "monty.h"
/**
 * q_rotl - rotates
 * @head: stack head
 * @counter: line_number
 * Return: void
 */
void q_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
stack_t *tmp = *head, *aux;
if (*head == NULL || (*head)->next == NULL)
{
return;
}
aux = (*head)->next;
aux->prev = NULL;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = *head;
(*head)->next = NULL;
(*head)->prev = tmp;
(*head) = aux;
}
