#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that prints diffrent numbers
 * Retrun: 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, m);
	}
	else if (m < 6 || m != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	printf("\n");
	return (0);
}