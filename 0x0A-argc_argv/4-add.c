#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two numbers.
 * @argc: int, number of arguments
 * @argv: char, argumets passed
 * Return: 0 error
 */

int main(int argc, char *argv[])
{
int i;
int sum = 0;
for (i = 1; i < argc; i++)
{
sum += atoi(argv[i]);
} 
printf("%d\n", sum);
return (0);
if (argc == '\0')
{
printf("%d\n", 0);
return (0);
}
for (argc = 1; argc <= 9; argc++)
{
if (argc < '0' && argc > '9')
printf("Error\n");
return (1);
}
return (0);
}
