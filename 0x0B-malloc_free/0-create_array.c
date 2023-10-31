#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 * @size: the size of array
 * @c: the character
 * Return: return NULL if the size equal 0,
 * returns a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *a;
if (size == 0)
return (NULL);

a = malloc(size * sizeof(char));
if (a == NULL)
return (NULL);

for (i = 0; i < size; i++)
a[i] = c;

return (a);
}
