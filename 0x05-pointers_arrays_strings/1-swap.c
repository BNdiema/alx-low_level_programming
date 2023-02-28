#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 * @a: integer
 * @b: integer
 * Return: a = 98, b =42 and a =42, b =98
 */

void swap_int(int *a, int *b)
{
int i;

i = *a;
*a = *b;
*b = i;
}
