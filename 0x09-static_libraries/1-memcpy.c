#include "main.h"


/**
 * _memcpy -  copies memory area.
 * @src: A pointer to the memory area to be copied from
 * @dest: A pointer to memory area were function copies to.
 * @n: bytes
 * Return: A pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *d = dest;
char *s = src;
unsigned int u;
for (u = 0; u < n; u++)
{
*d++ = *s++;
}
return (dest);
}
