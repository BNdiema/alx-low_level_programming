#ifndef LNK_LIST_H
#define LNK_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s -singly linked list
 * @str: (malloc'ed string)
 * @len: lenth of the string
 * @next:points to next node
 *
 *Description : siingly linked list node structure
 */

typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif