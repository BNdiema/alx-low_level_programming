#include "lists.h"

/**
 * find_listint_loop - finds loop in alist
 * @head: pointer to a list
 * Return: address of node were loop starts or null no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *srt_node;
listint_t *stp_node;

srt_node = head;
stp_node = head;

while (srt_node != NULL && stp_node != NULL && srt_node->next != NULL)
{
stp_node = stp_node->next;
srt_node = srt_node->next->next;

if (stp_node == srt_node)
{
stp_node == srt_node;

while (stp_node != srt_node)
{
stp_node = stp_node->next;
srt_node = srt_node->next;
}

return (stp_node);
}
}

return (NULL);
}
