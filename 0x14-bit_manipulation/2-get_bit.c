#include "main.h"

/**
 * get_bit - returns the value of bit at agiven index
 * @n: a bit of unsigned long int
 * @index: the index postion of n
 * Return: value of bit n at index index or -1 as error
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int num;

if (index >= (sizeof(unsigned long int) * 8))
return (-1);

num = 1UL << index;

if ((n & num) == 0)
return (0);
else
return (1);
}
