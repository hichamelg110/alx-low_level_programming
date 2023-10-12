#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - a function that checks for a digit (0 through 9)
 * @c : digit
 * Return: 1 if c is a digit, otherwise 0.
 */

int _isdigit(int c)
{
int i;
for (i = 0; i <= 9; i++)

if (c <= i)
return (1);

else
return (0);
}
