#include "main.h"
/**
 * _abs - A program that prints absolute figures
 * @c: character to be computered
 * Return: absolute value
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
