#include <stdio.h>
/**
 * sum_fibonacci - sum
 * Return: void
 */
void sum_fibonacci(void)
{
	long int n1 = 1, n2 = 2, sum = 0, result = 2;

	while (sum < 4000000)
	{
		sum = n1 + n2;
		if ((sum % 2) == 0)
		{
			result += sum;
		}
		n1 = n2;
		n2 = sum;
	}
	printf("%ld\n", result);
}
/**
 * main - main
 * Return: 0 always
 */
int main(void)
{
	sum_fibonacci();
	return (0);
}
