#include "main.h"

/**
 * print_last_digit - function that prints last digit of a number
 * @i: int variable
 * Return: Value of the last digit
 */

int print_last_digit(int i)
{
int num;
num = i % 10;
if (num < 0)
num *= -1;
_putchar(num + '0');
return (i);
}
