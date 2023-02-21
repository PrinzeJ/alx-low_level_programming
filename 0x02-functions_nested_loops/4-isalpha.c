#include "main.h"
/**
 * _isalpha - A program that print alphabets
 * @c: The character to be checked
 * Return: 1 if lowercase or 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
