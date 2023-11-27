#include "main.h"
/**
 * read_textfile - Read text file and print to STDOUT.
 * @filename: Pointer to the name of the file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t fd;
ssize_t write_s;
ssize_t read_s;

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
read_s = read(fd, buffer, letters);
write_s = write(STDOUT_FILENO, buffer, t);

free(buffer);
close(fd);
return (write_s);
}
