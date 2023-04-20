#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  *print_all - prints anything
  * @format: pointer to list of args passed
  * Return: 0
  */
void print_all(const char * const format, ...)
{
int i = 0;
int x = 0;
char *s;
char *sep = ", ";
va_list list;

va_start(list, format);

while (format && format[i])
i++;

while (format && format[x])
{
if (x == (i - 1))
{
sep = "";
}
switch (format[x])
{
case 'c':
printf("%c%s", va_arg(list, int), sep);
break;
case 'i':
printf("%d%s", va_arg(list, int), sep);
break;
case 'f':
printf("%f%s", (float) va_arg(list, double), sep);
break;
case 's':
s = va_arg(list, char *);
if (s == NULL)
s = "(nil)";
printf("%s%s", s, sep);
break;
}
x++;
}
printf("\n");
va_end(list);
}
