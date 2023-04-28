#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to another pointer that points to first node
 * @str:  string to be duplicated
 * Return: address of new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *end_node;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->str = strdup(str);
new_node->len = strlen(str);
new_node->next = NULL;

end_node = *head;

if (*head == NULL)
{
*head = new_node;
}
else
{
while (end_node->next != NULL)
{
end_node = end_node->next;
}
end_node->next = new_node;
}
return (new_node);
}
