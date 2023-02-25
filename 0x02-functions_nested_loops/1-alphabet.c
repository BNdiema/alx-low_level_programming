#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0
 */

void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
putchar('\n');
}
