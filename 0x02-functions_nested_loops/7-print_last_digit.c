#include "main.h"
/**
 * print_last_digit - last digit
 * Return: return last digit
 * @n: num
 */
int print_last_digit(int n)
{
	int num[10] = {48, 49, 50, 51, 52,
		53, 54, 55, 56, 57};
	_putchar(num[n % 10]);
	return (n % 10);
}
