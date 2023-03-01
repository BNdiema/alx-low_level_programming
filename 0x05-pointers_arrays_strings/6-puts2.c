#include "main.h"
#include <stdio.h>

/**
 * print_every_other - prints every other character of a string
 * @s: string to print
 * Return: void
 */

void print_every_other(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i += 2)
{
_putchar(s[i]);
}
_putchar('\n');
}
