#include "main.h"


ssize_t read_textfile(const char *filename, size_t letters)
{
if (filename == NULL)
{
return 0;
}

int fd = open(filename, O_RDONLY);
if (fd == -1)
{
return 0;
}

ssize_t r_bytes = 0;
char buffer[letters + 1];

while (r_bytes < letters)
{
ssize_t bytes_to_read = letters - r_bytes;
ssize_t c = read(fd, buffer, bytes_to_read);

if (c == -1)
{
close(fd);
return 0;
}

if (c == 0)
{
break;
}
buffer[c] = '\0';
printf("%s", buffer);

r_bytes += c;
}
close(fd);
return r_bytes;
}
