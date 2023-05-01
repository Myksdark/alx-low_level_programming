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
listint_t *current = *head;

while (current != NULL)
{
listint_t *next = current->next;
free(current);
current = next;
}

*head = NULL;
}
