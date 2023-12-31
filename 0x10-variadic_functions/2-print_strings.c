#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings,
 * followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: variable numbers to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list vargs;
unsigned int i;
char *str;

va_start(vargs, n);

for (i = 0; i < n; i++)
{
str = va_arg(vargs, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (i != n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(vargs);
}
