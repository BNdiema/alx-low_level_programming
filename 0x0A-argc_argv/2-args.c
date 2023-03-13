#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc:int, no of argumets passed
 * @argv: char, argumets passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
int p;
for (p = 0; p < argc; p++)
printf("%s\n", argv[p]);
return (0);
}
