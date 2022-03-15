#include "main.h"
/**
 * _isalpha - checks alphabet
 * Return: 1 alpha 0 other
 * @c: ascii value of char
 */
int _isalpha(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
