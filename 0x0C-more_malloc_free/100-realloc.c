#include "main.h"
#include <stdlib.h>
/**
* _realloc - a function that reallocates a memory block using malloc and free
* @ptr: pointer
* @old_size: the old size
* @new_size: the new size
* Return: pointer to the newly allocated memory, or NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i, n;
char *p;
char *c = ptr;

if (ptr == NULL)
{
p = malloc(new_size);
return (p);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
return (ptr);
p = malloc(new_size);
if (p == NULL)
return (NULL);
if (new_size > old_size)
n = old_size;
for (i = 0; i < n; i++)
p[i] = c[i];
free(ptr);

return (p);
}
