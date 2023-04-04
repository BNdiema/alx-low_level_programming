#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elemets
 * @h: pointer to a list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
int elmt;
elmt = 0;
while (h != NULL)
{
h = h->next;
elmt++;
}
return (elmt);
}
