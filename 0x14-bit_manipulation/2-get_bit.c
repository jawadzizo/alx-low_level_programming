

/**
 * get_bit - a function to return the value at a given index.
 * @n: the number to operate on.
 * @index: the index where to return the value.
 * Return: returns the value at the given index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int binary[32];
	int i;

	for (i = 0; n > 0; i++)
	{
		binary[i] = n % 2;
		n = n / 2;
	}

	if (binary[index] == 0)
	return (0);

	else
	return (1);
}
