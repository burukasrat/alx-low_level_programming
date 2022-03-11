#include<stdio.h>
/**
 * main - this is the main function
 * Return: 0 always
 */
int main(void)
{
	int num = 48;

	while (num < 58) /*print in ascending*/
	{
		putchar(num);
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
}
