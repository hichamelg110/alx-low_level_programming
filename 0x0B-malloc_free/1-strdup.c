#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory,which containing a copy of the
 * string given as parameter.
 * @str: the original string
 * Return: if str = NULL, return NULL, on success
 * the _strdup function returns a pointer to
 * the duplicated string, it returns NULL if insufficient memory
 * was available
 */

char *_strdup(char *str)
{
char *copy;
int i;

if (str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
;

copy = malloc(sizeof(char) * (i + 1));

if (copy == NULL)
return (NULL);

for (i = 0; str[i]; i++)
copy[i] = str[i];

copy[i] = '\0';

return (copy);
}
