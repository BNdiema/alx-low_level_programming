#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created
 * @grid: input pointer to 2D array
 * @height: height of 2D arrray
 * Return: void
 */

void free_grid(int **grid, int height)
{
int n;
for (n = 0; n < height; n++)
free(grid[n]);
free(grid);
}
