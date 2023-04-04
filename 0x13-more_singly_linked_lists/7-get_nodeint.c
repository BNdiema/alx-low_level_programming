#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - retuns the nth node
 * @head: pointer to list
 * @index: index of node
 * Return: pointer to node at index or null if index is out of range
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *node;
unsigned int i;
if (head == NULL)
return (NULL);
node = head;
for (i = 0; i < index && node != NULL; i++)
node = node->next;
return (node);
}
