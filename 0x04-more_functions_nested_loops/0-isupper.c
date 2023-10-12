#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - a function that checks for uppercase character
 * @c : character
 * Return: 1 if c is uppercase, otherwise 0.
 */

int _isupper(int c)
{
if (isupper(c))
return (1);

else
return (0);
}
