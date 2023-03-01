#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: number of elements for array to be printed
 * Return: a and n inputs or other half
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(" ");
}
}
printf("\n");
}
