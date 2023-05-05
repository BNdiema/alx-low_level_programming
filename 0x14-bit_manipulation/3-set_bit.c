#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at index
 * @n: pointer to a bit to be set to 1
 * @index: the position of n
 * Return: 1 on success or -1 as error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int num;

if (index >= (sizeof(unsigned long int) * 8))
return (-1);

num = 1UL << index;

*n |= num;

return (1);
}
