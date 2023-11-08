#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - a function that prints a name.
 * @name: the name to be printed
 * @f: pointer in function
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
exit(1);

f(name);
}
