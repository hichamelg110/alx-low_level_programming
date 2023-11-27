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
char *buffer;
ssize_t fd;
ssize_t write_b;
ssize_t read_b;

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
read_b = read(fd, buffer, letters);
write_b = write(STDOUT_FILENO, buffer, read_b);

free(buffer);
close(fd);
return (write_b);
}
