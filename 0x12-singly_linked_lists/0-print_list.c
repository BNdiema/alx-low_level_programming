#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 *@h: pointer to alist
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t i;
i = 0;
if ((*h).str == NULL)
{
printf("[0] (nill)");
}
while ((*h).str != NULL)
printf("%s", h->str);
i++;
return (i);
}
