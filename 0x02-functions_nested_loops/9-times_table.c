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
for (O = 0; O <= 9; O++)
{
_putchar('0');
for (num = 1; num <= 9; num++)
{
_putchar(',');
_putchar(' ');
table = O * num;
if (table <= 9)
_putchar (' ');
else
_putchar((table / 10) + '0');
_putchar((table % 10) + '0');
}
_putchar('\n');
}
}
