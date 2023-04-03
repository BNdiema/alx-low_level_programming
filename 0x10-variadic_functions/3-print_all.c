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
char *s;
va_list list;

va_start(list, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(list, int));
break;
case 'i':
printf("%d", va_arg(list, int));
break;
case 'f':
printf("%f", (float) va_arg(list, double));
break;
case 's':
s = va_arg(list, char *);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
break;
default:
break;
}
if (format[i + 1] && (format[i] == 'c' || format[i] == 'i' ||
		      format[i] == 'f' || format[i] == 's'))
{
printf(", ");
}
i++;
}
printf("\n");
va_end(list);
}
