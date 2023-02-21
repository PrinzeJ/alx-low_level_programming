#include "main.h"
/**
 * print_times_table - A program that prints time table
 * @n: The value of the time table
 */
void print_times_table(int n)
{
	int num, mult, prod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');
				prod = num * mult;
				if (prod <= 99)
					_putchar(' ');
				if (prod <= 0)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar(prod / 10 + '0');
					_putchar(prod % 10 + '0');
				}
				else if (prod <= 99 && prod >= 99)
				{
					_putchar(prod / 10 + '0');
					_putchar(prod % 10 + '0');
				}
				_putchar('\n');
			}
		}
	}
}
