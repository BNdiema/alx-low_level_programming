#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to a file name
 * @text_content: pointer to terminated string to add at the end of the file
 * Return: 1 0n sucess and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file;
ssize_t content_lenth;
ssize_t written_bytes;

if (filename == NULL || text_content == NULL)
return (-1);

file = open(filename, O_WRONLY | O_APPEND);
if (file == -1)
return (-1);

if (text_content != NULL)
{
while (text_content[content_lenth] != '\0')
content_lenth++;
}
written_bytes = write(file, text_content, content_lenth);

close(file);

if (written_bytes == content_lenth)
return (1);
else
return (-1);
}
