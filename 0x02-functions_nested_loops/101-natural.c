#include <stdio.h>

/**
 * main -  a program that computes and prints the sum of
 * all the multiples of 3 or 5 below 1024
 * Return: 0.
 */
int main(void)
{
int i, k = 0;

for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
k += i;
}
}
printf("%d\n", k);

return (0);
}

