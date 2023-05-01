#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a linked list of integers safely
 *
 * @head: A pointer to a pointer to the head of the list
 *
 * Return: The number of nodes that were freed if @head is NULL, returns 0
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
