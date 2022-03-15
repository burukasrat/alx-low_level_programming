#include "main.h"
/**
 * main - this is the main function
 * Return: 0
 */
int main(void)
{
	char c[8] = {'_','p','u','t','c','h','a','r'};
	int loop = 0;
	while (loop < 8)
	{
		_putchar("%d",c[loop]);
	}
	return (0);
}
