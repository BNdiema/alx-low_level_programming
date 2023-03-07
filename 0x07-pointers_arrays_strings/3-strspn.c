#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to string segment to be searched
 * @accept: pointer to string containing characters to be matched
 * Return: no of bytes @s which consist only of bytes from @accept
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int c = 0;
int i;
int j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
c++;
break;
}
}
if (accept[j] == '\0')
{
return (c);
}
}
return (c);
}
