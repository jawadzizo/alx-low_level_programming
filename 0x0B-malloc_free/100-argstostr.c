#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function to concatenate arguments into one string.
 * @ac: the count of arguments.
 * @av: the arguments.
 * Return: returns the concatenated string.
 */

char *argstostr(int ac, char **av)
{
	char *string;
	int lenght = 0;
	int i;
	int j;
	int k = 0;


	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			lenght++;
	}

	string = (char *)malloc(lenght + ac);

	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			string[k] = av[i][j];
			k++;
		}

		string[k] = '\n';
		k++;
	}

	return (string);
}
