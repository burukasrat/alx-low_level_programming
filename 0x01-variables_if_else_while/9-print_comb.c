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
		if (num != 57) /* stop at 9*/
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
