#include <stdio.h>
#include <main.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
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
return (0);
}
