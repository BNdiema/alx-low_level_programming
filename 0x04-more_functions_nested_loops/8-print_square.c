#include "main.h"

/**
 * print_square - function that draws a diagonal line
 * @size: size of square
 * Return: draw square
 */

void print_square(int size)
{
int s;
int n;
if (size < 1)
_putchar('\n');
else
{
for (s = 1; s < size; s++)
{
_putchar('#');
}
for (n = 2; n <= size; n++)
{
_putchar('#');
}
_putchar('\n');
}
}
