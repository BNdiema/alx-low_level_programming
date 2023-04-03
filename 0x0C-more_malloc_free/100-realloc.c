#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previoous memory
 * @old_size: size of ptr
 * @new_size: size of new block
 * Return: pointer to result of string
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr;
unsigned int i;
if (ptr == NULL)
{
new_ptr = malloc(new_size);
return (new_ptr);
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}
for (i = 0; i < old_size && i < new_size; i++)
new_ptr[i] = ((char *)ptr)[i];
free(ptr);
return (new_ptr);
}
