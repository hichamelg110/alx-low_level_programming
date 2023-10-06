#include <stdio.h>
/**
 * main - a program that prints all single digit
 * numbers of base 10 starting from 0, followed by a new line.
 * Return: 0.
 */

int main(void)
{
int a = 0;

for (; a < 10; a++)
{
putchar(a + '0');
}
putchar('\n');

return (0);
}
