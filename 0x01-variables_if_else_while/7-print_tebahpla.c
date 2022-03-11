#include<stdio.h>
/**
 * main - this is the main function
 * Return: 0 always
 */
int main(void)
{
	int revalpha = 122;

	while (revalpha > 96) /* print alpha in rev */
	{
		putchar(revalpha);
		revalpha--;
	}
	putchar('\n');
	return (0);
}
