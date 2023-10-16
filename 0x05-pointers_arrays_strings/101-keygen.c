#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random
 * valid passwords for the program 101-crackme.
 *
 * Return: 0
 */
int main(void)
{
int x[100];
int i, a, n;

a = 0;
srand(time(NULL));

for (i = 0; i < 100; i++)
{
x[i] = rand() % 78;
a += (x[i] + '0');
if ((2772 - a)-'0' < 78)
{
n = 2772 - a - '0';
a += n;
x[i] = n;
break;
}
}
for (i = 0; i < 100 && x[i] != '\0'; i++)
{
putchar(x[i] + '0');
}

return (0);
}

