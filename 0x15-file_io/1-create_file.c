#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * create_file - creates a file
 * @filename: pointer to a life
 * @text_content: file content
 * Return: 1 on succes and -1 on fail
 */

int create_file(const char *filename, char *text_content)
{
int file;
size_t content_lenth;
ssize_t written_bytes;
content_lenth = 0;

if (text_content != NULL)
{
while (text_content[content_lenth] != '\0')
content_lenth++;
}

file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (file == -1)
return (-1);

if (filename == NULL)
return (-1);

if (text_content != NULL && content_lenth > 0)
{
written_bytes = write(file, text_content, content_lenth);
if (written_bytes == -1)
{
close(file);
return (-1);
}
}
close(file);
return (1);
}
