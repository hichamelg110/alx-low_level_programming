#include <stdio.h>
/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: number to be printed in binary
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
unsigned long int bit_check;
int c;

bit_check = 1UL << ((sizeof(unsigned long int) * 8) - 1);
c = 0;
while (bit_check > 0)
{
if ((n & bit_check) == 0)
{
if (c != 0)
_putchar('0');
}
else
{
_putchar('1');
c = 1;
}
bit_check = bit_check >> 1;
}
if (c == 0)

_putchar('0');
}

