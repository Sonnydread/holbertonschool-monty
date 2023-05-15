#include "monty.h"
/**
 * j_rotr - rotates
 * @head: stack head
 * @counter: line_number
 * Return: void
 */
void j_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
stack_t *copy;
copy = *head;
if (*head == NULL || (*head)->next == NULL)
{
return;
}
while (copy->next)
{
copy = copy->next;
}
copy->next = *head;
copy->prev->next = NULL;
copy->prev = NULL;
(*head)->prev = copy;
(*head) = copy;
}
