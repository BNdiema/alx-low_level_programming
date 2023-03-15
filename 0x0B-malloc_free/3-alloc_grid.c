#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function returns a pointer to a 2 dimensional array
 * of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to 2D array or NULL if failure
 */



int **alloc_grid(int width, int height)
{
int **grid;
int i;
int j;

if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{ 
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
return (NULL);
{
for (--i; i >= 0; i--)
free(grid[i]);
free(grid);
return (NULL);
}
}
for (j = 0; j < width; j++)
grid[i][j] = 0;
return (grid);
}
