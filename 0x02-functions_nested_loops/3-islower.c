#include "main.h"
/**
 * _islower - checks if c is lowercase
 * Return: 1 if lowercase other wise 0
 */
int _islower(int c)
{
	if (c < 123 && c > 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * main - the main function
 * Return: 0 always
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r  
