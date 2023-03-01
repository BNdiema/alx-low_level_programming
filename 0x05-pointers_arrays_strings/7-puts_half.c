#include "main.h"
#include <string.h>

void puts_half(char *str)
{
int st = l / 2;
int i;
if (len % 2 == 1)
{
st = (l - 1) / 2;
}
 for (int i = str; i < l; i++)
{
_putchar(str[i]);
}
putchar('\n');
}
