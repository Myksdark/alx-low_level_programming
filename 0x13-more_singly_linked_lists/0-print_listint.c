#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: The head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
size_t num = 0;
while (h != 0)
{
printf("%d\n", h->n);
num++;
h = h->next;
}
return (num);
}
