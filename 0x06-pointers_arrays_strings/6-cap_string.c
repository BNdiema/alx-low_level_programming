#include "main.h"

/**
 * cap_string - capitalize each word
 * @w: pointer to a string
 * Return: w
 */

char *cap_string(char *w)
{
int capp = 1;
char *l = w;
while (*l != '\0')
{
if (capp && *l  >= 'a' && *l <= 'z')
{
*l = *l - 'a' + 'A';
}
if (',' || ';' || '.' || '!' || '?' || '"' || '(' || ')' || '{' || '}')
{
capp = 1;
}
else
{
capp = (0);
}
*l++;
}
return (w);
}
