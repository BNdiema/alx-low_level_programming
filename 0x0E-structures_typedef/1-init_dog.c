#include <stdio.h>
#include "dog.h"
#include <string.h>

/**
 * init_dog - check the code
 *@d: Pointer structure variable
 *@name: Member variable Pointer to name of dog
 *@age: Member variable age of dog
 *@owner: Member variable Pointer to name of dog owner
 *
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
(*d).name = name;
(*d).owner = owner;
(*d).age = age;
}

