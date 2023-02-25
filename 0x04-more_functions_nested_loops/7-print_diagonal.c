#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: number of lines to be printed using "\"
 * Return: draw diagonal line
 */

void print_diagonal(int n)
{
int l;
int d;
if (n <= 0)
_putchar('\n');
for (l = 0; l < n; l++)
{
for (d = 0; d < l; l++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
