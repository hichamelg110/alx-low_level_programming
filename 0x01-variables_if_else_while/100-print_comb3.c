#include <stdio.h>
/**
 * main - a program that prints all possible
 * different combinations of two digits.
 * Return: 0.
 */

int main(void)
{
for (int ch = '0'; ch <= '9'; ch++)
{
for (int c = ch; c <= '9'; c++)
{
if (ch != c)
{
putchar(ch);
putchar(c);

if (ch != '8' || c != '9')
{
putchar(',');

putchar(' ');
}
}
}
}



putchar('\n');


return (0);
}

