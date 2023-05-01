#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a linked list of integers safely
 *
 * @head: A pointer to a pointer to the head of the list
 *
 * Return: The number of nodes that were freed if @head is NULL, returns 0
 */
size_t free_listint_safe(listint_t **head)
{
size_t count = 0;
listint_t *current, *tmp;

if (head == 0)
return 0;

current = *head;
while (current != 0)
{
tmp = current->next;
free(current);
current = tmp;
count++;
}

*head = 0;

return count;
}
