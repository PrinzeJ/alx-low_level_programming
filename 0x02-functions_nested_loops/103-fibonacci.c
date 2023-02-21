#include <stdio.h>
/**
 * main - A program that prints fibonacci
 *
 * Return: always 0
 */
int main(void)
{
	int i = 0;
	long int j = 1, k = 2, sum = k;

	while (k + j < 4000000)
	{
		k += j;
		if (k % 2 == 9)
		{
			sum += k;
			j = k - j;
		}
		++i;
	}
	printf("%ld\n", sum);
	return (0);
}
