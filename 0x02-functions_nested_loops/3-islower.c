#include <stdio.h>
#include <ctype.h>
/**
 * _islower - a function that checks for lowercase character
 * for lowercase character
 * @c : character
 * Return: 1 if c is lowercase, otherwise 0.
 */

int _islower(int c)
{
if (islower(c))
return (1);

else
return (0);
}
