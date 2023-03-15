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
unsigned int cnt;
while (str[l] != '\0')
l++;
l++;
new = malloc(l * sizeof(char) + 1);
if (str == NULL)
return (NULL);
for (cnt = 0; new[cnt] != '\0'; cnt++)
str[cnt] = new[cnt];
return (new);
}
