#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: integer
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int result;
va_list my_list;
result = 0;
va_start(my_list, n);
for (i = 0; i < n; i++)
result = result + va_arg(my_list, int);
va_end(my_list);
return (result);
}
