#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
putchar((n % 10) + '0');
if (n <= 9) 
putchar('n'',');
putchar(' ');
}
putchar('\n');
return (0);
}
