#include "monty.h"
/**
 * s_mod - computes
 * @head: stack head
 * @counter: line_number
 * Return: void
 */
void s_mod(stack_t **head, unsigned int counter)
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
fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
freeStack();
exit(EXIT_FAILURE);
}
temp = *head;
if (temp->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", counter);
freeStack();
exit(EXIT_FAILURE);
}
num = temp->n;
(*head) = temp->next;
(*head)->n = (*head)->n % num;
(*head)->prev = NULL;
free(temp);
}

