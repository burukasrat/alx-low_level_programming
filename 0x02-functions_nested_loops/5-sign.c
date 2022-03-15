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
		_putchar(43);
		return (1);
	}
	else if (n < 0) /* print -*/
	{
		_putchar(45);
		return (-1);
	}
	else /* print 0*/
	{
		_putchar(48);
		return (0);
	}
}
