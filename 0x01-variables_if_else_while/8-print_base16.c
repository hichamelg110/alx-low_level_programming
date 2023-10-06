#include <stdio.h>
/**
 * main - Write a program that prints all the numbers
 * of base 16 in lowercase, followed by a new line.
 * Return: 0.
 */

int main(void)
{
int ch = 0;
char c = 'A';
for (; ch < 10; ch++)
{
putchar(ch + '0');
}
for (; c <= 'F'; c++)
{
putchar(c);
}
putchar('\n');



return (0);
}
