#include "main.h"
#include <string.h>
/**
 * create_file - a function that creates a file.
 * @filename: a pointer to a string that contains the name of the file
 * @text_content: a pointer to a string that contains the text to write
 * Return: If the function fails -1 Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
ssize_t m;
int c;

if (!filename)
return (1);
c = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (c == -1)
{
return (-1);
}
if (text_content)
{
m = write(c, text_content, strlen(text_content));
if (m == -1)
{
close(c);
return (-1);
}
}
close(c);
return (1);
}
