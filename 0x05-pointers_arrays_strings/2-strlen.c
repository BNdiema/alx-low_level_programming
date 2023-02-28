#include "main.h"
#include <stdio.h>

/**
 * _strlen - retunrns the lenth of a string
 * @s: string
 * Return: lenth of string
 */

int _strlen(char *s)
{
int l = 0;
while (*s != '\0')
{
l++;
s++;
}
return (l);
}
