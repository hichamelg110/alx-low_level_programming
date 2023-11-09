#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: variable number of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list vargs;
unsigned int i;

va_start(vargs, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(vargs, int));
if (i != n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(vargs);
}
