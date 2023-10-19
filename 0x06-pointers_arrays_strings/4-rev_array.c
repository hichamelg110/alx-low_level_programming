#include "main.h"

/**
 * reverse_array - a function that reverses the content
 * of an array of integers.
 * @a: the array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
int i, c;

for (i = 0; i < n / 2; i++)
{
c = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = c;
}
}
