#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to the first node
 * Return: always 0
 */
void free_list(list_t *head)
{
list_t *first_node;
list_t *sec_node;

first_node = head;

while (first_node != NULL)
{
sec_node = first_node->next;
free(first_node->str);
free(first_node);
first_node = sec_node;
}
}
