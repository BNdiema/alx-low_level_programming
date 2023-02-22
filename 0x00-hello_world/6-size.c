#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
printf("size of a float: %zu byte(s)\n", sizeof(float));
printf("size of an int: %zu bytes(s)\n", sizeof(int));
printf("size of a char: %zu bytes(s)\n", sizeof(char));
printf("size of a long int: %zu bytes(s)\n", sizeof(long int));
printf("size of a long long int: %zu bytes(s)\n", sizeof(long long int));
return (0);
}
