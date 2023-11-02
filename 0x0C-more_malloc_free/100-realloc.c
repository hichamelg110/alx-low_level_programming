#include "main.h"
#include <stdlib.h>
/**
* _realloc - a function that reallocates a memory block using malloc and free
* @ptr: pointer
* @old_size: the old size
* @new_size: the new size
* Return: pointer to the newly allocated memory, or NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size) {
char *p;
unsigned int i;

if (new_size == old_size) {
return (ptr);
}
if (new_size == 0) {
free(ptr);
return (NULL);
}
p = malloc(new_size);
if (p == NULL) {
return (NULL);
}
for (i = 0; i < old_size; i++) {
p[i] = ((char *)ptr)[i];
}
free(ptr);

return (p);
}
