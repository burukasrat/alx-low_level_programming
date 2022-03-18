#include "main.h"
/**
 * print_square - prints square
 * Return: void
 * @size: size
 */
void print_square(int size)
{
	int a = 0, b;

	while (a < size)
	{
		b = 0;
		while (b < size)
		{
			_putchar(35);
			b++;
		}
		_putchar('\n');
		a++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
