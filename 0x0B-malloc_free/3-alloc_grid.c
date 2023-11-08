#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to a 2
 * dimensional array of integers.
 * @width: width
 * @height: height
 * Return: a pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
int i, c;
int **grid;

if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (c = 0; c < i; c++)
free(grid[c]);
free(grid);
return (NULL);
}
for (c = 0; c < width; c++)
grid[i][c] = 0;
}

return (grid);
}
