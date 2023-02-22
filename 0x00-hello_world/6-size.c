#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
printf("size of a float: %zu byte(x)\n", sizeof(float));
printf("size of an int: %zu bytes(x)\n", sizeof(int));
printf("size of a char: %zu bytes(x)\n", sizeof(char));
printf("size of a long int: %zu bytes(x)\n", sizeof(long int));
printf("size of long long int : %zu bytes(x)\n", sizeof(long long int));
return (0);
}
