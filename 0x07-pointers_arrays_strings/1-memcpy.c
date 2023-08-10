#include "main.h"

/**
 * _memcpy - a function to copy a memory block.
 * @dest: the destination block.
 *@src: the source block.
 * @n: the first bytes to copy from src to dest.
 * Return: returns the destination block.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
