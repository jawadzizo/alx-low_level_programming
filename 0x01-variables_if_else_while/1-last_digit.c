#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int m = n;

	while (m >= 10)
		m = m - 10;

	while (m <= -10)
		m = m + 10;

	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);

	if (m == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);

	if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);

	return (0);
}
