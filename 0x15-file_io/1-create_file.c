#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: a pointer to a string that contains the name of the file
 * @text_content: a pointer to a string that contains the text to write
 *
 * Return: -1 If the function fails, otherwise return 1.
 */

int create_file(const char *filename, char *text_content)
{
if (filename == NULL)
{
return (-1);
}

int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
{
return (-1);
}
if (text_content != NULL)
{
ssize_t c = write(fd, text_content, strlen(text_content));
if (c == -1 || c != strlen(text_content))
{
close(fd);
return (-1);
}
}
if (close(fd) == -1)
{
return (-1);
}

return (1);
}
