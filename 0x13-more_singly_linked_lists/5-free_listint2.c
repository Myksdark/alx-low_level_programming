#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Pointer to a pointer to the first node in the list.
 *
 * Description: Frees the memory allocated for a linked list of type listint_t.
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == 0)
return;

while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}

*head = NULL;
}
