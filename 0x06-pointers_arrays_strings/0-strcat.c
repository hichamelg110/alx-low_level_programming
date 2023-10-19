#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest: the destination string
 * @src: the source string
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
int i = 0;
int v = 0;

while (dest[i] != '\0')
{
i++;
}

while (src[v] != '\0')
{
dest[i] = src[v];
i++;
v++;
}

dest[i] = '\0';

return (dest);
}
