#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string
 * Return: string in reverse.
 */

void print_rev(char *s)
{
int l = 0;
while (s[l] != '\0')
{
l++;
}
while (l > 0)
{
_putchar(s[--l]);
}
_putchar('\n');
}
