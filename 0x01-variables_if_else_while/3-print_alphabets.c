#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0.
 */

int main(void)
{
char ch = 'a';
char c = 'A';
for (; ch <= 'z'; ch++)

{
putchar(ch);
}
for (; c <= 'Z'; c++)
{
putchar(c);
}
putchar('\n');



return (0);
}

