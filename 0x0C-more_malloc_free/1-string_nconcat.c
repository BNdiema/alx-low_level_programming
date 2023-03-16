#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: pointer
 * @s2: pointer
 * @n: size of unsigned int
 * Return: Always 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s3;
if (s1 == NULL)
return ("");
if (s2 == NULL)
return ("");
int strlen1 = strlen(s1);
int strlen2 = strlen(s2);
if (n >= strlen2)
n = strlen2;
int newlen = strlen1 + n;
s3 = malloc(newlen * sizeof(char) + 1);
if (s3 == NULL)
return (NULL);
int i;
for (i = 0; i < strlen1; i++)
s3[i] = s1[i];
for (i = 0; i < n; i++)
s3[i + strlen1] = s2[i];
s3[newlen] = '\0';
return (s3);
}
