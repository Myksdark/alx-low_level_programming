#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t linked list
 * @head: pointer to the head node
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current, *temp;
    unsigned int i;

    if (head == 0 || *head == 0)
        return (-1);

    if (index == 0) {
        temp = *head;
        *head = (*head)->next;
        free(temp);
        return (1);
    }

    current = *head;

    for (i = 0; i < index - 1 && current != 0; i++)
        current = current->next;

    if (current == 0 || current->next == 0)
return (-1);

    temp = current->next;
    current->next = temp->next;
    free(temp);

    return (1);
}
