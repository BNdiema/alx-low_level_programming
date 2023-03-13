#include <stdio.h>

/**
 * main - Prints program name
 * @argc: int, number of arguments passed on the CLI
 * @arvg: char, String(s) represented by @argc 
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i = 0;
while (argc == i)
printf("%s\n", *argv[i]);
return (0);
}
