#include "main.h"

/**
 * string_toupper -a function that changes all lowercase letters
 * of a string to uppercase.
 * @c: the string will be modified
 *
 * Return: a pointer to the resulting string
 */
char *string_toupper(char *c)
{
int i;

for (i = 0; c[i]; i++)
{
if (c[i] >= 'a' && c[i] <= 'z')
{
c[i] = c[i] - ('a' - 'A');
}
}
return (c);
}
