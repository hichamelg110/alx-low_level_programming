#include <stdio.h>

void sll(void) __attribute__ ((constructor));
/**
 * sll - prints a sentence before the main
 * function is executed
 */

void sll(void)
{
printf("You're beat! and yet,");
printf(" you must allow,\nI bore my house upon my back!\n");
}
