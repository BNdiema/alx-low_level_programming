#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: Pointer to a string
 * Return: Lenth of string pointed to by @s
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
_putchar(*s);
_strlen_recursion(s + 1);
}
