#include "main.h"
/**
 * print_alphabet - print alphabet
 * Return: void
 */
void print_alphabet(void)
{
	int loop = 97;

	while (loop < 123)
	{
		_putchar(loop);
		loop++;
	}
	_putchar('\n');
}
