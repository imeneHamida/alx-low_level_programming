#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a list.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: Index where the new node should be added. Index starts at 0.
 * @n: Value to be assigned to the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp;
unsigned int i;

if (idx == 0)
return add_nodeint(head, n);
    
temp = *head;
for (i = 0; temp != NULL && i < idx - 1; i++)
{
temp = temp->next;
}

if (temp == NULL)
return NULL;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return NULL;

new_node->n = n;
new_node->next = temp->next;

temp->next = new_node;

return (new_node);
}
