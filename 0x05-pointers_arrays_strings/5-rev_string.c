#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: reversed string *s
 */

void rev_string(char *s)
{
int l = 0;
while (s[l] != '\0')
{
l++;
}
while (l > 0)
{
_putchar(s[l--]);
}
_putchar('\n');
}
