#include "monty.h"
/**
 * z_mul - multiplies
 * @head: stack head
 * @counter: line_number
 * Return: void
 */
void z_mul(stack_t **head, unsigned int counter)
{
stack_t *temp = *head;
int len = 0, num;

while (temp)
{
temp = temp->next;
len++;
}

if (len < 2)
{
fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
freeStack();
exit(EXIT_FAILURE);
}
temp = *head;
(*head) = (*head)->next;
num = temp->n;
(*head)->n = (*head)->n * num;
(*head)->prev = NULL;
free(temp);
}
