#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add - adds int a and b
 * @a: first integer 
 * @b: second integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
  return (a + b);
}

/**
 * sub - subtracs int a from b
 * @a: first integer
 * @b: second integer
 * Return: remainder of a - b
 */

int op_sub(int a, int b)
{
  return (a - b);
}

/**
 * mul - multiplies a and b
 * @a: first number
 * @b: second number
 * Return: multiplication of a and b
 */


int op_mul(int a, int b)
{
  return (a * b);
}

/**
 * div - divide a and b
 * @a: first number
 * @b: second number
 * Return: division of a and b
 */

int op_div(int a, int b)
{
  return (a / b);
}

/**
 * mod - remainder of a and b after division
 * @a: first number
 * @b: second number
 * Return: remainder of a and b
 */

int op_mod(int a, int b)
{
  return (a % b);
}
