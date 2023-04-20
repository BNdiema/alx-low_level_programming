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
va_list list_num;
va_start(list_num, n);
if (separator == NULL)
return;
for (i = 0; i < n; i++)
{

printf("%d", va_arg(list_num, int));

if (i < n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(list_num);
}
