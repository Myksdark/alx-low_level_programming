#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head node
 * @index: index of the node, starting at 0
 *
 * Return: pointer to the nth node, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *current;

if (head == 0)
return (0);

current = head;
for (i = 0; i < index; i++)
{
if (current == 0)
return (0);
current = current->next;
}

return (current);
}
