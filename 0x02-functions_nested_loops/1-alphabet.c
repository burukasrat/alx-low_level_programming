#include<stdio.h>
/**
 * print_alphabet - print the alphabet followed with newline
 * Return: noting
 */
void print_alphabet(void)
{
	int loop = 97;

	while (loop < 123) /* print the alphabet */
	{
		_putchar("%c",loop);
		loop++;
	}
	_putchar('\n');
}
/**
 * main - check the code
 * Return: always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

