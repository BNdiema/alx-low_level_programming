#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - unction that searches for an integer.
 * @array: pointer to array
 * @size: number of elements in the array
 * @cmp: Function pointer
 * Return: index of first element
 */

int int_index(int *array, int size, int(*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL)
return (-1);
if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
