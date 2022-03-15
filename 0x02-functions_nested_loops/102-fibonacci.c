#include<stdio.h>
/**
 * fibonacci - sequence
 * Return: void
 */
void fibonacci(void)
{
	long int n1 = 1, n2 = 2, sum, counter = 0;

	printf("%ld, %ld, ", n1, n2);
	while (counter < 48)
	{
		sum = n1 + n2;
		if (counter == 47)
		{
			printf("%ld\n", sum);
		}
		else
		{
			printf("%ld, ", sum);
		}
		n1 = n2;
		n2 = sum;
		counter++;
	}
}
/**
 * main - main
 * Return: 0 always
 */
int main(void)
{
	fibonacci();
	return (0);
}
