#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Multiplies two numbers
 * @argc: no of arguments passed
 * @argv: arguments passed
 * Return: pointer to mu1
 */

int main(int argc, char *argv[])
{
int *arry;
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
int mu1;
if (argc != 3)
{
printf("Error\n");
return (98);
}
if (num1 < 0 || num2 < 0)
{
printf("Error\n");
return (98);
}
arry = malloc(4 * sizeof(int));
if (arry == NULL)
return (0);
mu1 = num1 * num2;
arry[1] = num1;
arry[2] = num2;
arry[3] = mu1;
printf("%d\n", mu1);
free(arry);
return (0);
}
