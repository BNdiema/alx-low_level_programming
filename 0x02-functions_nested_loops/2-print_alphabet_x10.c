#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase +new line
 *
 * Return: a-z 10 times
 */

void print_alphabet_x10(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
while (ch <= 10)
{
_putchar('\n');
}
}
