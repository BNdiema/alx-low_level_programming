#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds new node a the beginning of a list
 * @head: pointer to ponter that points to the first node
 * @n: integer
 * Return: address of new node or  Null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *node_0;
node_0 = malloc(sizeof(listint_t));
if (node_0 == NULL)
return (NULL);
node_0->n = n;
node_0->next = *head;
*head = node_0;
return (node_0);
}
