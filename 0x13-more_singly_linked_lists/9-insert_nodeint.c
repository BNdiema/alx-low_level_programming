#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to the first node
 * @idx: index were to insert the new node
 * @n: int data
 * Return: address of new node or null
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node;
listint_t *curnt_node;
unsigned int i;
curnt_node = *head;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

for (i = 0; curnt_node != NULL && i < idx - 1; i++)
curnt_node = curnt_node->next;
if (curnt_node == NULL)
{
free(new_node);
return (NULL);
}
new_node->next = curnt_node->next;
curnt_node->next = new_node;

return (new_node);
}
