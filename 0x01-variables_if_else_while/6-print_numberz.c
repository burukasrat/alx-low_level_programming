#include<stdio.h>
/**
 * main - this is the main funciton 
 * Return: 0 always
 */
int main(void)
{
	int num = 48;

	while (num < 58) /* print numbers */
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
