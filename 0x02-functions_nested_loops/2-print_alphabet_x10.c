#include<stdio.h>
/**
 * print_alphabet_x10 - print the alpha bet 3 times
 * Return: void
 */
void print_alphabet_x10()
{
	int loop = 0, alpha = 97;

	while (loop < 5)
	{
		while (alpha < 123)
		{
			_putchar("%c", alpha);
			alpha++;
		}
		loop++;
		_putchar('\n');
	}
}
/**
 * main - the main function
 * Return: always 0
 */
int main(void)
{
	prirnt_alphabet_x10();
	return (0);
}
