#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */

char *cap_string(char *str)
{
int capitalize = 1;

for (int index = 0; str[index]; index++)
{
if ((str[index] >= 'a' && str[index] <= 'z') && capitalize)
{
str[index] -= 32;
capitalize = 0;
}
else
{
capitalize = 0;

switch (str[index])
{
case ' ':
case '\t':
case '\n':
case ',':
case ';':
case '.':
case '!':
case '?':
case '"':
case '(':
case ')':
case '{':
case '}':
capitalize = 1;
}
}
}

return (str);
}
