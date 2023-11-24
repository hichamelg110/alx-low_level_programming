#include "main.h"
/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: the pointer
 * @index: the index of the bit to be set, starting from 0
 *
 * Return: 1 if worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int c;

if (index >= (sizeof(unsigned long int) * 8))
return (-1);
c = 1 << index;
*n = *n | c;
return (1);
}

