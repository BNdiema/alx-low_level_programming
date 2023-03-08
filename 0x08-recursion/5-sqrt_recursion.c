#include "main.h"

/**
 * _sqrt_recursion -n returns the natural square root of a number.
 * @n: integer
 * Return: natural square root of @n
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
if (n == 1 || n == 0)
return (n);
}
else
return (n * _sqrt_recursion(n - 1));
}
