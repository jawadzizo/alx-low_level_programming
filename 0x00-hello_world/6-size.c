#include<stdio.h>
int main(void)
{
	char c;
	int i;
	long int l;
	long long int ll;
	float f;

	printf("Size of a char: %li byte(s)\n", sizeof(c));
	printf("Size of a int: %li byte(s)\n", sizeof(i));
	printf("Size of long int: %li byte(s)\n", sizeof(l));
	printf("Size of long long int: %li byte(s)\n", sizeof(ll));
	printf("Size of a float: %li byte(s)\n", sizeof(f));
	return (0);
}
