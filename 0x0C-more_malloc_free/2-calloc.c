#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for
 * an array, using malloc.
 * @nmemb: number of elements
 * @size: the size of bytes
 * Return: a pointer to the allocated memory
 * If nmemb or size is 0, then _calloc returns NULL,
 * If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i, c;
char *p;

if (nmemb == 0 || size == 0)
return (NULL);
c = nmemb * size;
p = malloc(c);
if (p == NULL)
return (NULL);
for (i = 0; i < c; i++)
p[i] = 0;

return (p);
}

