#include "main.h"

/**
 * is_prime_check - checks if n is prime
 *
 * @n: integer
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
int i = 0;
if (n <= 1)
{
return (0);
}
else if (i * i > 2)
{
return (1);
}
else if (n % i == 0)
{
return (0);
}
else
{
return (is_prime_number(2, n));
}
}
