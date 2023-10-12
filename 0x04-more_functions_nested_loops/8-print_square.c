#include "main.h"

/**
 * print_square -  a function that prints a
 * square, followed by a new line.
 * @size: the size of the square
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, c; // Changed "j" to "c"

for (i = 0; i < size; i++)
{
for (c = 0; c < size; c++) // Changed "j" to "c"
{
_putchar('#');
}
_putchar('\n');
}
}
}

