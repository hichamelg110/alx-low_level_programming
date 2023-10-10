#include <stdio.h>
/**
 * print_alphabet_x10 - a function that prints 10 times the
 * alphabet, in lowercase, followed by a new line.
 * Return: 0.
 */

void print_alphabet_x10(void)
{
for (int k = 0; k < 10; k++)
{

for (int i = 'a'; i <= 'z'; i++)
{
putchar(i);
}

putchar('\n');
}
}
