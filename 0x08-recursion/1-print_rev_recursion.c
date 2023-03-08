#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: poiter to the string
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_putchar(*s);
_print_rev_recursion(s + 1);
}
