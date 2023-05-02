#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the first node in the linked list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *node;
size_t count;
count = 0;

if (head == NULL)
{
exit(98);
}

node = head;

while (node != NULL)
{
printf("[%p] %d\n", (void *) node, node->n);
count++;
if (node <= node->next)
{
printf("->[%p] %d\n", (void *) node->next, node->next->n);
break;
}
node = node->next;
}
return (count);
}
