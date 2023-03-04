#include <stdio.h>
#include "main.h"


/**
 * _strncat - Concatenates two strings
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest with n bytes.
 * @n: no of bytes to be used from src
 * Return: A pointer to the destination string @dest.
 */

char *_strncat(char *dest, char *src, int n)
{
int d = 0;
int i = 0;
while (dest[i++])
d++;
while (i = 0; i < n && src[i]; i++)
dest[d++] = src[i];
return (dest);
}
