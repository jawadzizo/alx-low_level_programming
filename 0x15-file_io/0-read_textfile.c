#include "main.h"

/**
 * read_textfile - a function similat to cat.
 * @filename: the file to print to stdout.
 * @letters: the numbers of characters to read.
 * Return: returns th number of read and written characters, or 0 if failed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int opening, writing, reading;
	char *text;

	if (filename == NULL)
		return (0);

	opening = open(filename, O_RDONLY, 0);

	if (opening == -1)
		return (0);

	text = malloc(letters + 1);

	if (text == NULL)
	{
		free(text);
		exit(1);
	}

	reading = read(opening, text, letters);

	if (reading == -1)
	{
		free(text);
		return (0);
	}

	writing = write(STDOUT_FILENO, text, reading);

	if (writing == -1)
	{
		free(text);
		return (0);
	}

	free(text);
	close(opening);

	return (reading);
}
