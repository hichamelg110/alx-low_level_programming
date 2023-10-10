#include "main.h"
/**
 * times_table - a function that prints the 9
 * times table, starting with 0.
 */

void times_table(void)
{
int i, k, x;

for (i = 0; i < 10; i++)
{
for (k = 0; k < 10; k++)
{
x = k * i;
if (k == 0)
{
_putchar(x + '0');
}
if (x < 10 && k != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(x + '0');
}
else if (x >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((x / 10) + '0');
_putchar((x % 10) + '0');
}
}
_putchar('\n');
}
}
