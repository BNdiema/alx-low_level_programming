#include "main.h"
#include <stdio.h>

/**
 * print_every_other - prints every other character of a string starting with 1st char
 * @s: string to print
 * Return: void
 */

void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
