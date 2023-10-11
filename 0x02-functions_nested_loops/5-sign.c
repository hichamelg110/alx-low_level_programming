#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: printed number
 * Return: 1 if the number is greater than zero,
 * 0 if the number is zero,
 * -1 if the number is less than zero.
 */
int print_sign(int n)
{
if (n > 0)
{
return (1);
putchar('+');
}

else if (n < 0)
{
return (-1);
putchar('-');
}
else
{
return (0);
putchar('0');
}
}
