#include <stdio.h>
/**
 * print_alphabet - a function that prints the alphabet,
 * in lowercase, followed by a new line.
 * Return: 0.
 */

void print_alphabet(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');

}
