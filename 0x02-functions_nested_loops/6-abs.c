#include "main.h"
/**
 * _abs - absolut value
 * Return: absolute value
 * @n: num
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return ((n * (-1)));
	}
	else
		return (0);
}
