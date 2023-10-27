#include <stdio.h>

/**
 * main -  a program that prints all
 * arguments it receives.
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return:  0
 */

int main(int argc, char *argv[])
{
for (int i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
