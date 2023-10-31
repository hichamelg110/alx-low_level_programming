#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: if concatenation fails return NULL
 * otherwise returned a pointer point to a newly allocated
 * space in memory containing the concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
char *concatenates;
int c = 0, m = 0, i;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (c = 0; s1[c] != '\0'; c++);
for (m = 0; s2[m] != '\0'; m++);

concatenates = malloc(sizeof(char) * (c + m + 1));
if (concatenates == NULL)
return (NULL);

for (i = 0; i < c; i++)
concatenates[i] = s1[i];
for (i = 0; i < m; i++)
concatenates[i + c] = s2[i];
concatenates[c + m] = '\0';

return (concatenates);

