#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all
 * its parameters.
 * @n: number of paramters
 * @...: variable number of parameters to calculate the sum of
 * Return: If n == 0 - 0,
 * otherwise,returns the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum = 0;
va_list sumptr;

va_start(sumptr, n);

for (i = 0; i < n; i++)
sum += va_arg(sumptr, int);

va_end(sumptr);

return (sum);
}
