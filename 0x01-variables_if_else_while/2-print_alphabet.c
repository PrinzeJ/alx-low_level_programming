#include <stdio.h>
/**
 * main - A program that prints alphabets in lower case
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
