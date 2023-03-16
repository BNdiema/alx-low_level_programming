#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked  - allocates memory using malloc.
 * @b: size of data type
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
unsigned int *ptr = malloc(b * sizeof(unsigned int));
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
