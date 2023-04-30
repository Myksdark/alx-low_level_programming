#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t linked list
 * @head: a pointer to the head node
 *
 * Return: sum of all the data , or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *current = head;

while (current != 0)
{
sum += current->n;
current = current->next;
}

return (sum);
}
