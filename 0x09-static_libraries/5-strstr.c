#include "main.h"
#include "stdio.h"

/**
 * _strstr - locates a substring
 * @haystack: the long string to be search
 * @needle: the substring to search for
 * Return: string or NULL
 */

char *_strstr(char *haystack, char *needle)
{
  char *h = haystack;
  char *n = needle;
if (!*needle)
{
return (haystack);
}
while (*h && *n && *h == *n)
{
h++;
n++;
}
if (!*n)
{
return (haystack - (n - needle));
}
haystack++;
return (NULL);
}
