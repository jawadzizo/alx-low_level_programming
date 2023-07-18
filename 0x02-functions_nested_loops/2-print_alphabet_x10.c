#include "main.h"
#include <unistd.h>


void print_alphabet_x10(void)
{
	
	for (int c = 0; c <= 9; c++)
	{
		for (int i = 'a'; i <= 'z'; i++)
			_putchar(i);

		if (c != 9)	
			_putchar('\n');
	}

	_putchar('\n');

}


