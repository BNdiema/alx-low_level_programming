#include "main.h"

/**
 * _strncpy - copies a string of bytes n from src to dest
 * @dest: were to copy string
 * @src: were to copy from
 * @n: integer
 * Return: pointer to string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
}
