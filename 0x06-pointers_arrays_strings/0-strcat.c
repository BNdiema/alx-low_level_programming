#include <stdio.h>
#include "main.h"


/**
 * _strcat - Concatenates two strings
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcat(char *dest, char *src)
{
int d = 0;
int s = 0;
while (dest[d] != '\0')
{
d++;
}
while (src[s] != '\0')
{
dest[d] = src[s];
d++;
s++;
}
return (dest);
}
