#include <stdio.h>
/**
 * main - A program that prints hexadecimals
 *
 * Return: always 0
 */
int main(void)
{
	int x;
	int y;

	for (x = 1; x < 10; x++)
	{
		putchar(x);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
