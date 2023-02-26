#include "main.h"
/**
* times_table -prints  9 times table
*
* Return: table x9
*/

void times_table(void)
{
int num;
int table;
for (num = 0; num < 10; num++)
table = num * 9;
_putchar(table);
}
