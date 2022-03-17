#include "main.h"
/**
 * _isdigit - checks if c is a digit
 * Return: 1 if true 0 otherwise
 * @c: int value of char
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
