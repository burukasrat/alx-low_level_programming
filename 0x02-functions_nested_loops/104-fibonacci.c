#include <stdio.h>
/**
 * print_fibonacci - hello
 * Return: void
 */
void print_fibonacci(void)
{
	long double n1 = 1, n2 = 2,
	     sum = 0, counter = 0;
	
	printf("%Lf, %Lf, ", n1, n2);
	while (counter < 98)
	{
		sum = n1 + n2;
		if (counter == 97)
		{
			printf("%Lf\n", sum);
		}
		else
		{
			printf("%Lf, ", sum);
		}
		n1 = n2;
		n2 = sum;
		counter++;
	}
}
/**
 * main - main
 * Return: int
 */
int main(void)
{
	print_fibonacci();
	return (0);
}
