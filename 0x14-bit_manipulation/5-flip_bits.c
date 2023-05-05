#include "main.h"

/**
 * flip_bits- returns no of bits to flip to get from one no to another
 * @n: bits to be fliped
 * @m: no of bits to flip per number
 * Return: no of numbers fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count;
unsigned long int num;
count = 0;
num = 1;

while (n || m)
{
if ((n & num) != (m & num))
{
count++;
}
n >>= 1;
m >>= 1;
}
return (count);
}
