#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
int c, i;
int *p;

if (min > max)
return (NULL);
c = max - min + 1;
p = malloc(sizeof(int) * c);
if (p == NULL)
return (NULL);
for (i = 0; i < c; i++, min++)
p[i] = min;

return (p);
}
