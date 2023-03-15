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
if (str == NULL)
return (NULL);
while (str[l] != '\0')
l++;
l++;
new = malloc(l * (sizeof(char)));
for (l = 0; new[l] != '\0'; l++)
str[l] = new[l];
new[l] = '\0';
return (new);
}
