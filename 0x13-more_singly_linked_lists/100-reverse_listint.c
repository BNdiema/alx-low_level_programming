#include "lists.h"

/**
 * reverse_listint - revese a linked list
 * @head: pointer to first node of list
 * Return: Pointer to fist node of reverse list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *prv;
listint_t *node;
listint_t *next;
prv = NULL;
next = NULL;

node = *head;

while (node != NULL)
{
next = node->next;
node->next = prv;
prv = node;
node = next;
}
*head = prv;
return (*head);
}
