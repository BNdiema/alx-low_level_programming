#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - print the opcodes
 * @p: address of the main function
 * @n: number of bytes to print
 * Return: void
 */
void print_opcodes(char *p, int n)
{
int i;
unsigned char *opcodes;
for (i = 0; i < n; i++)
{
printf("% .02x", opcodes[i]);
}
printf("\n");
}


/**
 * main - prints the opcodes of main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 * Return: Always 0
 */


int main(int argc, char **argv)
{
int bytes;
int n;
if (argc != 2)
{
printf("Error\n");
return (1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
return (2);
}
print_opcodes((char *)&main, n);
return (0);
}
