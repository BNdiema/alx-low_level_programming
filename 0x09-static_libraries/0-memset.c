#include "main.h"


/**
 * _memset -  fills memory with a constant byte.
 * @s: A pointer to the memory area.
 * @b: constant byte.
 * @n: bytes
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
char *p = s;
while (n-- > 0)
{
*p++ = b;
}
return (s);
}
