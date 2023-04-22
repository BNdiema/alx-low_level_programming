#include <stdio.h>
/**
 * main - prints a string exactly as is
 * Return: 1
 */

int main(void)
{
char *Text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
int i = 0;
while (Text[i] != '\0')
{
putchar(Text[i]);
i++;
}
putchar('\n');
return (1);
}
