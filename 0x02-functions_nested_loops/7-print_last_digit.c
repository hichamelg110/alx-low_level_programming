#include "main.h"
/**
 * print_last_digit - a function that prints
 * the last digit of a number.
 * @n: the integer
 *
 * Return: 0
 */
int print_last_digit(int)
{
int n;
int b = n % 10;
putchar('0' + (b >= 0 ? b : -b));
return (b);
}
