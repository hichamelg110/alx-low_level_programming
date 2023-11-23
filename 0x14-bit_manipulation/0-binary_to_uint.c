#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number
 * to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * - b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
int m;
unsigned int c;

c = 0;
if (b == NULL)
return (0);
for (m = 0; b[m] != '\0'; m++)
{
if (b[m] != '0' && b[m] != '1')
return (0);
}
for (m = 0; b[m] != '\0'; m++)
{
c <<= 1;
if (b[m] == '1')
c += 1;
}

return (c);
}

