#include "main.h"

/**
 * print_line - function that draws a strait line
 *
 * Return: draw line
 */

void print_line(int n)
{
int l;

if (n <= 0)
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
