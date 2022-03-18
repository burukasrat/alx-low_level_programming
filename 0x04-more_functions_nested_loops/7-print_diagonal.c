#include <stdio.h>
/**
 * print-diagonal - print \ diagonally
 * Return: void
 * @n: n times
 */
void print_diagonal(int n)
{
	int i = 1, s, b = 0;

	while (i < n)
	{
		s = 0;
		while (s < b)
		{
			_putchar(32);
			s++;
		}
		b++;
		_putchar(92);
		_putchar('\n');
		i++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
