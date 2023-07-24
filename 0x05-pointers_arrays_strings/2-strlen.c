#include "main.h"



int _strlen(char *s)
{
	int i;
	int len;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	return(len);
}
