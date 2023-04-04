#include <stddef.h>
#include "lists.h"

 /**
  *list_len - returns the number of elemnts in a linked list_t list
  *@h: pointer to a list
  *
  * Return : number of elemets
  */

size_t list_len(const list_t *h)
{
size_t i;
i = 0;
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}
