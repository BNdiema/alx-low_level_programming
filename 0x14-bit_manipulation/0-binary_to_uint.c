#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1
 * Return: converted number
 */


unsigned int binary_to_uint(const char *b)
{
unsigned int result;
result = 0;
while (*b)
{
if (*b == '0' || *b == '1')
{
result = (result << 1) | (*b - '0');
b++;
}
else
return (0);
}
return (result);
}
