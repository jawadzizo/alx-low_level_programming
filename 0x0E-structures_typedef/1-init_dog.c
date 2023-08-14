#include "dog.h"
#include <stdio.h>

/**
 * init_dog - a function to initielize a struct
 * @d: a pointer to struct
 * @name: name of struct
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
