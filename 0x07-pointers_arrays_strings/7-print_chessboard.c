#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints a chessboard
 * @a: array
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
for (int row = 0; row < 8; row++)
{
for (int col = 0; col < 8; col++)
{
_putchar(a[row][col]);
_putchar(' ');
}
_putchar('\n');
}
}
