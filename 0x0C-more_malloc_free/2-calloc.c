#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: size
 * Return: pointer to alocated memory
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
char *mem;
unsigned int hm = 0;
int i = 0;
if (nmemb == 0)
return (NULL);
if (size == 0)
return (NULL);
hm = nmemb * size;
mem = malloc(hm);
if (mem == NULL)
return (NULL);
for (i = 0; i < hm; i++)
mem[hm] = 0;
return (0);
}
