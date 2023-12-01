#include "main.h"
#include <stdio.h>

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0 on success, or an exit code on failure.
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to;
ssize_t bytes_read, bytes_written;
char buffer[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
return (97);
}

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
return (98);
}

fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
close(fd_from);
return (99);
}

while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
close(fd_from);
close(fd_to);
return (99);
}
}

if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
close(fd_from);
close(fd_to);
return (98);
}

if (close(fd_from) == -1 || close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close file descriptor\n");
return (100);
}

return (0);
}
