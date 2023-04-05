#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node index in linked list
 * @head: pointer to linked list
 * @index: index of node to be deleted
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *node;
listint_t *prv_node;
listint_t *new_node;
unsigned int i;

if (new_node == NULL)
return (-1);

if (index == 0)
{
node = *head;
*head = (*head)->next;
free(node);
return (1);
}

prv_node = *head;
new_node = (*head)->next;

for (i = 0; i < (index - 1); i++)
{
prv_node = new_node;
new_node = new_node->next;

if (new_node->next == NULL)
return (-1);
}
prv_node->next = new_node->next;
free(new_node);

return (1);
}
