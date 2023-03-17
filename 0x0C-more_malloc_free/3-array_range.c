#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers.
 * @min: minimum intger
 * @max: maximum intger
 * Return: pointer
 */

int *array_range(int min, int max)
{
int *arry;
int i;
int size;
if (min > max)
return (NULL);
size = (max - min);
arry = malloc((size + sizeof(int)) * sizeof(int));
if (arry == NULL)
return (NULL);
for (i = min; i <= max; i++)
arry[i] = min;
min++;
return (arry);
}
