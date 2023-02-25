#include "main.h"

/**
 * print_line - function that draws a straight line
 *
 * Return: draw line
 */

void print_line(int n)
{
int l;

if (n < 1)
{
_putchar('\n');
}
else
{
for (l = 1; l <= n; l++)
{
_putchar('_');
}
_putchar('\n');
}
}
