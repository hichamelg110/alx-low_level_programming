#include "main.h"
#include <stdblib.h> 
/**
 * read_textfile - Read text file and print to STDOUT.
 * @filename: Pointer to the name of the file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t c;
int fd;
char buf[READ_BUF8SIZE * 8];

if (filename == NULL || letters == 0)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
c = read(fd, buf, letters);
c = write(STDOUT_FILENO, buf, c);
close(fd);

return (c);
}

