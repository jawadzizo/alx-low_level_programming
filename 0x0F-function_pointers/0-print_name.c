#include "function_pointers.h"

/**
 * print_name - a function to print a name using another function.
 * @name: the name to print.
 * @f: the function to use.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;

	f(name);
}
