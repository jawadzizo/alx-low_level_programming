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
 * append_text_to_file - a function to append text to a given file.
 * @filename: the file to append text to it.
 * @text_content: the text to append to the file.
 * Return: returns 1 for success, or -1 for failure.
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int opening, writing, seeking;

	if (filename == NULL)
		return (-1);

	opening = open(filename, O_RDWR, 0);

	if (opening == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
		return (1);

	seeking = lseek(opening, 0L, 2);

	if (seeking == -1)
	{
		close(opening);
		return (-1);
	}

	writing = write(opening, text_content, _strlen(text_content));

	if (writing == -1)
	{
		close(opening);
		return (-1);
	}

	return (1);
}
