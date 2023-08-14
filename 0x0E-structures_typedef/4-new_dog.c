#include <stdio.h>
#include "dog.h"

/**
 * new_dog - a function to create a new struct
 * @name: name
 * @age: age
 * @owner: owner
 * Return: returns the new struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int len = strlen(name) + 1 + sizeof(age) + strlen(owner) + 1;

	dog_t *hello = malloc(len);

	hello->name = name;
	hello->age = age;
	hello->owner = owner;

	return (hello);
}
