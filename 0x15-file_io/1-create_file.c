#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: a pointer to a string that contains the name of the file
 * @text_content: a pointer to a string that contains the text to write
 * Return: If the function fails -1 Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
int m = 0, w, fd;

if (filename == NULL)
return (-1);
if (text_content != NULL)
for (m = 0; text_content[m];)
m++;
}
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(fd, text_content, m);
if (fd == -1 || w == -1)
return (-1);
close(fd);

return (1);
}

