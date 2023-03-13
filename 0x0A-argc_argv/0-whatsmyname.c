#include <stdio.h>

/**
 * main - Prints program name
 * @argc: int, number of arguments passed on the CLI
 * @argv: char, String(s) represented by @argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
