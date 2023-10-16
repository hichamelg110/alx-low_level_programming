#include "main.h"
/**
 * _puts - a function that prints a string,
 * followed by a new line, to stdout.
 * @str: string
 */

void _puts(char *str)
{
int len = strlen(str);
for(int i = 0; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
