#include "lists.h"

/**
 * pop_listint -it deletes the head node of a listint_t linked list
 * @head: pointer to the head node pointer
 *
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head) {
listint_t *temp;
int n;

if (head == 0 || *head == 0) {
return 0;
}

temp = *head;
n = temp->n;
*head = temp->next;
free(temp);

return n;
}
