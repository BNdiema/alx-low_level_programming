#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: pointer to a string
 * @s2: pointer to a string
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
unsigned int str_len1 = 0;
unsigned int str_len2 = 0;
unsigned int new_len = 0;
char *newstr;
unsigned int i = 0;
for (str_len1 = 0; s1[str_len1] != '\0'; str_len1++)
for (str_len2 = 0; s2[str_len2] != '\0'; str_len2++)
new_len = str_len1 + str_len2;
newstr = malloc((new_len + 1) * sizeof(char));
if (newstr == NULL)
return (NULL);
while (newstr == NULL)
newstr = "";
for (i = 0; i < str_len1; i++)
newstr[i] = s1[i];
for (i = 0; i < str_len2; i++)
newstr[str_len1 + i] = s2[i];
newstr[new_len] = '\0';
return (newstr);
}
