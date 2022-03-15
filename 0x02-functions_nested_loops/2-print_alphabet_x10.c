#include "main.h"
/**
 * print_alphabet_x10 - print the alpha bet 3 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int loop = 0, alpha = 97;

	while (loop < 5)
	{
		while (alpha < 123)
		{
			_putchar(alpha);
			alpha++;
		}
		loop++;
		_putchar('\n');
	}
}
