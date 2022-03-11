#include<stdio.h>
/**
 * main - the main function 
 * Return: 0 always
 */
int main(void)
{
	int alpha = 97;
	while(alpha < 123)/* print the alphbet using putchar */
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
