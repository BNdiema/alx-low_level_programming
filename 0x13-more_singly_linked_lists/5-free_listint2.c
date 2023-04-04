#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees list
 * @head: pointer to list
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
listint_t *null_node;
if (head == NULL)
return;
while (*head)
{
null_node = *head;
*head = (*head)->next;
free(null_node);
}
head = NULL;
}
