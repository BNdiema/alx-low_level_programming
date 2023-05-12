#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - prints error message
 * @message: pointer to error message to be printed
 * Return: error massage
 */
void error_exit(const char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(EXIT_FAILURE);
}

/**
 * copy_file - copies content of one file to another
 * @file_from: file to be copied from
 * @file_to: file were contents will be copied to
 * Return: 1 on success and error message on failure
 */
void copy_file(const char *file_from, const char *file_to)
{
int fd_from;
int fd_to;
ssize_t bytes_read;
ssize_t written_bytes;
char buffer[BUFFER_SIZE];

fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
error_exit("Error: Can't read from file");

fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR |
	     S_IRGRP | S_IWGRP | S_IROTH);
if (fd_to == -1)
{
close(fd_from);
close(fd_to);
error_exit("Error: Can't write to file");
}

while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
written_bytes = write(fd_to, buffer, bytes_read);
if (written_bytes == -1)
{
close(fd_from);
close(fd_to);
error_exit("Error: Can't write to file");
}
}

if (bytes_read == -1)
error_exit("Error: Can't read from file");

if (close(fd_from) == -1)
error_exit("Error: Can't read from fd");

if (close(fd_to) == -1)
error_exit("Error: Can't close fd");
}

/**
 * main - main function entry point
 * @argc: arguments passed
 * @argv: array of stings to be  passed
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
return (97);
}

copy_file(argv[1], argv[2]);

return (0);
}
