#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size allocated to memory to store the arrays
 * @c: character
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptrArray = malloc(sizeof(char) * size);
if (ptrArray == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
ptrArray[i] = c;
}
if (size == 0)
{
return (NULL);
}
else
return (ptrArray);
}
