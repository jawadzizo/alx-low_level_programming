#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function to print the values of struct dog
 * @d: the struct to print
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("age: %f\n", d->age);
	printf("owner: %s\n", d->owner);
}
