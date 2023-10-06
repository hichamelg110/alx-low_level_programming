#include <stdio.h>
/**
 * main - Write a program that prints all possible
 * combinations of single-digit numbers.
 * Return: 0.
 */

int main(void)
{
int ch = '0';
for (; ch <= '9'; ch++)

{
putchar(ch);
putchar(',');
putchar(' ');
}


return (0);
}
