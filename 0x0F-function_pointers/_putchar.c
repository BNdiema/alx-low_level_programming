#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character to be print
 *
 * Return: 1
 * on error, return -1 and error
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
 
