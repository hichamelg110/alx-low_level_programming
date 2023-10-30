#include "main.h"
#include <stdio.h>
/**
 * puts2 - a function that prints every other character of
 * a string, starting with the first character, followed by a new line.
 * @str: string
 */

void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (i % 2 != 0)
{
putchar(str[i]);
}
}
putchar('\n');
}
