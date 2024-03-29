#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for dog
 * @name: type char
 * @age: float type
 * @owner: char type
 */

struct dog
{
char *name;
char *owner;
float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
