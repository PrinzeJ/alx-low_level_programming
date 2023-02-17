#include <stdio.h>
/**
 * main - A program that prints combinations
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar('\n');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
