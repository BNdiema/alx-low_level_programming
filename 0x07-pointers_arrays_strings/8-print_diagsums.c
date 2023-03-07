#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - main entry point
 * @a: input
 * @size: input
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0;
int sum2 = 0;
for (i = 0; i <= size; i++)
sum1 += *(a + i * size + i);
sum2 += *(a + i * size + (size - i - 1));
printf("Sum of diagonal 1: %d\n", sum1);
printf("Sum of diagonal 2: %d\n", sum2);
}
