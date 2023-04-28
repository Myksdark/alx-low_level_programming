#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the first node in the list
 *
 * Description:frees the memory allocated for a linked list of type `listint_t`.
 * 
 * Returns: nothing
 */
void free_listint(listint_t *head) {
listint_t *current = head;
while (current != NULL) {
listint_t *next = current->next;
free(current);
current = next;
}
}
