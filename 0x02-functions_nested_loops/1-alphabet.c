#include <stdio.h>
/**
 * main - a function that prints the alphabet,
 * in lowercase, followed by a new line.
 * Return: 0.
 */

void print_alphabet(void);
{
for (int i = 'a'; i <= 'z'; i++)
{
putchar(i);
putchar('\n');
}
}
