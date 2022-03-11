#include<stdio.h>
/**
 * main - this is the main funciton
 * Return: 0 always
 */
int main(void)
{
	int num = 48;
	int alpha = 97;

	while (num < 58) /* print 0-9*/
	{
		putchar(num);
		num++;
	}
	while (alpha < 103) /* print a-f*/
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
