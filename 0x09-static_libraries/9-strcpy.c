#include "main.h"
/**
 *_strcpy - copiies string by src + null bytr to beffer pointed by dest
 *@src: copy from
 *@dest: to to copy
 * Return: value of pointer dest
 */


char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
