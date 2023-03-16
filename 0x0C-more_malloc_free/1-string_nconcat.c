#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings.
 * @s1: pointer to string
 * @s2: pointer to string
 * @n: no of bytes fr0m s2 to be concatenated to s1
 * Return: pointer to result of string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s3;
if (s1 == NULL)
return ("");
if (s2 == NULL)
return ("");
unsigned int strlen1 = 0;
unsigned int strlen2 = 0;
while (s1[strlen1])
strlen1++;
while (s2[strlen2])
strlen2++;
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
