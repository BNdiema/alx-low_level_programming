#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints lowercase a-z
 *
 * Return: print a-z
 */

void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
putchar('\n');
}
