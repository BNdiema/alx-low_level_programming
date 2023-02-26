#include "main.h"
/**
* times_table -prints  9 times table
*
* Return: table x9
*/

void times_table(void)
{
int O;
int num;
int table;
for (O = 0; O < 10; O++)
{
_putchar(0);
for (num = 1; num < 10; num++)
{
_putchar(',');
_putchar(' ');
table = 0 * num;
if (table < 10)
_putchar (' ');
else
_putchar((table / 10) + '0');
_putchar((table % 10) + '0');
}
_putchar(table);
}
}
