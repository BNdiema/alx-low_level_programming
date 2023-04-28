#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to the first node
 * Return: always 0
 */
void free_list(list_t *head)
{
list_t *node;

while (head != NULL)
{
head = node;
node = node->next;
free(node->str);
free(node);
}
}
