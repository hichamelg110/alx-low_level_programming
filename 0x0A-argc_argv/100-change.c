#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the minimum number of
 * coins to make change for an amount of money.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i, c, v;
int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}

i = atoi(argv[1]);
v = 0;

if (i < 0)
{
printf("0\n");
return (0);
}

for (c = 0; c < 5 && i >= 0; c++)
{
for (; i >= coins[c]; i -= coins[c])
{
v++;
}
}
printf("%d\n", v);
return (0);
}

