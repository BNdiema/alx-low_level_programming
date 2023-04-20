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
char *str;
va_list list_num;
va_start(list_num, n);

for (i = 0; i < n; i++)
{
str = va_arg(list_num, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(list_num);
}
