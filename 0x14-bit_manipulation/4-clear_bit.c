#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer bits
 * @index: position of a bit pointed by pointer n
 * Return: 1 0n success 0r -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

*n &= ~(1UL << index);
return (1);
}
