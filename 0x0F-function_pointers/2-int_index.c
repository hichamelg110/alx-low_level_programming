#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: the array
 * @size: the size
 * @cmp: pointer function
 * Return: The index of the first element in the array
 * for which the comparison function does not return 0.
 * If no element matches, returns -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || size <= 0 || cmp == NULL)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
