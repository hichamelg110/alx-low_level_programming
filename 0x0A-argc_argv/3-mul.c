#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: number of arrays
 *
 * Return: If the program does not receive two arguments
 * print Error, followed by a new line, and return 1
 */

int main(int argc, char *argv[])
{
int i, v, m;

if (argc - 1 != 2)
{
printf("Error\n");
return (1);
}
i = atoi(argv[1]);
v = atoi(argv[2]);
m = i *v;
printf("%d\n", m);

return (0);
}
