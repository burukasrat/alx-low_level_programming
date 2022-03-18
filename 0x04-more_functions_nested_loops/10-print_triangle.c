#include "main.h"
/**
 * print_triangle - prints a triangle
 * Return: void
 * @size: height and base
 */
void print_triangle(int size)
{
	int a = 0, b, c = 1,
	    d = size - 1, e;

	while (a < size)
	{
		b = 0;
		while (b < d)
		{
			_putchar(32);
			b++;
		}
		d--;
		e = 0
		while (e < c)
		{
			_putchar(35);
			e++;
		}
		c++;
		_putchar('\n');
		a++;
	}
}
