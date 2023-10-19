#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: destination
 * @src: source
 * @n: the times concatenates
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int v = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[v] != '\0' && n > 0)
{
dest[i] = src[v];
i++;
v++;
n--;
}

dest[i] = '\0';

return (dest);
}

