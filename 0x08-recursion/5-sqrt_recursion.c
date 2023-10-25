#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number.
 * @n : number for which to calculate the square root
 *
 * Return: the resulting square root, or -1 if n is negative
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - a function that recurses to find the natural
 * square root of a number
 * @n: the number to be calculated
 * @i: iterates
 *
 * Return: result of square root
 */

int actual_sqrt_recursion(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (actual_sqrt_recursion(n, i + 1));
}
