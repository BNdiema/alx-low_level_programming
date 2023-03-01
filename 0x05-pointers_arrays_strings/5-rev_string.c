#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: reversed string *s
 */

void rev_string(char *s)
{
int l = 0;
int r;
while (s[l] != '\0')
{
l++;
}
 for (r = l -1; r >= 0; r--)
{
_putchar(s[--l]);
}
_putchar('\n');
}
