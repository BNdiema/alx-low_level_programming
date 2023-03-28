#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: Pointer to a saparator
 * @n: intager
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int num = 0;
va_list list_num;
va_start(list_num, n);
if (separator == NULL)
return;
for (i = 0; i < n; i++)
{
num = num + va_arg(list_num, int);
printf("%d", num);
if (i != n - 1)
printf("%s", separator);
}
printf("\n");
va_end(list_num);
}
