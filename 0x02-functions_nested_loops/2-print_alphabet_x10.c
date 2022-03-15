#include "main.h"
/**
 * print_alphabet_x10 - print the alpha bet 3 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int loop = 0, alpha;

	while (loop < 10)
	{
		alpha = 97;

		while (alpha < 123)
		{
			_putchar(alpha);
			alpha++;
		}
		loop++;
		_putchar('\n');
	}
}
