#include "main.h"

/**
 * _strncpy - copies a string of bytes n from src to dest
 * @dest: were to copy string
 * @src: were to copy from
 * @n: integer
 * Return: pointer to string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int s = 0;
while (src[s])
{
s++;
}
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
