#include "main.h"
/**
 * print_sign - A program that prints the sign of a number
 * @n: The character to be checked
 * Return: 1 if number is greater than zero and -1 if number is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
