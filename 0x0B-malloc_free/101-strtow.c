#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
  *strtow - splits a string into words.
  * @str: pointer to a string
  * Return:0
  */


char **strtow(char *str)
{
int num_words = 0;
int i;
char *p = str;
char *q = p;
int word_len = q - p;
int j;
char **words;
if (str == NULL || *str == '\0')
return (NULL);
while (*p != '\0')
while (*p == ' ')
p++;
if (*p != '\0')
num_words++;
while (*p != ' ' && *p != '\0')

words = (char **)malloc((num_words + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

p = str;
for (i = 0; i < num_words; i++)
while (*p == ' ')
p++;
while (*q != ' ' && *q != '\0')
q++;
words[i] = (char *)malloc((word_len + 1) * sizeof(char));
if (words[i] == NULL)
for (j = 0; j < i; j++)
free(words[j]);
free(words);
return (NULL);
strncpy(words[i], p, word_len);
words[i][word_len] = '\0';
p = q;
words[num_words] = (NULL);
return (words);
}
