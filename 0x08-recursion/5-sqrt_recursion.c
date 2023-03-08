#include "main.h"

/**
 * _sqrt_recursion -n returns the natural square root of a number.
 * @n: integer
 * Return: natural square root of @n
 */

int _sqrt_recursion(int n)
{
int s = 1;
int i = 1;
if (n < 0)
{
return (-1);
if (n == 1 || n == 0)
return (n);
}
while (s <= n)
{
i++;
s = (i << 1) + 1;
}
return (i - 1);
}
