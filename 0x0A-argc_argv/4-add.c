#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - a program that adds positive numbers.
 * @argc: argument counts
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
if (!isdigit(*argv[i]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}
