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
int d = strlen(dest);
int s = 0;
while (s < n && src[s] != '\0')
{
dest[d + s] = src[s];
s++
}
return (dest);
}
