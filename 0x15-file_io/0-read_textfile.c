#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * read_textfile - reads text file and prints it to POSIx std output
 * @filename: file to be read and printed to standard output
 * @letters: what is to be read and ptinted
 * Return: actual number of letters read and printed, or 0 on fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer_size;
int file;
ssize_t written_bytes;
ssize_t no_of_bytes;
file = open(filename, O_RDONLY);
if (file == -1)
return (0);

if (filename == NULL)
return (0);

buffer_size = malloc(sizeof(char) * (letters + 1));
if (buffer_size == NULL)
return (0);

no_of_bytes = read(file, buffer_size, letters);
written_bytes = write(STDOUT_FILENO, buffer_size, no_of_bytes);


close(file);
free(buffer_size);

return (written_bytes);
}
