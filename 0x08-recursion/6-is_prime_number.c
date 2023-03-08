#include "main.h"

/**
 * is_prime_number - shows if number is prime
 * @n: integer
 * Return 1 or 0
 */

int is_prime_number(int n)
{
int i;
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
return (is_prime_number(n, i + 1));
}
}
