#include "main.h"
/**
 * _isupper - checks if c is upperccase
 * Return: 1 if upper, 0 otherwise
 * @c: character int value
 */
int _isupper(int c)
{
	if (c > 64 && c < 91) /* checks if upper */
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
