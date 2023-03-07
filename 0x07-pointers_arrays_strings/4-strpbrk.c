#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to string segment to be searched
 * @accept: pointer to string containing characters to be matched
 * Return: pointer to bytes in @s which matches bytes from @accept.
 */

char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
while (*accept != '\0')
{
if (*s == *accept)
{
return (s);
s++;
}
return (NULL);
}
