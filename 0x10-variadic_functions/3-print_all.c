#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - a function that prints anything.
 * @format: types of arguments
 */

void print_all(const char * const format, ...)
{
int i = 0, c;
char m;
float f;
char *str;

va_list vargs;
va_start(vargs, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
c = va_arg(vargs, int);
printf("%c", c);
break;
case 'i':
m = va_arg(vargs, int);
printf("%d", m);
break;
case 'f':
f = va_arg(vargs, double);
printf("%f", f);
break;
case 's':
str = va_arg(vargs, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
break;
default:
break;
}

if (format[i + 1] && (format[i + 1] == 'c' ||
format[i + 1] == 'i' || format[i + 1] == 'f' || format[i + 1] == 's'))
{
printf(", ");
}
i++;
}
printf("\n");
va_end(vargs);
}
