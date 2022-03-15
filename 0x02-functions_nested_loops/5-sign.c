#include "main.h"
/**
 * print_sign - print sign of num
 * Return: 1 +ve 0  -1 -ve
 * @n: number
 */
int print_sign(int n)
{
	if (n > 0) /* print +*/
	{
		return (1);
	}
	else if (n < 0) /* print -*/
	{
		return (-1);
	}
	else /* print 0*/
	{
		return (0);
	}
}
