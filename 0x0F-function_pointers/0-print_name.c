#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name as is
 * @name: pointer to name
 * @f: pointer
 * @char: character pointer
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
int i = 0;
if (name == NULL || f == NULL)
return;
while (name[i] != '\0')
{
f(&name[i]);
i++;
}
}
