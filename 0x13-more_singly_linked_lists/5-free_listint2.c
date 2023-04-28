#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the first node in the list
 *
 * Description: frees the memory allocated for a linked list of type `listint_t`.
 *
 * Returns: Nothing
 */
void free_listint2(listint_t **head) {
listint_t *current = *head;
while (current != 0) {
listint_t *next = current->next;
free(current);
current = next;
}
*head = 0;
}
