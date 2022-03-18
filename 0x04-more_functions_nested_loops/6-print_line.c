#include "main.h"
/**
 * print_line - prints n length "_"
 * Return: void
 * @n: reptition
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
