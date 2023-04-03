#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  *print_strings -prints strings
  * @separator: pointer to string between strings
  * @n: number of strings passes to the function
  * Return: string
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list str_list;
va_start(str_list, n);

for (i = 0; i < n; i++)
{
char *str = va_arg(str_list, char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(str_list);
}
