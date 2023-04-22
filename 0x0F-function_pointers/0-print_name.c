#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to a name
 * @f: pointer
 * Return: northing
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

 f(name);
}
