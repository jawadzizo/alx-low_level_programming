#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function to create a new struct
 * @name: name
 * @age: age
 * @owner: owner
 * Return: returns the new struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *hello;
	int lenname = 0;
	int lenowner = 0;
	long int len;
	int i;

	if (name != NULL)
	{
		lenname = 1;
		for (i = 0; name[i] != '\0'; i++)
		lenname++;
	}

	if (owner != NULL)
	{
		lenowner = 1;
		for (i = 0; owner[i] != '\0'; i++)
		lenowner++;
	}

	len = lenname + sizeof(age) + lenowner;

	hello = malloc(len);

	hello->name = name;
	hello->age = age;
	hello->owner = owner;

	return (hello);
}
