#include "main.h"

/**
 * is_prime_number - checks if n is prime
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
for (i = 2; i < n; i++)
{
if (n % i == 0)
return (0);
}
return (1);
}
