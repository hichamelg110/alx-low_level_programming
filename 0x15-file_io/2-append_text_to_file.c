#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: Pointer to the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int c, m, v = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (v = 0; text_content[v];)
v++;
}
c = open(filename, O_WRONLY | O_APPEND);
m = write(c, text_content, v);
if (c == -1 || m == -1)
return (-1);
close(c);

return (1);
}

