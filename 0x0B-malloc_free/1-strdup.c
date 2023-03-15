#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer
 * Return: Always 0.
 */

char *_strdup(char *str)
{
char *new;
unsigned int l = 0;
while (str[l] != '\0')
l++;
l++;
new = malloc(l * sizeof(char));
if (str == NULL)
return (0);
for (l = 0; new[l] != '\0'; l++)
str[l] = new[l];
return (new);
}
