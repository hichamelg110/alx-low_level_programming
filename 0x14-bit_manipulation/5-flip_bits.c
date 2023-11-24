#include "main.h"
/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to be flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int c;
unsigned long int v;

v = n ^ m;
c = 0;
while (v)
{
c += v & 1;
v >>= 1;
}

return (c);
}

