#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees list
 * @head: pointer to list
 * Return: 0
 */

void free_listint(listint_t *head)
{
listint_t *node_0;
while (head != NULL)
{
node_0 = head;
head = head->next;
free(node_0);
}
}
