#include "main.h"
#include <stdio.h>

/**
 * _strlen - retunrns the lenth of a string
 * @s: string
 * Return: lenth of string
 */

int _strlen(char *s)
{
int lenth = 0;
for (*s = 0; *s != '\0'; ++*s)
lenth ++;
_putchar(*s);
return (0);
}
