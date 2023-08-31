/**
 * set_bit - a function to set 1 at a given index.
 * @n: the number to operate on.
 * @index: where to set 1.
 * Return: returns 1 after success.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	long unsigned int new = 1;
	long unsigned int i;

	for (i = 0; i < index; i++)
	new *= 2;

	*n = *n | new;

	return (1);
}
