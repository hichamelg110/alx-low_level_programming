#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @n: input
 * Return: n value
 */
char *leet(char *n)
{
int i, c;

char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (i = 0; n[i] != '\0'; i++)
{
for (c = 0; c < 10; c++)
{
if (n[i] == s1[c])
{
n[i] = s2[c];
}
}
}

return (n);
}

