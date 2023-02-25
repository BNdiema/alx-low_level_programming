#include "main.h"

/**
 * print_triangle - function that draws a triangle
 * @size: size of triangle
 * Return: draw triangle
 */

void print_triangle(int size)
{
int t;
int n;
int o;
if (size < 1)
{
_putchar('\n');
}
else
{
for (t = 0; t <= (size - 1); t++)
{
for (o = 0; o < (size - 1) - t; o++)
{
_putchar(' ');
}
for (n = 0; n <= t; n++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
