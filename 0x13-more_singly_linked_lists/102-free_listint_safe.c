#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a linked list of integers safely.
 *
 * @h: A pointer to a pointer to the head of the list.
 *
 * This function frees a linked list of integers safely. If @h is NULL or
 * *@h is NULL, the function returns 0. Otherwise, it frees each node in
 * the list and returns the number of nodes that were freed.
 *
 * Return: The number of nodes that were freed.
 */
size_t free_listint_safe(listint_t **h)
{
size_t len = 0;
int diff;
listint_t *temp;

if (!h || !*h)
return (0);

while (*h)
{
diff = *h - (*h)->next;
if (diff > 0)
{
temp = (*h)->next;
free(*h);
*h = temp;
len++;
}
else
{
free(*h);
*h = 0;
len++;
break;
}
}

*h = 0;

return (len);
}
