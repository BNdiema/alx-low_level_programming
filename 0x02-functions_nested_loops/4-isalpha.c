#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *@c: veriable
 * Return: 1 if c is a letter upper or lowercase
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
_putchar(1);
return (0);
}
