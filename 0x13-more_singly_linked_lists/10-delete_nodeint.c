#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given index in a list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current, *temp;
    unsigned int i;

    if (*head == NULL)
        return -1; /* If the list is empty, deletion is not possible */

    /* Special case: if index is 0, delete the first node */
    if (index == 0)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
        return 1;
    }

    /* Traverse to the node before the one to be deleted */
    current = *head;
    for (i = 0; current != NULL && i < index - 1; i++)
    {
        current = current->next;
    }

    /* If index is out of bounds, return -1 */
    if (current == NULL || current->next == NULL)
        return -1;

    /* Delete the node at the specified index */
    temp = current->next;
    current->next = temp->next;
    free(temp);

    return 1;
}
