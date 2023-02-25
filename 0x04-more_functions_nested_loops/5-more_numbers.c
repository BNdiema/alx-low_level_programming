#include "main.h"

/**
 * more_numbers -  prints no 0 to 14 ten times
 *
 * Return:  no 0-14 10times followed by a new line
 */
void more_numbers(void)
{
int n,
int i;

for (n = 0; n < 10; n++)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
