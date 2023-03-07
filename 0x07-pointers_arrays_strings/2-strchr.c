#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: Pointer to a string
 * @c: Character to be located
 * Return: a pointer to character c in string @s or NUll
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
{
return (s);
}
return (NULL);
}
