#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * - there is one or more chars in the string b that is not 0 or 1
 * - b is NULL
 */
 
 int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int bit_check;

if (index >= (sizeof(unsigned long int) * 8))
return (-1);

bit_check = 1UL << index;
if ((n & bit_check) == 0)
return (0);

else
return (1);
}
