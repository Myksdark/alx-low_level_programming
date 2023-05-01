#include "lists.h"

/**
 * add_nodeint_end - allocates a new node at the end of a linked list
 * @head: pointer to first node in the list
 * @n: data to insert in that new node
 *
 * Description: adds a new node and initializes it with the given data.
 * the new node is added to the end of the list.
 *
 * Return: a pointer to the new node, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));
listint_t *temp = *head;
if (new == 0)
{
return (0);
}
new->n = n;
new->next = 0;

if (*head == 0)
{
*head = new;
return (new);
}
while (temp->next)
{
temp = temp->next;
}

temp->next = new;
return (new);
}
