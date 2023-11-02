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
if (new_size == old_size)
{
return (p);
}
if (p == NULL)
{
return malloc(new_size);
}
if (new_size == 0)
{
free(p);
return (NULL);
}
void *new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}
size_t copy_size = (new_size < old_size) ? new_size : old_size;
memcpy(new_ptr, ptr, copy_size);
free(p);

return (new_ptr);
}
