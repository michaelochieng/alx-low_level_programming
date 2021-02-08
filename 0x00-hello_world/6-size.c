#include <stdio.h>
int main(void)
{
	float f;
	int n;
	char m;
	long int nl;
	long long int nll;

	printf("Size of a char: %lu byte(s)\n", sizeof(m));
	printf("Size of a int: %lu byte(s)\n", sizeof(n));
	printf("Size of a long int: %lu byte(s)\n", sizeof(nl));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(nll));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));

	return(0);
}
