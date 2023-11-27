#include "main.h"
/**
 * read_textfile - Read text file and print to STDOUT.
 * @filename: Pointer to the name of the file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
if (!filename)
return 0;

int fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
char *buffer = malloc(sizeof(char) * (letters + 1));
if (!buffer)
{
close(fd);
return (0);
}
ssize_t c = read(fd, buffer, letters);
if (c == -1)
{
free(buffer);
close(fd);
return (0);
}
buffer[c] = '\0';
ssize_t m = write(STDOUT_FILENO, buffer, c);

free(buffer);
close(fd);

return (m == -1 ? 0 : m);
}

