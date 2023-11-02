#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: If the function fails, it should return NULL
 * otherwise, return a pointer to the newly allocated space memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concatenates;
unsigned int i, c = 0, m = 0;

if (s1 == NULL)
s1 = "";
for (c = 0; s1[c] != '\0'; c++)
;
if (s2 == NULL)
s2 = "";
for (m = 0; s2[m] != '\0'; m++)
;
if (n >= m)
n = m;

concatenates = malloc(sizeof(char) * (c + n + 1));
if (concatenates == NULL)
return (NULL);

for (i = 0; i < c; i++)
concatenates[i] = s1[i];

for (i = 0; i < n; i++)
concatenates[c + i] = s2[i];

concatenates[c + n] = '\0';
return (concatenates);
}

