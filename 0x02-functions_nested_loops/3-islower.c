#include "main.h"

/**
 * _islower - checks for te lowest character
 * @c: variable
 * Return: c if lowest otherwise rturn 0
 */

int _islower(int c)
{
if (c >= 'a' &&c <= 'z')
{
_putchar(1);
}
else
{
_putchar(0);
}
return (0);
}
