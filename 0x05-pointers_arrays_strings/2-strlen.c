#include "main.h"
#include <stdio.h>

/**
 * _strlen - retunrns the lenth of a string
 * @s: string
 * Return: lenth of string
 */

int _strlen(char *s)
{
for (*s = 0; *s != '\0'; ++*s)
_putchar(*s);
return (0);
}
