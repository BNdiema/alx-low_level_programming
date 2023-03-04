#include "main.h"


/**
 * reverse_array - reverses the content odf an array of integers
 * @a: pointer that points to an integer
 * @n: integer representing no of elements of an array
 * Return: reversed integer pointed by a
 */

void reverse_array(int *a, int n)
{
int i;
int r;
for (i = 0; i < n / 2; i++)
{
r = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = r;
}
}
