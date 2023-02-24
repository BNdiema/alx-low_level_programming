#include "main.h"

/**
 * print_most_numbers - print no 0 to 9 excluding 2 & 4
 *
 * Return: 0 to 9 excluding 2 & 4
 */

void print_most_numbers(void)
{
int n;
for (n = 0; n < 10; n++)
{
if ((n == 2 || (n == 4))
{
continue;

else
_putchar (n + '0');
}
_putchar('\n');
}
