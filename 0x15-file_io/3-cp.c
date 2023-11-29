#include "main.h"

#define BUFFSIZE 1024

void close_file(int open_fd);
int open_to_read(char *filename);
int open_to_append(char *filename);
void copying(int open1, int open2, char *filename1, char *filename2);

/**
 * main - a program to copy the content of a file to another file.
 * @argc: the number of files passed to the program, they must be 2 files.
 * @argv: the files to be passed to the program.
 * Return: returns 0 after success, or other numbers after errors.
 */

int main(int argc, char **argv)
{
	int open1, open2;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	open1 = open_to_read(argv[1]);
	open2 = open_to_append(argv[2]);

	copying(open1, open2, argv[1], argv[2]);

	close_file(open1);
	close_file(open2);

	return (0);
}


/**
 * open_to_read - a function to open the first file to be read.
 * @filename: the name of the file to be read.
 * Return: return the file desciptor to be used later, or 98 if failed.
 */


int open_to_read(char *filename)
{
	int opening = open(filename, O_RDONLY, 0);

	if (opening == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	return (opening);
}


/**
 * open_to_append - a function to open the second file and copy content to it.
 * @filename: the name of the file to copy first file's content to it.
 * Return: return the file desciptor to be used later, or 99 if failed.
 */


int open_to_append(char *filename)
{
	int opening = open(filename, O_WRONLY | O_CREAT, 664);

	if (opening == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	lseek(opening, 0L, 2);

	return (opening);
}


/**
 * copying - a function that copies the content of a file to another.
 * @open1: the file descriptor of the first file.
 * @open2: the file descriptor of the second file.
 * @filename1: the first file to get the content from.
 * @filename2: the second file to copy the content to.
 */


void copying(int open1, int open2, char *filename1, char *filename2)
{
	char text[BUFFSIZE];
	int read1, write2;

	while (1)
	{
		read1 = read(open1, text, BUFFSIZE);

		if (read1 == 0)
			break;

		if (read1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename1);
			exit(98);
		}

		write2 = write(open2, text, read1);

		if (write2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename2);
			exit(99);
		}
	}
}


/**
 * close_file - a function to close a file.
 * @open_fd: the file descriptor of the file to be closed.
 */


void close_file(int open_fd)
{
	int closing = close(open_fd);

	if (closing == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", open_fd);
		exit(100);
	}
}
