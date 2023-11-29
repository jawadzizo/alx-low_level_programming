#include "main.h"

/**
 * _strlen - a function to find a string's lenght.
 * @string: the string to find its lenght.
 * Return: returns the lenght of the string.
 */

unsigned int _strlen(const char *string)
{
	int i = 0;

	while (string[i] != '\0')
		i++;

	return (i);
}


/**
 * create_file - a function to create a file and add some test to it.
 * @filename: the name of the file to be created.
 * @text_content: the text to add to the file after creating it.
 * Return: returns 1 after success, and -1 after failing.
 */


int create_file(const char *filename, char *text_content)
{
	int creating, writing;

	if (text_content == NULL)
		return (-1);

	creating = creat(filename, 600);

	if (creating == -1)
		return (-1);

	writing = write(creating, text_content, _strlen(text_content));

	if (writing == -1)
	{
		close(creating);
		return (-1);
	}

	return (1);
}
