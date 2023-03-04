#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: first string
 * @s2: second string.
 * Return: Comparison of s1 ans s2
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
while ((s1[i] != '\0') == (s2[i] != '\0'))
{
if (s1[i] != s2[i])
{
return (0);
}
i++;
}
return (s1[i] - s2[i]);
}
