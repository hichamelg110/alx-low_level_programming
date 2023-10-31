#include "main.h"
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all the
 * arguments of your program.
 * @ac: count of argument
 * @av: pointer to array of strings
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
int i, n;
int c = 0, m = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n] != '\0'; n++)
m++;
}

m += ac;
str = malloc(sizeof(char) * (m + 1));
if (str == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n] != '\0'; n++)
{
str[c] = av[i][n];
c++;
}
str[c++] = '\n';
}
str[c] = '\0';

return (str);
}
