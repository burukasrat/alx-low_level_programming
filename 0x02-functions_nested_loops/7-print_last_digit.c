#include "main.h"
/**
 * print_last_digit - last digit
 * Return: return last digit
 * @n: num
 */
int print_last_digit(int n)
{
	int last;
	int num[10] = {48, 49, 50, 51, 52,
		53, 54, 55, 56, 57};

	if (n >= 0) /* negative */
	{
		last = n % 10;
	}
	else
	{
		n = n * (-1);
		last = n % 10;
	}
	_putchar(num[last]);
	return (last);
}
