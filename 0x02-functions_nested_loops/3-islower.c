#include "main.h"
/**
 * _islower - checks if c is lowercase
 * Return: 1 if lowercase other wise 0
 * @c: ascii value of char
 */
int _islower(int c)
{
	if (c < 123 && c > 96) /* check lower*/
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
